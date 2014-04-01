<div id="container">

<?php if (!empty($page['sidebar_first'])): ?>
    <?php print render($page['sidebar_first']); ?>
<?php endif; ?>
<!-- /Sidebar -->

<div id="content">
<div class="container">
<!-- Breadcrumbs line -->
<div class="crumbs">
<!--    <ul id="breadcrumbs" class="breadcrumb">-->
<!--        <li>-->
<!--            <i class="icon-home"></i>-->
<!--            <a href="index.html">Dashboard</a>-->
<!--        </li>-->
<!--        <li class="current">-->
<!--            <a href="pages_calendar.html" title="">Calendar</a>-->
<!--        </li>-->
<!--    </ul>-->
    <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
    <?php print render($page['breadcrumbs']); ?>
</div>
<!-- /Breadcrumbs line -->

<!--=== Page Header ===-->
<div class="page-header">
    <div class="page-title">
        <h3><?php print $page_tapi['title'] ?></h3>
        <span><?php print $page_tapi['intro']?></span>
    </div>

    <?php print render($page['page_header']); ?>
</div>
<!-- /Page Header -->

<!--=== Page Content ===-->
<?php print $messages; ?>
<?php if (!empty($tabs)): ?>
    <?php print render($tabs); ?>
<?php endif; ?>
<?php if (!empty($page['help'])): ?>
    <?php print render($page['help']); ?>
<?php endif; ?>
<?php if (!empty($action_links)): ?>
    <ul class="action-links"><?php print render($action_links); ?></ul>
<?php endif; ?>
<?php print render($page['content']); ?>
<!-- /Page Content -->

</div>
<!-- /.container -->

</div>
</div>