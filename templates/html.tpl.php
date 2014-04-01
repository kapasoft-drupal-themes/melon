<!DOCTYPE html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?>>
<head profile="<?php print $grddl_profile; ?>">
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0, minimum-scale=1.0, maximum-scale=1.0, user-scalable=0" />
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>

    <!--=== CSS ===-->

    <!-- Bootstrap -->
    <link href="<?php print base_path().path_to_theme() ?>/bootstrap/css/bootstrap.min.css" rel="stylesheet" type="text/css" />

    <!-- jQuery UI -->
    <!--<link href="plugins/jquery-ui/jquery-ui-1.10.2.custom.css" rel="stylesheet" type="text/css" />-->
    <!--[if lt IE 9]>
        <link rel="stylesheet" type="text/css" href="<?php print base_path().path_to_theme(); ?>/plugins/jquery-ui/jquery.ui.1.10.2.ie.css"/>
    <![endif]-->

    <?php print $styles; ?>

    <link rel="stylesheet" href="<?php print base_path().path_to_theme(); ?>/assets/css/fontawesome/font-awesome.min.css">
    <!--[if IE 7]>
    <link rel="stylesheet" href="<?php print base_path().path_to_theme(); ?>/assets/css/fontawesome/font-awesome-ie7.min.css">
    <![endif]-->

    <!--[if IE 8]>
    <link href="<?php print base_path().path_to_theme();?>/assets/css/ie8.css" rel="stylesheet" type="text/css" />
    <![endif]-->
    <link href='http://fonts.googleapis.com/css?family=Open+Sans:400,600,700' rel='stylesheet' type='text/css'>

    <!--=== JavaScript ===-->
    <?php print $scripts; ?>
</head>

<body class="<?php print $classes; ?>" <?php print $attributes;?>>
<?php print $page_top; ?>

    <?php include path_to_theme() .'/templates/section--header.php';?>


    <?php print $page; ?>
    <!-- Page Footer -->
    <?php //include path_to_theme() .'/templates/section--footer.php';?>

<?php print $page_bottom; ?>

</body>
</html>