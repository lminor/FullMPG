<p class="user-list-intro">Browse our public user list and member profiles.</p>

<?php
		echo "<table border='0' align='center'><tbody>
		<thead><tr>
	      <th>ID</th>
	      <th>Username</th>
	      <th>Mileage</th>
	      <th>Amount in Gallons</th>
	      <th>Date of fillup</th>
		</tr></thead>";

	foreach ($rows as $num => $row) {
		$gallons = $row['gas_gallons'];
		$u_num = $row['id'];
		$mileage = $row['mileage'];
		$date = $row['gas_date'];
		echo "	<tr><td><p class='userlistname'>&#35;${row['id']}
				</td>
				<td><strong><a href='user.php?id=" . mysql_real_escape_string($u_num) . "'>${row['user_name']}</strong></a>
				</td>
				<td>$mileage</td>
				<td>$gallons</td>
				<td>$date</td></tr>";
	}
	echo "</tbody></table>";
?>