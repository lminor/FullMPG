<form action="?" id="register" method="POST">
<table border="0" align="center">
<tbody>
	<tr>
	<td><label for="user_name">Username:</label></td>
	<td><input type="text" name="user_name" id="user_name" maxlength="20" size="20" value="username"/></td>
	</tr>

	<tr>
	<td><label for="user_fullname">Full Name:</label></td>
	<td><input type="text" name="user_fullname" id="user_fullname" maxlength="40" size="40" value="Full Name"/></td>
	</tr>
	
	<tr>
	<td><label for="email">Enter your e-mail address:</label></td>
	<td><input type="text" name="email" id="email" maxlength="50" size="50" value="address@email.com"/></td>
	</tr>

	<tr>
	<td><label for="user_password">Enter a password:</label></td>
	<td><input type="password" name="user_password" id="user_password" maxlength="10" size="10" /></td>
	</tr>
	
	<tr class="takeawayblock">
		<td><label for="site_terms">Do you agree with the <a href="terms&conditions.php"><strong>terms and policies</strong></a>?</label></td>
		<td><input type="radio" name="site_terms" value="yes" /><label>&nbsp;&nbsp;&nbsp;&nbsp;yes</label>&nbsp;&nbsp;&nbsp;&nbsp;
    	<input type="radio" name="site_terms" value="no" checked /><label>&nbsp;&nbsp;&nbsp;&nbsp;no</label>
	</td>
	</tr>

	<tr>
		<td>
			&nbsp;
		</td>
		<td align="right">	
			<input id="submit" name="submit" type="submit" value="Submit"/>
		</td>
	</tr>
</tbody>
</table>
</form>