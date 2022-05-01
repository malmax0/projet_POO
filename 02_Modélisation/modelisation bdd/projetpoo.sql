-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Hôte : 127.0.0.1:3306
-- Généré le : ven. 27 nov. 2020 à 11:29
-- Version du serveur :  8.0.21
-- Version de PHP : 7.3.21

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données : `projetpoo`
--
CREATE DATABASE IF NOT EXISTS `projetpoo` DEFAULT CHARACTER SET utf8 COLLATE utf8_bin;
USE `projetpoo`;

-- --------------------------------------------------------

--
-- Structure de la table `adresse`
--

DROP TABLE IF EXISTS `adresse`;
CREATE TABLE IF NOT EXISTS `adresse` (
  `Id_Adresse` int NOT NULL AUTO_INCREMENT,
  `Adresse` varchar(250) CHARACTER SET utf8 COLLATE utf8_bin DEFAULT NULL,
  `CP` int DEFAULT NULL,
  `VIlle` varchar(250) CHARACTER SET utf8 COLLATE utf8_bin DEFAULT NULL,
  `Id_Client` int NOT NULL,
  PRIMARY KEY (`Id_Adresse`),
  KEY `Id_Client` (`Id_Client`)
) ENGINE=MyISAM AUTO_INCREMENT=2 DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

--
-- Déchargement des données de la table `adresse`
--

INSERT INTO `adresse` (`Id_Adresse`, `Adresse`, `CP`, `VIlle`, `Id_Client`) VALUES
(1, 'Avenue Du saint Esprit', 46600, 'MARTEL', 1);

-- --------------------------------------------------------

--
-- Structure de la table `article`
--

DROP TABLE IF EXISTS `article`;
CREATE TABLE IF NOT EXISTS `article` (
  `Id_Article` int NOT NULL AUTO_INCREMENT,
  `Quantite` int DEFAULT NULL,
  `Id_Catalogue` int NOT NULL,
  `Id_Commande` int NOT NULL,
  PRIMARY KEY (`Id_Article`),
  KEY `Id_Catalogue` (`Id_Catalogue`),
  KEY `Id_Commande` (`Id_Commande`)
) ENGINE=MyISAM AUTO_INCREMENT=4 DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

--
-- Déchargement des données de la table `article`
--

INSERT INTO `article` (`Id_Article`, `Quantite`, `Id_Catalogue`, `Id_Commande`) VALUES
(1, 1, 2, 81),
(2, 1, 2, 82),
(3, 1, 3, 83);

--
-- Déclencheurs `article`
--
DROP TRIGGER IF EXISTS `Réglage_Stock`;
DELIMITER $$
CREATE TRIGGER `Réglage_Stock` AFTER INSERT ON `article` FOR EACH ROW UPDATE catalogue SET
catalogue.Stock = (catalogue.Stock-NEW.Quantite) 
WHERE catalogue.Id_Catalogue = NEW.Id_catalogue
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Structure de la table `catalogue`
--

DROP TABLE IF EXISTS `catalogue`;
CREATE TABLE IF NOT EXISTS `catalogue` (
  `Id_Catalogue` int NOT NULL AUTO_INCREMENT,
  `Nom_Article` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `HT` double DEFAULT NULL,
  `Stock` int DEFAULT NULL,
  `TVA` double DEFAULT NULL,
  PRIMARY KEY (`Id_Catalogue`)
) ENGINE=MyISAM AUTO_INCREMENT=4 DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

--
-- Déchargement des données de la table `catalogue`
--

INSERT INTO `catalogue` (`Id_Catalogue`, `Nom_Article`, `HT`, `Stock`, `TVA`) VALUES
(1, 'RTX_3090', 1600, 30, 5),
(2, 'RTX_3080', 1000, 50, 5),
(3, 'RTX_3070', 750, 89, 5);

-- --------------------------------------------------------

--
-- Structure de la table `client`
--

DROP TABLE IF EXISTS `client`;
CREATE TABLE IF NOT EXISTS `client` (
  `Id_Client` int NOT NULL AUTO_INCREMENT,
  `Nom_Client` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `Prenom_Client` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `Date_Naissance` date DEFAULT NULL,
  `Date_firstachat` date DEFAULT NULL,
  PRIMARY KEY (`Id_Client`)
) ENGINE=MyISAM AUTO_INCREMENT=4 DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

--
-- Déchargement des données de la table `client`
--

