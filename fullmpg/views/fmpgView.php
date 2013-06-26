<?php

class fmpgView {
	public function show($template, $data = array()){
		$templatePath = "views/${template}.inc";
		if (file_exists($templatePath)){
			include $templatePath;
		}
	}
	public function showFill($rows) {//User List
		include "fuel-ups.inc";
	}
	public function showProfile($details) {//User Profile
		include "user.inc";
	}
}