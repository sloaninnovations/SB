<section id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="block-inner">
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <div class="title-wrapper">
        <h2<?php print $title_attributes; ?>><?php print html_entity_decode($title); ?></h2>
        <div class="line"></div>
      </div>
    <?php endif;?>
    <?php print render($title_suffix); ?>
    <div class="content">
      <?php print $content ?>
    </div>
  </div>
</section> <!-- /.block -->
