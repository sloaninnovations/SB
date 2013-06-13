<?php
  $primary_nav = menu_tree_page_data(variable_get('menu_main_links_source', 'main-menu'));
  $primary_nav = menu_tree_output($primary_nav);
?>
<header id="header" role="header">
  <div class="navigation-inner container">
    <div class="row-fluid">
      <div id="logo" class="pull-left span3">
        <?php if ($logo): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          </a>
        <?php endif; ?>
        <?php if ($site_name): ?>
          <h1 id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="brand"><?php print $site_name; ?></a>
          </h1>
        <?php endif; ?>
      </div>
      <div class="visible-phone mobile-menu">
        <a class="toggle btn btn-primary" href="javascript:void(0);">Menu <i class="icon-menu"></i></a>
      </div>
      <nav id="menu" class="pull-right" role="navigation">
        <?php if (!empty($primary_nav)): ?>
          <?php print render($primary_nav); ?>
        <?php endif; ?>
        <?php print render($page['menu']); ?>
      </nav>
    </div>
  </div>
</header>
<?php
  $header = render($page['header']);
  $featured = render($page['featured']);
  $wrapper_classes = array('row-fluid');
  if ($featured) {
    $wrapper_classes[] = 'has-feature';
  }
  if ($title) {
    $wrapper_classes[] = 'has-page-title';
  }
?>
<div id="wrapper"<?php if ($wrapper_classes): ?> class="<?php print implode(' ', $wrapper_classes); ?>"<?php endif; ?>>
  <?php if (!empty($breadcrumb) && !drupal_is_front_page()): ?>
    <div id="breadcrumbs">
      <div class="container">
        <?php print $breadcrumb; ?>
      </div>
    </div>
  <?php endif;?>
  <?php if ($title_prefix || $title_suffix || $header || $site_slogan || (($title || $action_links) && !drupal_is_front_page())): ?>
    <header id="content-header" role="banner">
      <div class="container">
        <?php if ($title_prefix || $title_suffix || $title || $action_links): ?>
        <?php if ($action_links && !drupal_is_front_page()): ?>
          <ul class="action-links pull-right"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <div class="view contextual-links-region">
          <?php print render($title_prefix); ?>
          <?php if ($title && !drupal_is_front_page()): ?>
            <h1 class="page-title"><?php print $title; ?></h1>
          <?php endif; ?>
          <?php print render($title_suffix); ?>
        </div>
        <?php endif; ?>
        <?php if ($header): ?>
          <?php print $header; ?>
        <?php endif; ?>
        <?php if ($site_slogan): ?>
          <p class="lead"><?php print $site_slogan; ?></p>
        <?php endif; ?>
      </div>
    </header>
  <?php endif; ?>
  <?php if ($messages): ?>
  <div class="container">
    <?php print $messages; ?>
  </div>
  <?php endif; ?>
  <?php if ($featured): ?>
  <div id="featured" class="container" role="banner">
    <?php print $featured; ?>
  </div>
  <?php endif; ?>
  <div id="content" role="content">
    <div class="container">
      <?php if ($page['sidebar_first']): ?>
        <aside class="span3" role="complementary">
          <?php print render($page['sidebar_first']); ?>
        </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>  
      <section class="<?php print _bootstrap_content_span($columns); ?>">  
        <?php if ($page['highlighted']): ?>
          <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
        <?php endif; ?>
        <a id="main-content"></a>
        <?php if ($tabs): ?>
          <?php print render($tabs); ?>
        <?php endif; ?>
        <?php print render($page['content']); ?>
      </section>
      <?php if ($page['sidebar_second']): ?>
        <aside class="span3" role="complementary">
          <?php print render($page['sidebar_second']); ?>
        </aside>  <!-- /#sidebar-second -->
      <?php endif; ?>
    </div>
    <?php if ($summary = render($page['summary'])): ?>
      <div class="container">
        <?php print $summary; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
<footer id="footer" class="row-fluid">
  <?php print render($page['footer_top']); ?>
  <?php print render($page['footer']); ?>
  <?php print render($page['footer_bottom']); ?>
</footer>
