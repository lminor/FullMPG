</br><h3 class="welcome">Welcome <?php echo htmlentities($data['user_fullname']); ?>!</h3>

<div>

  <div>

  <?php 
    $u_num = $data['id'];
  ?>

  <ul>
    <li><a href="auth.php" class="small button asphalt">Members Only</a></li>
    <li><a href="profile.php" class="small button asphalt">Manage Account</a></li>
	<!--<li><a href="fuel-ups.php" class="small button asphalt">Fuel ups</a></li>-->
	<li><a href="logout.php" class="small button asphalt">Logout</a></li>
  </ul>

  </div>

</div>



