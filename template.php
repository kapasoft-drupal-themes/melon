<?php
include_once path_to_theme().'/includes/js_dependencies.inc';
module_load_include('module', 'designssquare_lib');
module_load_include('inc', 'designssquare_lib', 'includes/template_api');
module_load_include('inc', 'designssquare_admin_toolkit', '/libs/js_dependencies');

function melon_preprocess_html(&$variables) {
    _theme_css();
    _base_js();
    _general_js();
    _charts_js();
    _date_range_picker_js();
    _noty_js();
    _forms_js();
    _app_js();
    _demo_js();

    $variables['head_tapi'] = _header_tapi_site();
}

function melon_preprocess_page(&$variables){

    if (isset($variables['node'])) {
        $node = $variables['node'];

        /**breadcrumbs**/
        $breadcrumb = drupal_get_breadcrumb();
        $breadcrumb[0] = '<i class="icon-home"></i>'.$breadcrumb[0];
        drupal_set_breadcrumb($breadcrumb);
    }

    $variables['page_tapi'] = _page_tapi($variables);
}

function melon_js_alter(&$javascript) {

    //Add migrate fix when jquery higher 1.9
    //    drupal_add_js('http://code.jquery.com/jquery-migrate-1.2.1.js', array('scope' =>'header', 'type' => 'external','weight' => JS_LIBRARY));

    //remove default to use theme specific version
    unset($javascript[drupal_get_path('theme','bootstrap').'/js/bootstrap.js']);
}

function melon_css_alter(&$css) {
    //use theme specific
    unset($css[drupal_get_path('theme','bootstrap').'/css/bootstrap.css']);
}

function _theme_css(){
    drupal_add_css(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/css/main.css', array('type' => 'file', 'weight' =>CSS_THEME,'preprocess' => FALSE));
    drupal_add_css(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/css/plugins.css', array('type' => 'file', 'weight' =>CSS_THEME,'preprocess' => FALSE));
    drupal_add_css(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/css/responsive.css', array('type' => 'file', 'weight' =>CSS_THEME,'preprocess' => FALSE));
    drupal_add_css(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/css/icons.css', array('type' => 'file', 'weight' =>CSS_THEME,'preprocess' => FALSE));
    drupal_add_css(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/css/custom-melon.css', array('type' => 'file', 'weight' =>CSS_THEME,'preprocess' => FALSE));
}


