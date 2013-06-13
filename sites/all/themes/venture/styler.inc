<?php

$styles['type'] = array(
  'title' => 'type',
  'element' => array(
    '#tag' => 'markup',
    '#value' => '<h1>Heading 1</h1>
<h2>Heading 2</h1>
<h3>Heading 3</h1>
<h4>Heading 4</h1>
<h5>Heading 5</h1>
<h6>Heading 6</h1>
<div class="block">
  <div class="title-wrapper">
    <h2 class="block-title">Block Title</h2>
    <div class="line"></div>
  </div>
</div>
<div class="block">
  <div class="title-wrapper">
    <h2 class="block-title">For long-title syndrome, this is what the styling would look like</h2>
    <div class="line"></div>
  </div>
</div>
<aside>
  <div class="block">
    <div class="title-wrapper">
      <h2 class="block-title">Sidebar Block Title</h2>
      <div class="line"></div>
    </div>
  </div>
</aside>
<p>FIRST PARAGRAPH - Cras mattis <em>consectetur purus</em> sit amet fermentum. Nullam quis <strong>risus eget urna mollis</strong> ornare vel eu leo. Maecenas faucibus mollis interdum. Nullam quis risus eget urna mollis ornare vel eu leo.</p>
<p>SECOND PARAGRAPH - Cras mattis consectetur purus sit amet fermentum. Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Sed posuere consectetur est at lobortis. Aenean eu leo quam. Pellentesque ornare sem <em><strong>lacinia quam venenatis vestibulum</strong></em>. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Nullam id dolor id nibh ultricies vehicula ut id elit.</p>
'
  ),
);

$styles['category_list'] = array(
  'title' => 'Category List',
  'element' => array(
    '#tag' => 'ul',
    '#attributes' => array(
      'class' => 'style-category-list',
    ),
    '#value' => '
  <li><a href="#">One</a></li>
  <li><a href="#">Two</a></li>
  <li><a href="#">Three</a></li>
  <li><a href="#">Four</a></li>
  <li><a href="#">Five</a></li>
  <li><a href="#">Six</a></li>
  <li><a href="#">Seven</a></li>
  <li><a href="#">Eight</a></li>
  <li><a href="#">Nine</a></li>
',
  ),
);

$styles['date_stacked'] = array(
  'title' => 'Date Stacked',
  'element' => array(
    '#tag' => 'div',
    '#attributes' => array(
      'class' => 'style-date-stacked',
    ),
    '#value' => '
  <span class="day">' . date('d') . '</span>
  <span class="month">' . date('M') . '</span>
  <span class="arrow"></span>
',
  ),
);

$styles['date_banner'] = array(
  'title' => 'Date Banner',
  'element' => array(
    '#tag' => 'div',
    '#attributes' => array(
      'class' => 'style-date-banner',
    ),
    '#value' => '
  <span class="date">' . date('M d') . '</span>
  <span class="author">Kayla Wren</span>
  <span class="arrow"></span>
',
  ),
);

$styles['image_circle'] = array(
  'title' => 'Image Circle',
  'element' => array(
    '#tag' => 'markup',
    '#value' => '<img class="style-image-circle" height= "70" width="70" src="http://lorempixel.com/70/70/people" alt="Image" />',
  ),
);

$styles['gray_box'] = array(
  'title' => 'Gray Box',
  'element' => array(
    '#tag' => 'div',
    '#attributes' => array(
      'class' => 'style-gray-box',
    ),
    '#value' => '
  <img src="http://lorempixel.com/500/260" alt="Image" />
',
  ),
);

$styles['blog_mini'] = array(
  'title' => 'Blog: Mini',
  'description' => t('Display Suite Layout: %layout', array('%layout' => 'Bootstrap > Two column stacked')),
  'element' => array(
    '#tag' => 'article',
    '#attributes' => array(
      'class' => 'style-blog-mini clearfix',
    ),
    '#value' => '
  <header class="ds-header">
    <img src="http://lorempixel.com/500/260" alt="Image" />
  </header>
  <section class="ds-left">' .
    theme('html_tag', $styles['date_stacked'])
  . '</section>
  <section class="ds-right">
    <h3 class="title">Here is a recent post that will go lower ...</h3>
    <div class="author">Author: <a rel="me" href="#">Kayla Wren</a></div>
  </section>
',
  ),
);

