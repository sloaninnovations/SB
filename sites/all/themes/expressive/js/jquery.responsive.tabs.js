/**
 * jQuery Responsive Tabs
 */
(function($){
  "use strict";
  $.fn.responsiveTabs = function(options) {
    var settings = {
      activeClass: 'active',
      activeSelectors: '.active',
      icon: '▼',
      text: 'More'
    };
    if (options) {
      $.extend(settings, options);
    }
    function setupTabs(ul) {
      ul = $(ul);
      // Only process ul once.
      if (ul.data('tabs-processed') === undefined) {
        // Save original ul width.
        ul.data('width', ul.innerWidth());
        // Create more tab
        var more = $('<li/>').addClass('more').css('opacity', 0).appendTo(ul);
        var moreLink = $('<a/>').attr('href', '#').html(settings.text + settings.icon).click(function(){
          return false;
        }).appendTo(more);
        var moreWidth = more.outerWidth();
        var moreMenu = $('<ul/>').appendTo(more);
        ul.data('more', more);
        ul.data('moreLink', moreLink);
        ul.data('moreMenu', moreMenu);
        ul.data('moreWidth', moreWidth);
        more.detach().css('opacity', 1);
        // Save original tab widths.
        var ulTabs = $();
        $('li', ul).each(function(){
          var li = $(this);
          li.data('width', li.outerWidth());
          // Add the li to the ulTabs data.
          ulTabs = ulTabs.add(li);
          $('a', li).click(function(){
            processTabs(ul);
            $('a', li).blur();
            li.blur();
          });
        });
        ul.data('tabs', ulTabs);
        ul.data('tabs-processed', true);
      }
    }
    function processTabs(ul) {
      ul = $(ul);
      // Position tabs if they are overflowing
      positionTabs(ul);
      var tabs = ul.data('tabs');
      var normal = $();
      var more = $();
      tabs.each(function(){
        var tab = $(this);
        var position = tab.data('position');
        if (position === 'more') {
          more = more.add(tab);
        }
        else {
          normal = normal.add(tab);
        }
      });
      // Overflow occured, attach more link
      var previousTab = $();
      var moreElem = ul.data('more').removeClass(settings.activeClass);
      if (more.length) {
        var moreMenu = ul.data('moreMenu');
        more.each(function(){
          var tab = $(this);
          if (tab.is(settings.activeSelectors)) {
            moreElem.addClass(settings.activeClass);
          }
          if (previousTab.length) {
            tab.insertAfter(previousTab);
          }
          else {
            tab.prependTo(moreMenu);
          }
          previousTab = tab;
        });
      }
      previousTab = $();
      normal.each(function(){
        var tab = $(this);
        if (previousTab.length) {
          tab.insertAfter(previousTab);
        }
        else {
          tab.prependTo(ul);
        }
        previousTab = tab;
      });
      // Attach the more link to the normal tabs.
      if (more.length) {
        var lastTab = normal.filter(':last');
        moreElem.insertAfter(lastTab);
      }
      else {
        moreElem.detach();
      }
    }
    function positionTabs(ul) {
      ul = $(ul);
      // Get current ul width.
      var ulWidth = ul.innerWidth();
      // Get data associated with ul.
      var tabs = ul.data('tabs');
      // Determine if tabs fit within the ul width.
      var overflow = false;
      var previousTab = $();
      tabs.each(function(){
        var currentTab = $(this);
        var currentWidth = ulWidth - currentTab.data('width');
        // Current tab fits
        if (currentWidth >= 0 && !overflow) {
          currentTab.data('position', 'normal');
        }
        // Current tab doesn't fit
        else {
          currentTab.data('position', 'more');
          // Determine if previous tab will fit with more link attached
          if (previousTab.length && !overflow) {
            var moreWidth = ul.data('moreWidth');
            var previousWidth = (ulWidth + previousTab.data('width')) - (previousTab.data('width') + moreWidth);
            // Previous tab doesn't fit
            if (previousWidth < 0) {
              previousTab.data('position', 'more');
            }
          }
          overflow = true;
        }
        // Iteration done, change previousTab to currentTab.
        previousTab = currentTab;
        ulWidth -= currentTab.outerWidth();
      });
    }
    function resizeTabs(ul) {
      ul = $(ul);
      var ulWidth = ul.innerWidth();
      if (ul.data('width') !== ulWidth) {
        ul.data('width', ulWidth);
        processTabs(ul);
      }
    }
    return this.each(function(){
      var ul = $(this);
      if (ul.is('ul, ol')) {
        setupTabs(ul);
        processTabs(ul);
        $(window).on('resize', ul, function(e){
          resizeTabs(e.data);
        });
      }
    });
  };
})(jQuery);
