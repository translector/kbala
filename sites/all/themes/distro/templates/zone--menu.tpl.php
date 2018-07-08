<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>  
  



<?php
//D7
$block = module_invoke('views', 'block_view', 'vitrina-block');
print render($block['content']);
?>

<?php if ($wrapper): ?></div><?php endif; ?>