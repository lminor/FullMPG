# ************************************************************
# Sequel Pro SQL dump
# Version 4096
#
# http://www.sequelpro.com/
# http://code.google.com/p/sequel-pro/
#
# Host: 127.0.0.1 (MySQL 5.5.25)
# Database: fmpg
# Generation Time: 2013-06-25 20:45:56 +0000
# ************************************************************


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


# Dump of table users
# ------------------------------------------------------------

DROP TABLE IF EXISTS `users`;

CREATE TABLE `users` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `user_name` varchar(20) NOT NULL DEFAULT '',
  `user_fullname` varchar(40) NOT NULL DEFAULT '',
  `user_password` char(32) NOT NULL DEFAULT '',
  `user_salt` char(8) NOT NULL DEFAULT '',
  `user_created` datetime NOT NULL,
  `email` varchar(50) NOT NULL DEFAULT '',
  `mileage` int(7) NOT NULL,
  `gas_gallons` int(3) NOT NULL,
  `gas_date` int(11) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `UX_name` (`user_name`),
  UNIQUE KEY `UX_name_password` (`user_name`,`user_password`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

LOCK TABLES `users` WRITE;
/*!40000 ALTER TABLE `users` DISABLE KEYS */;

INSERT INTO `users` (`id`, `user_name`, `user_fullname`, `user_password`, `user_salt`, `user_created`, `email`, `mileage`, `gas_gallons`, `gas_date`)
VALUES
	(25,'lkminor','Kyle Minor','1a1dc91c907325c69271ddf0c944bc72','','1990-07-21 00:00:00','apocalypsev@fullsail.edu',151915,23,0),
	(28,'cass','cassady A','1a1dc91c907325c69271ddf0c944bc72','','0000-00-00 00:00:00','cass@her.com',190670,20,0),
	(29,'kylem','kyle minor1','3cabc2d312223bcefe320976449e1ed4','e2eff47f','2013-06-25 02:06:36','myemail@email.com',50,0,0),
	(30,'tissa','tissa minor','64b0d0a44c86cbf5c06c2530939acc77','efe87e68','2013-06-25 04:06:14','tissa@email.com',0,0,0);

/*!40000 ALTER TABLE `users` ENABLE KEYS */;
UNLOCK TABLES;



/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
