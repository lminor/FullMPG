<?php
  //fetch records
  require_once "db.php";
  require_once "models/fmpgModel.php";
  require_once "views/fmpgView.php";
 
  $model = new fmpgModel(MY_DSN, MY_USER, MY_PASS);//model
  $view = new fmpgView();//view
  $view->show('header');//show header
  $view->show('register');//form
  $termagreement = $_POST['site_terms'];
  if ( isset( $_POST['submit']) && $termagreement != "no" ) {
    $salttime = MD5(date("h:m:s", time()));
    $thedate = date("Y-m-d h:m:s", time());
    $user_name = $_POST['user_name'];//user data
    $user_fullname = $_POST['user_fullname'];
    $email = $_POST['email'];
    $user_password = $_POST['user_password'];
    $user_salt = $salttime;
    $user_created = $thedate;
    //addUser
    $model->addUser($user_name, $user_fullname, $email, $user_password, $user_salt, $user_created);
  }
  $view->show('footer');//footer
?>