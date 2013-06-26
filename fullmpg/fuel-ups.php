<?php
  //fetch records
  require_once "db.php";
  require_once "models/fmpgModel.php";
  require_once "views/fmpgView.php";
  
  $model = new fmpgModel(MY_DSN, MY_USER, MY_PASS);//model
  $view = new fmpgView();//view
  $view->show('header');//header
  $view->showFill($model->getFill());//user list
  $view->show('footer');//footer
?>