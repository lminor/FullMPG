<div class="publicuserinfo">
  <?php 
    	foreach ($details as $detail) {
    	$date = substr($detail['user_created'], 0, -8);
		echo "<h3>${detail['user_name']}</h3>
		<h5>&nbsp;&nbsp;&nbsp;&nbsp;Registered: $date</h5>";
    }
  ?>
</div>