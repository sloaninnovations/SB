;(function($){
  
  /**
   * Mobile Navigation
   */
  Drupal.behaviors.themeMobileNavigation = {
    attach: function(context, settings) {
      // Menu
      var header = $('#header', context);
      header.once('menu', function(){
        var menu = $('#menu', header);
        var menuToggle = $('.mobile-menu a.toggle', header);
        var ul = $('ul.menu.nav, .menu-block-wrapper > ul.menu', menu);
        if (menu.length && menuToggle.length && ul.length) {
          menuToggle.click(function(){
            menu.slideToggle();
          });
          // Initially hide the indicators, will be shown visible after logic has been processed.
          var indicators = $('.menu-indicator', header).css({
            display: 'block',
            left: $('> li', ul).first().offset().left,
            opacity: 0,
            width: $('> li', ul).first().outerWidth(true)
          });
          // Set initial active item.
          var active = $('> li.active, > li.active-trail', ul).first();
          // mouseenter function.
          var itemEnter = function(item) {
            if (indicators.is(':visible') && item.is(':not(:visible)')) {
              indicators.animate({
                opacity: 0
              });
              return;
            }
            var left = item.offset().left;
            var width = item.outerWidth(true);
            // If the indicators are initially hidden, just set the width and left position.
            if (indicators.is(':not(:visible)')) {
             indicators.stop(true, true).css({
               left: left,
               width: width,
               avoidTransforms: true
             });
            }
            else {
              indicators.stop().animate({
                left: left,
                opacity: 1,
                width: width,
                avoidTransforms: true
              });
            }
          };
          // mouseleave function.
          var itemLeave = function() {
            if (active.length) {
              itemEnter(active);
            }
            else {
              indicators.stop(true, true).animate({
                opacity: 0
              });
            }
          };
          // Bind the mouseenter events on the items.
          $('li', ul).each(function(index, item){
            item = $(item);
            item.bind('mouseenter', function(){
              itemEnter(item);
            });
          });
          // Bind the mouseleave even on the item container.
          ul.bind('mouseleave', function(){
            itemLeave();
          });
          // Set initial active state.
          if (active.length) {
            itemEnter(active);
            $(window).resize(function(){
              itemEnter(active);
            });
          }
        }
      });
    }
  };

  /**
   * Equal Heights
   */
  Drupal.behaviors.themeBeanSlide = {
    attach: function (context) {
      var beanslide = $('.beanslide', context);
      beanslide.once('theme-bean-slide', function(){
        $('.flex-control-nav, .flex-direction-nav', beanslide).addClass('container');
      });
    }
  };
  
  /**
   * Equal Heights
   */
  Drupal.behaviors.themeEqualHeights = {
    attach: function (context) {
      $('body', context).once('theme-equalheights', function () {
        $(window).bind('resize.theme.equalheights', function () {
          $($('.equal-height-container').get().reverse()).each(function () {
            var elements = $(this).children('.equal-height-element').css('height', '');
            var tallest = 0;
            elements.each(function () {    
              if ($(this).height() > tallest) {
                tallest = $(this).outerHeight();
              }
            }).each(function() {
              if ($(this).height() < tallest) {
                $(this).css('height', tallest);
              }
            });
          });
        }).load(function () {
          $(this).trigger('resize.theme.equalheights');
        });
      });
    }
  };
  
  /**
   * Smooth Scrolling Anchors
   */
  Drupal.behaviors.themeSmoothAnchors = {
    attach: function(context, settings) {
      var filterPath = function (string) {
        return string
          .replace(/^\//,'')
          .replace(/(index|default).[a-zA-Z]{3,4}$/,'')
          .replace(/\/$/,'');
      }
      var scrollableElement = function (els) {
        for (var i = 0, argLength = arguments.length; i <argLength; i++) {
          var el = arguments[i],
              $scrollElement = $(el);
          if ($scrollElement.scrollTop()> 0) {
            return el;
          } else {
            $scrollElement.scrollTop(1);
            var isScrollable = $scrollElement.scrollTop()> 0;
            $scrollElement.scrollTop(0);
            if (isScrollable) {
              return el;
            }
          }
        }
        return [];
      }
      var locationPath = filterPath(location.pathname);
      var scrollElem = scrollableElement('html', 'body');
      $('a[href*=#]', context).each(function() {
        var thisPath = filterPath(this.pathname) || locationPath;
        if (  locationPath == thisPath
        && (location.hostname == this.hostname || !this.hostname)
        && this.hash.replace(/#/,'') ) {
          var $target = $(this.hash), target = this.hash;
          if ($target.length) {
            var targetOffset = $target.offset().top;
            $(this).click(function(event) {
              event.preventDefault();
              $(scrollElem).animate({scrollTop: targetOffset, avoidTransforms: true}, 400, function() {
                location.hash = target;
              });
            });
          }
        }
      });
    }
  };
    
  /**
   * Image Circle Styling
   */
  Drupal.behaviors.themeImageCircles = {
    attach: function(context, settings) {
      $('img.style-image-circle', context).once('theme-image-circles', function(){
        var image = $(this);
        image.wrap($('<span/>').css({
          backgroundImage: 'url(' + image.attr('src') + ')',
          height: image.attr('height') + 'px',
          width: image.attr('width') + 'px'
        }).addClass(image.attr('class')));
      });
    }
  };
  
  /**
   * Affix Sticky Support
   */
   Drupal.behaviors.themeAffix = {
    attach: function(context, settings) {
      $('.ds-sticky', context).once('theme-affix', function(){
        var sticky = $(this);
        var stickyResize = function(element) {
          element.css({
            left: element.parent().offset().left,
            width: element.parent().width() + 1
          });
        }
        $(window).resize(function(){
          stickyResize(sticky);
        })
        stickyResize(sticky);
        sticky.parent().css('min-height', sticky.parent().height());
        sticky.affix({
          offset: {
            top: $('body').hasClass('admin-menu') ? sticky.offset().top - 30 : sticky.offset().top
          }
        });
      });
    }
  };

  /**
   * AddThis Firefox Fix
   */
  Drupal.behaviors.themeAddThis = {
    attach: function(context, settings) {
      if ($.browser.mozilla != undefined && $.browser.mozilla) {
        $(document).ready(function () {
          // AddThis Dialog Fix For Firefox
          $('body').on('click', '#at3winheaderclose', function(){
            $('> #at3win', $('body')).css('opacity', 0).hide();
          });
        });
      }
    }
  };
  
})(jQuery);