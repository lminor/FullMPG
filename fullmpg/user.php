<?php
  //start session
  session_start();

  //fetch records
  require_once "db.php";
  require_once "models/fmpgModel.php";
  require_once "views/fmpgView.php";

  $model = new fmpgModel(MY_DSN, MY_USER, MY_PASS);//model
  $view = new fmpgView();//view
  $currentUser = $model->getUserDetails($_GET['id']);
  $view->show('header');//header
  $user = NULL;
  if (!empty($_SESSION['userInfo'])) {
    $user = $_SESSION['userInfo'];
  }
  $view->showProfile($currentUser);//profile
  $view->show('footer');//footer
?>