$styles['blog_teaser'] = array(
  'title' => 'Blog: Teaser',
  'description' => t('Display Suite Layout: %layout', array('%layout' => 'Bootstrap > Two column stacked')),
  'element' => array(
    '#tag' => 'article',
    '#attributes' => array(
      'class' => 'style-blog-teaser clearfix',
    ),
    '#value' => '
  <header class="ds-header">
    <img src="http://lorempixel.com/500/260" alt="Image" />
  </header>
  <section class="ds-left">' .
    theme('html_tag', $styles['date_stacked'])
  . '</section>
  <section class="ds-right">
    <h3 class="title">Here is a recent post that will go lower ...</h3>
    <div class="author">Author: <a rel="me" href="#">Kayla Wren</a></div>
    <div class="teaser">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin erat ipsum, commodo non commodo sit amet, porttitor quis est la di. <a href="#">Read More &gt;&gt;</a></div>
  </section>
',
  ),
);


$styles['blog_quote'] = array(
  'title' => 'Blog: Quote',
  'description' => t('Display Suite Layout: %layout', array('%layout' => 'Bootstrap > One column stacked')),
  'element' => array(
    '#tag' => 'article',
    '#attributes' => array(
      'class' => 'style-blog-quote',
    ),
    '#value' => '
  <section class="ds-middle">
    <h3 class="title">Blog Title Goes Here</h3>
    <div class="teaser">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin erat ipsum, commodo non commodo sit amet, porttitor quis est la di. <a href="#">Read More &gt;&gt;</a></div> 
  </section>
  <footer class="ds-footer">
    ' .
  theme('html_tag', $styles['date_banner']) . theme('html_tag', $styles['image_circle']) . '
  </footer>
',
  ),
);

$styles['services'] = array(
  'title' => 'Services',
  'description' => t('A list of all icons available can be viewed on the !fontawesome website. NOTE: You may also add the class "pull-left" to the icon to float it to the left.', array('!fontawesome' => l('Font Awesome', 'http://fortawesome.github.com/Font-Awesome/#all-icons', array('attributes' => array('target' => '_blank'))))),
  'element' => array(
    '#tag' => 'section',
    '#attributes' => array(
      'class' => 'style-services',
    ),
    '#value' => '
  <i class="icon-github"></i>
  <div class="content">
    <h3 class="title">Title</h3>
    <div class="teaser">Sed ut perspiciatis unde omnis iste natus voluptatem fringilla tempor dignissim at, pretium et arcu.</div>
  </div>
  <a class="more-link" href="#">Read More</a>
',
  ),
);

$styles['services_left_aligned'] = array(
  'title' => 'Services (Left Aligned)',
  'description' => t('NOTE: You also need to ensure that the "%pull-left" class is added to the icon.', array('%pull-left' => 'pull-left')),
  'element' => array(
    '#tag' => 'section',
    '#attributes' => array(
      'class' => 'style-services-left',
    ),
    '#value' => '
  <i class="pull-left icon-leaf"></i>
  <div class="content">
    <h3 class="title">Title</h3>
    <div class="teaser">Sed ut perspiciatis unde omnis iste natus voluptatem fringilla tempor dignissim at, pretium et arcu.</div>
  </div>
  <a class="more-link" href="#">Read More</a>
',
  ),
);

$styles['social_media'] = array(
  'title' => 'Social Media',
  'element' => array(
    '#tag' => 'section',
    '#attributes' => array(
      'class' => 'style-social-media',
    ),
    '#value' => '
  <a href="#"><i class="icon-facebook"></i></a>
  <a href="#"><i class="icon-twitter"></i></a>
  <a href="#"><i class="icon-github"></i></a>
  <a href="#"><i class="icon-drupal"></i></a>
',
  ),
);