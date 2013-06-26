<?php
  session_start();

  //fetch records
  require_once "db.php";
  require_once "models/authModel.php";
  require_once "views/authView.php";

  
  $model = new authModel(MY_DSN, MY_USER, MY_PASS);//model
  $view = new authView();//view
  $view->show('header');//header
  $username = empty($_POST['user_name']) ? '' : strtolower(trim($_POST['user_name']));
  $password = empty($_POST['user_password']) ? '' : trim($_POST['user_password']);
  $contentPage = 'auth';
  $user = NULL;

  if (!empty($_SESSION['userInfo'])) {//userInfo check session
    $contentPage = 'success';
    $user = $_SESSION['userInfo'];
  }
  //username/password not null
  if (!empty($username) && !empty($password)) {

    $user = $model->getUser($username, $password);
    if (is_array($user)) {
      $contentPage = 'success';
      $_SESSION['userInfo'] = $user;
    } 
  }
  $view->show($contentPage, $user);
  $view->show('footer');//footer
?>