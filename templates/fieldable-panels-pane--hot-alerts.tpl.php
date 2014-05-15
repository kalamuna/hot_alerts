<?php
/**
 * @file panels-pane-fieldable-panels-pane--fieldable-kala-cta.tpl.php
 * kala Panel Template for Call to Action items
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 */
?>
<section <?php print drupal_attributes($variables['attributes_array']); ?>>
  <div class="alert <?php print implode(' ', $variables['alert_classes']); ?>" role="alert">

    <?php if (!empty($variables['dismissable'])) : ?>
      <button type="button" class="close" data-dismiss="alert" aria-hidden="true">&times;</button>
    <?php endif; ?>

    <?php if (!empty($variables['icon'])) : ?>
      <i class="<?php print $variables['icon']; ?>"></i>
    <?php endif; ?>
    <strong><?php print $variables['title']; ?></strong> <?php print render($variables['elements']['field_hs_alerts_description']); ?>
  </div>
</section>
