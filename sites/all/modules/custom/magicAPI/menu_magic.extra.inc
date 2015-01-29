<?php
/**
 * The convention for naming this file: name of module.extra.inc
 *
 * Aparently the t function allso takes in an array as a 2nd parameter,
 * and it works like we know from various mysql libraries, that we use
 * wildcards in the hardcoded query, and then replace them with $args right before
 * executing it. So we can put in a wildcard, and override it with the real data,
 * a paradox in this case since we have a url wildcard being placed instead of the strings wildcard.
 */

function menu_magic_extra($wildcard)
{
    $content = array(
      '#type' => 'markup',
        '#markup' => '<p>' . t('The wildcard contains the value "%wildcard" . ' ,array ('%wildcard' => $wildcard)) . '</p>'
    );
    return $content;
}
