<?php
/**
 * @file
 * Displays a user alert.
 *
 * Available variables:
 * - $alert_label: The label of the alert, as set in the User Alerts settings.
 * - $body: The user alert message.
 *
 * @ingroup themeable
 */
$status_heading = array(
  'status' => t('Status message'),
  'error' => t('Error message'),
  'warning' => t('Warning message'),
  'info' => t('Informative message'),
);
$field = field_get_items('node', $node, 'field_user_alert_type');
$alert_type = $field && !empty($field[0]['value']) ? $field[0]['value'] : FALSE;
if (empty($alert_type)) {
  $alert_type = 'status';
}
?>

<div id="user-alert-<?php print $nid; ?>" class="user-alert-close alert alert-block alert-<?php print $alert_type; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($is_closeable) : ?><a class="close" data-dismiss="alert" rel="<?php print $nid; ?>" href="#">&times;</a><?php endif; ?>
  <h4 class="element-invisible"><?php print $status_heading[$alert_type]; ?></h4>
  <?php print render($title_suffix); ?>
  <?php print $body; ?>
</div>
