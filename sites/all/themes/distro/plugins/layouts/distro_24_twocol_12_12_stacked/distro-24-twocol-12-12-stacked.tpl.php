<div class="panel-display distro-grid distro-24-twocol-12-12-stacked" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-22 prefix_1 suffix_1">
    <div class="inside"><?php print $content['top']; ?></div>
  </div>
  <div class="panel-panel grid-11 prefix_1 alpha">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
  <div class="panel-panel grid-11 suffix_1 omega">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
  <div class="panel-panel grid-22 prefix_1 suffix_1">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>
