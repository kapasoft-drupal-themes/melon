<?php

function _base_js(){

//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/js/libs/jquery-1.10.2.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_LIBRARY));
   //ensure jQuery object is set to $
    $js_to_add = <<<END
    $ = $ || jQuery;
END;

    drupal_add_js($js_to_add, array('scope' =>'header', 'type' => 'inline', 'weight' => JS_LIBRARY));

    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/jquery-ui/jquery-ui-1.10.2.custom.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_LIBRARY));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/bootstrap/js/bootstrap.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_LIBRARY));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/js/libs/lodash.compat.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_LIBRARY));

    $html5shiv = array(
        '#tag' => 'script',
        '#attributes' => array( // Set up an array of attributes inside the tag
            'src' => drupal_get_path('theme', $GLOBALS['theme']) . '/assets/js/libs/html5shiv.js',
        ),
        '#prefix' => '<!--[if lt IE 9]>',
        '#value' => '',
        '#suffix' => '<![endif]-->',
    );
    drupal_add_html_head($html5shiv, 'html5shiv');

    // <!-- Smartphone Touch Events -->
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/touchpunch/jquery.ui.touch-punch.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_LIBRARY));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/event.swipe/jquery.event.move.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_LIBRARY));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/event.swipe/jquery.event.swipe.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_LIBRARY));

}

function _general_js(){
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/js/libs/breakpoints.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_DEFAULT));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/respond/respond.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_DEFAULT));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/cookie/jquery.cookie.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_DEFAULT));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/slimscroll/jquery.slimscroll.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_DEFAULT));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/slimscroll/jquery.slimscroll.horizontal.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_DEFAULT));

}
//
//function _charts_js(){
//    //<!-- Charts -->
//    $excavas = array(
//        '#tag' => 'script',
//        '#attributes' => array( // Set up an array of attributes inside the tag
//            'src' => drupal_get_path('theme', $GLOBALS['theme']) . '/plugins/flot/excanvas.min.js',
//        ),
//        '#prefix' => '<!--[if lt IE 9]>',
//        '#value' => '',
//        '#suffix' => '<![endif]-->',
//    );
//    drupal_add_html_head($excavas, 'html5shiv');
//
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/sparkline/jquery.sparkline.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/flot/jquery.flot.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/flot/jquery.flot.tooltip.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/flot/jquery.flot.resize.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/flot/jquery.flot.time.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/flot/jquery.flot.growraf.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/easy-pie-chart/jquery.easy-pie-chart.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//}
//
////function _calendar_js(){
////    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/fullcalendar/fullcalendar.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
////}
//
//function _date_range_picker_js(){
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/daterangepicker/moment.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/daterangepicker/daterangepicker.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/blockui/jquery.blockUI.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//}
//
//function _noty_js(){
//    //<!-- Noty -->
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/noty/jquery.noty.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/noty/layouts/top.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/noty/themes/default.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//}
//
//function _forms_js(){
//    //<!-- Forms -->
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/uniform/jquery.uniform.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/plugins/select2/select2.min.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//}

function _app_js(){
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/js/app.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/js/plugins.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/js/plugins.form-components.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));

    $js_to_add = <<<END
    $(document).ready(function(){
        "use strict";

        App.init(); // Init layout and core plugins
        Plugins.init(); // Init all plugins
        FormComponents.init(); // Init all form-specific plugins
    });
END;

    drupal_add_js($js_to_add, array('scope' =>'header', 'type' => 'inline', 'weight' => JS_THEME));

}

function _demo_js(){
    //<!-- Demo JS -->
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/js/custom.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
//    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/js/demo/pages_calendar.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/js/demo/charts/chart_filled_blue.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
    drupal_add_js(drupal_get_path('theme',$GLOBALS['theme']) .'/assets/js/demo/charts/chart_simple.js', array('scope' =>'header', 'type' => 'file', 'weight' => JS_THEME));
}