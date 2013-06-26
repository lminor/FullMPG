<?php
  //start session
  session_start();

  //fetch records
  require_once "db.php";
  require_once "models/fmpgModel.php";
  require_once "views/fmpgView.php";

  $model = new fmpgModel(MY_DSN, MY_USER, MY_PASS);//model
  $view = new fmpgView();//view
  $view->show('header');//header
  $username = empty($_POST['user_name']) ? '' : strtolower(trim($_POST['user_name']));
  $password = empty($_POST['user_password']) ? '' : trim($_POST['user_password']);
  $user = NULL;
  if (!empty($_SESSION['userInfo'])) {
    $contentPage = 'profile';
    $user = $_SESSION['userInfo'];
  }
  else {
      echo "<p class='errormsg'>Please <a href='auth.php'>login</a> to view this page.</p>";
  }
  $view->show($contentPage, $user);
  $view->show('footer');//footer
?>