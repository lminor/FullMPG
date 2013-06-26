<h3 class="welcomeprofile"><?php echo htmlentities($data['user_fullname']); ?>'s Profile</h3>

<div class="welcomeprofile">

	<p>Make changes to your public profile, or delete your account.</p>

	<div class="loggedinoptions">

	<?php 
		$u_num = $data['id'];
	?>

	<ul>
		<li><a href="auth.php" class="small button asphalt">Members Only</a></li>
    <li><a href="profile.php" class="small button asphalt">Manage Account</a></li>
    <!--<li><a href="user.php?id=<?php echo mysql_real_escape_string($u_num); ?>" class="small button asphalt">My Public Profile</a></li>-->
	<li><a href="logout.php" class="small button asphalt">Logout</a></li>
	</ul>

	</div>

	<form action="?" id="update" method="POST">
	<table border="0" align="center">
	<tbody>

	<tr>
		<td><input type="hidden" name="id" value="<?php echo htmlentities($data['id']); ?>"/></td>
	</tr>

	<tr>
		<td><label for="user_name">Edit username:</label></td>
		<td><input type="text" name="user_name" id="user_name" maxlength="20" size="20" value="<?php echo htmlentities($data['user_name']); ?>"/></td>
	</tr>

	<tr>
		<td><label for="user_fullname">Edit name:</label></td>
		<td><input type="text" name="user_fullname" id="user_fullname" maxlength="40" size="40" value="<?php echo htmlentities($data['user_fullname']); ?>"/></td>
	</tr>

	<tr>
		<td><label for="email">Edit e-mail address:</label></td>
		<td><input type="text" name="email" id="email" maxlength="50" size="50" value="<?php echo htmlentities($data['email']); ?>" /></td>
	</tr>

	<tr>
		<td>
			&nbsp;
		</td>
		<td align="right">	
			<input id="update" name="update" type="submit" value="Update Profile"/>
		</td>
	</tr>

	<tr>
		<td>
			&nbsp;
		</td>

		<td align="right">	
			<input id="delete" name="delete" type="submit" class="grey" value="Delete Account"/>

	<div class="delete-user">
		<?php
	  	if (isset($_POST['delete']) == "delete") {
	    $con = mysql_connect("localhost","root","root");
	    mysql_select_db("fmpg", $con);
	    $id = $_POST['id'];
	        if (!empty($id)) {
	          $sql = mysql_query("DELETE FROM users WHERE id='$id' LIMIT 1") or die   (mysql_error());
	          	echo "Account was deleted successfully.";
	          	unset($_SESSION['userInfo']);
				session_regenerate_id(true);
	        }
	  	}
		?>
	</div>

	<div class="update-user">
		<?php
	  	if (isset($_POST['update']) == "update") {
	    $con = mysql_connect("localhost","root","root");
	    mysql_select_db("fmpg", $con);
	    $id = $_POST['id'];
	    $user_name = $_POST['user_name'];
	    $user_fullname = $_POST['user_fullname'];
	    $email = $_POST['email'];
	        if (!empty($id)) { 
	          $sql = mysql_query("UPDATE users SET user_name = '$user_name', user_fullname = '$user_fullname', email = '$email' WHERE id='$id' LIMIT 1") or die   (mysql_error());
	          	echo "Personal info has been updated.";
	        }
	  	}
		?>
	</div>

	</td>
	</tr>
	
	</tbody>
	</table>
	</form>

</div>