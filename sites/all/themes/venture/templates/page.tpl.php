<header id="header" role="header">
  <div class="navigation-inner container">
    <div class="row-fluid">
      <div id="logo" class="span3 pull-left">
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
      <nav id="menu" class="span9 pull-right" role="navigation">
        <?php if (!empty($primary_nav)): ?>
          <?php print render($primary_nav); ?>
        <?php endif; ?>
        <?php print render($page['menu']); ?>
        <div class="menu-indicator top hidden-phone"></div>
        <div class="menu-indicator bottom hidden-phone"></div>
      </nav>
    </div>
  </div>
</header>
<?php
  $header = render($page['header']);
  $featured = render($page['featured']);
  $wrapper_classes = array();
  if ($featured) {
    $wrapper_classes[] = 'has-feature';
  }
  if ($title) {
    $wrapper_classes[] = 'has-page-title';
  }
?>
<div id="wrapper"<?php if ($wrapper_classes): ?> class="<?php print implode(' ', $wrapper_classes); ?>"<?php endif; ?>>
  <?php if ($messages || $title_prefix || $title_suffix || $header || $site_slogan || (($title || $action_links) && !drupal_is_front_page())): ?>
    <header id="content-header" class="container" role="banner">
      <?php if ($messages): ?>
      <div class="row-fluid">
        <?php print $messages; ?>
      </div>
      <?php endif; ?>
      <?php if ($title_prefix || $title_suffix || $title || $action_links): ?>
      <div class="row-fluid contextual-links-region">
        <?php print render($title_prefix); ?>
        <?php if ($title && !drupal_is_front_page()): ?>
          <h1 class="page-title pull-left"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($action_links && !drupal_is_front_page()): ?>
          <ul class="action-links pull-right"><?php print render($action_links); ?></ul>
        <?php endif; ?>
      </div>
      <?php endif; ?>
      <?php if ($header): ?>
      <div class="row-fluid">
        <?php print $header; ?>
      </div>
      <?php endif; ?>
      <?php if ($site_slogan): ?>
      <div class="row-fluid">
        <p class="lead"><?php print $site_slogan; ?></p>
      </div>
      <?php endif; ?>
    </header>
  <?php endif; ?>
  <?php if ($featured): ?>
  <div id="featured" class="container" role="banner">
    <div class="row-fluid">
      <?php print render($page['featured']); ?>
    </div>
  </div>
  <?php endif; ?>
  <div id="content" role="content">
    <div class="container">
      <div class="row-fluid">
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
    </div>
  </div>
</div>
<footer id="footer">
  <div class="container">
    <div class="row-fluid">
      <?php print render($page['footer']); ?>
    </div>
  </div>
</footer>