INSERT INTO `client` (`Id_Client`, `Nom_Client`, `Prenom_Client`, `Date_Naissance`, `Date_firstachat`) VALUES
(1, 'Michel', 'Pascal', '1969-09-06', '2020-11-27'),
(2, 'Balkany', 'Patrick', '1948-08-16', '2020-11-27'),
(3, 'Zemmour', 'Eric', '1958-08-31', NULL);

-- --------------------------------------------------------

--
-- Structure de la table `commande`
--

DROP TABLE IF EXISTS `commande`;
CREATE TABLE IF NOT EXISTS `commande` (
  `Id_Commande` int NOT NULL AUTO_INCREMENT,
  `Reference` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `Date_Livraison` date DEFAULT NULL,
  `Date_Paiement` date DEFAULT NULL,
  `Moyen_Paiement` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `Solde_du_règlement` double DEFAULT NULL,
  `ID_Adresse_Facturation` int DEFAULT NULL,
  `Id_Adresse_Livraison` int DEFAULT NULL,
  `Date_emission` date DEFAULT NULL,
  `Id_Client` int NOT NULL,
  `remise` int NOT NULL DEFAULT '0',
  PRIMARY KEY (`Id_Commande`),
  KEY `Id_Client` (`Id_Client`)
) ENGINE=MyISAM AUTO_INCREMENT=84 DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

--
-- Déchargement des données de la table `commande`
--

INSERT INTO `commande` (`Id_Commande`, `Reference`, `Date_Livraison`, `Date_Paiement`, `Moyen_Paiement`, `Solde_du_règlement`, `ID_Adresse_Facturation`, `Id_Adresse_Livraison`, `Date_emission`, `Id_Client`, `remise`) VALUES
(83, 'BaPa20203', NULL, '2020-11-27', 'ESP', 750, 1, 1, NULL, 2, 2),
(81, 'MiPa20202', NULL, '2020-11-27', 'CHE', 1000, 1, 1, NULL, 1, 3),
(82, 'MiPa20203', NULL, '2020-11-27', 'CHE', 1000, 1, 1, NULL, 1, 2);

--
-- Déclencheurs `commande`
--
DROP TRIGGER IF EXISTS `Date_Firstachat`;
DELIMITER $$
CREATE TRIGGER `Date_Firstachat` AFTER INSERT ON `commande` FOR EACH ROW IF ((SELECT client.Date_firstachat FROM client WHERE client.Id_Client = NEW.Id_Client) IS NULL)
 then 
 UPDATE 
	client 
 SET 
	client.Date_firstachat = CURRENT_DATE() 
 WHERE 
	client.Id_Client = NEW.Id_Client;END IF
$$
DELIMITER ;
DROP TRIGGER IF EXISTS `Reference`;
DELIMITER $$
CREATE TRIGGER `Reference` BEFORE INSERT ON `commande` FOR EACH ROW SET 
    NEW.`Reference` = 
(SELECT
     * 
FROM
    (SELECT 
        CONCAT(SUBSTRING(`Nom_Client`,1,2),SUBSTRING(`Prenom_Client`,1,2),YEAR(CURRENT_DATE()),(COUNT(commande.Id_Commande)+1) )
    AS 
        resultat 
    FROM 
        `client`,commande  
    WHERE 
        client.Id_Client=NEW.Id_Client )
AS 
    tmp)
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Structure de la table `personnel`
--

DROP TABLE IF EXISTS `personnel`;
CREATE TABLE IF NOT EXISTS `personnel` (
  `Id_Personnel` int NOT NULL AUTO_INCREMENT,
  `Nom_Personnel` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `Prenom_Personnel` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `Superieur` int DEFAULT NULL,
  `Adresse_Personnel` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `CP_Personnel` int DEFAULT NULL,
  `Ville_Personnel` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `Date_Embauche` date DEFAULT NULL,
  `Id_Personnel_1` int DEFAULT NULL,
  PRIMARY KEY (`Id_Personnel`),
  KEY `Id_Personnel_1` (`Id_Personnel_1`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- --------------------------------------------------------

--
-- Structure de la table `ville_france`
--

DROP TABLE IF EXISTS `ville_france`;
CREATE TABLE IF NOT EXISTS `ville_france` (
  `Id_Ville_France` int NOT NULL AUTO_INCREMENT,
  `Ville_de_France_Majuscule` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `Ville_de_France_Minuscule` varchar(250) COLLATE utf8_bin DEFAULT NULL,
  `Code_Postal` int DEFAULT NULL,
  PRIMARY KEY (`Id_Ville_France`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COLLATE=utf8_bin;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
