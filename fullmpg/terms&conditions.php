<?php
  //Fetch records
  require_once "db.php";
  require_once "models/fmpgModel.php";
  require_once "views/fmpgView.php";

  $model = new fmpgModel(MY_DSN, MY_USER, MY_PASS);
  $view = new fmpgView();
  $view->show('header');//header
  $view->show('terms');//home
  $view->show('footer');//footer
?>