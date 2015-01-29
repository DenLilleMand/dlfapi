<?php
/**
 * The convention for naming this file: name of module.extra.inc
 */

/**
 *  A function suppose to be called from a hook_menu()
 * with  'type' => MENU_LOCAL_TASK,
 *
 *We check if the input is numeric and if any users with the numeric
 * user id exist in the database,  im not entirely sure how this if-statement
 * would respond to user_load($arg) if it threw an exception, because then we
 * should
 *do a try-with-resources inside of the if sentence checking for numeric, or
 *something like that. will hopefully be clarified when i get a grasp of php.
 * @param $wildcard
 * @return array
 */
function menu_magic_user_tab($wildcard)
{
    if(is_numeric($wildcard) && ($account = user_load($wildcard)))
    {
        return array(
          '#type' => 'markup',
            '#markup' => t("%username is totally awesome.",
                array('%username' => $account->name)),
        );
    }
    else
    {
        return drupal_not_found();
    }
}