/* Credit: http://www.adamwlewis.com/articles/making-flickr-badges-open-new-window%20tilte= */
var oFlickrTable = document.getElementById("social-flickr-list"), oFlickrBadgePhotos = oFlickrTable.getElementsByTagName("a"), nBadgePhoto;
for (nBadgePhoto = 0; nBadgePhoto < oFlickrBadgePhotos.length; nBadgePhoto++) {
  oFlickrBadgePhotos[nBadgePhoto].target = "_blank";
}
