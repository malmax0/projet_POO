/*-----------------------------------\
|	  Create by Group 1 (ELITE)	     |
|	         Malmax09 		         |
|	    	  Treeke			         |
|	    	 Juggerne		         |
|	    	Ilona3210		         |
|					                 |
\-----------------------------------*/

#include "SQL.h"


namespace NS_Composants
{
	//
	//Connection à la base de données
	//
	CL_CAD::CL_CAD(void)
	{
		this->rq_sql = "RIEN";
		this->cnx = "Data Source=BAPTISTE-LAPTOP\\SQLEXPRESS;" +
			"Initial Catalog=ProjetPOO;" +
			"User ID=Projet;" +
			"Password=POO";
		this->CNX = gcnew SqlConnection(this->cnx);
		this->CMD = gcnew SqlCommand(this->rq_sql, this->CNX);
		this->CMD->CommandType = CommandType::Text;
	}
	//
	//Exécution d'une requête SQL et renvoie l'ID de la ligne inserée
	//
	int CL_CAD::actionRowsID(String^ rq_sql)
	{
		int id;
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		id = Convert::ToInt32(this->CMD->ExecuteScalar());
		this->CNX->Close();
		return id;
	}
	//
	//Exécution d'une requête SQL
	//
	void CL_CAD::actionRows(String^ rq_sql)
	{
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		this->CMD->ExecuteNonQuery();
		this->CNX->Close();
	}
	//
	//Renvoie un SELECT dans un DataSet
	//
	DataSet^ CL_CAD::getRows(String^ rq_sql, String^ dataTableName)
	{
		this->setSQL(rq_sql);
		this->DA = gcnew SqlDataAdapter(this->CMD);
		this->CMD->CommandText = this->rq_sql;
		this->DS = gcnew DataSet();
		this->DA->Fill(this->DS, dataTableName);
		return this->DS;
	}
	//
	//Initialisation de la requête
	//
	void CL_CAD::setSQL(String^ rq_sql)
	{
		if (rq_sql == "" || rq_sql == "RIEN")
		{
			this->rq_sql = "RIEN";
		}
		else
		{
			this->rq_sql = rq_sql;
		}
	}

	CL_map_TBPERSONNE::CL_map_TBPERSONNE(void)
	{
		//
		//Initialisation des variables
		//
		//===============================================================
		//
		//Client
		//
		this->Id_Client = -1;
		this->Nom_Client = "RIEN";
		this->Prenom_Client = "RIEN";
		this->Date_Naissance = "RIEN";
		//
		//Personnel
		//
		this->Id_Personnel = -1;
		this->Nom_Personnel = "RIEN";
		this->Prenom_Personnel = "RIEN";
		this->Adresse_Personnel = "RIEN";
		this->CP_Personnel = "RIEN";
		this->Ville_Personnel = "RIEN";
		this->Date_Embauche = "RIEN";
		this->Superieur = "RIEN";
		//
		//Commande
		//
		this->Id_Commande = -1;
		this->Annee_Paiement = "RIEN";
		this->Mois_Paiement = "RIEN";
		this->Jour_Paiement = "RIEN";
		this->Moyen_Paiement = "RIEN";
		this->Solde_du_reglement = "RIEN";
		this->Id_Adresse_Facturation = "RIEN";
		this->Id_Adresse_Livraison = "RIEN";
		this->Annee_Emission = "RIEN";
		this->Mois_Emission = "RIEN";
		this->Jour_Emission = "RIEN";
		this->Remise = "RIEN";
		this->Id_Com_Client = "RIEN";
		this->Quantite = "RIEN";
		this->Id_Art_Catalogue = "RIEN";
		this->Id_Art_Commande = "RIEN";
		//
		//Catalogue
		//
		this->Id_Catalogue = -1;
		this->Nom_Article = "RIEN";
		this->HT = "RIEN";
		this->Stock = "RIEN";
		this->TVA = "RIEN";
		//
		//Stat
		//
		this->Id_Stat_Client = "RIEN";
		this->Annee_inferieur = "RIEN";
		this->Mois_inferieur = "RIEN";
		this->Jour_inferieur = "RIEN";
		this->Annee_superieur = "RIEN";
		this->Mois_superieur = "RIEN";
		this->Jour_superieur = "RIEN";
	}
	//
	//Client=======================================================
	//
	//
	//Requêtes SQL
	//
	String^ CL_map_TBPERSONNE::SELECT_Client(void)
	{
		return "SELECT * " +
			"FROM Client, Adresse " +
			"Where Client.Id_Client = Adresse.Id_Client;";
	}
	String^ CL_map_TBPERSONNE::SELECT_Adresse(void)
	{
		return "SELECT DISTINCT CONCAT(Adresse.Adresse,' ',Adresse.VIlle,' ',Adresse.CP), Adresse.Id_Adresse " +
			"FROM Adresse, Client " +
			"where Adresse.Id_Client = " + this->getId_Com_Client() + ";";
	}
	String^ CL_map_TBPERSONNE::INSERT_Client(void)
	{
		return "INSERT INTO Client " +
			"(Nom_Client, Prenom_Client, Date_Naissance) " +
			"VALUES('" + this->getNom_Client() + "', '" + this->getPrenom_Client() + "', '" + this->getDate_Naissance() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPERSONNE::INSERT_Adresse(void)
	{
		return"INSERT INTO Adresse " +
			"(Adresse, CP, Ville, Id_Client) " +
			"VALUES('" + this->getAdresse() + "', '" + this->getCP() + "','" + this->getVille() + "','" + this->getId_Client() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPERSONNE::UPDATE_Client(void)
	{
		return "UPDATE Client " +
			"SET Nom_Client = '" + this->getNom_Client() + "', Prenom_Client = '" + this->getPrenom_Client() + "', Date_Naissance = '" + this->getDate_Naissance() + "' " +
			"WHERE(Id_Client = " + this->getId_Client() + ");";
	}
	String^ CL_map_TBPERSONNE::DELETE_Client(void)
	{
		return "DELETE FROM Client " +
			"WHERE(Id_Client = " + this->getId_Client() + ");";
	}
	String^ CL_map_TBPERSONNE::DELETE_Adresse(void)
	{
		return "DELETE FROM Adresse " +
			"WHERE(Id_Client = " + this->getId_Client() + ");";
	}
	//
	//Fonction Set et Get
	//
	void CL_map_TBPERSONNE::setId_Client(int Id_Client)
	{
		if (Id_Client > 0)
		{
			this->Id_Client = Id_Client;
		}
	}
	void CL_map_TBPERSONNE::setPrenom_Client(String^ Prenom_Client)
	{
		if (Prenom_Client != "")
		{
			this->Prenom_Client = Prenom_Client;
		}
	}
	void CL_map_TBPERSONNE::setNom_Client(String^ Nom_Client)
	{
		if (Nom_Client != "")
		{
			this->Nom_Client = Nom_Client;
		}
	}
	void CL_map_TBPERSONNE::setDate_Naissance(String^ Date_Naissance)
	{
		if (Date_Naissance != "")
		{
			this->Date_Naissance = Date_Naissance;
		}
	}
	void CL_map_TBPERSONNE::setId(int Id)
	{
		if (Id > 0)
		{
			this->Id = Id;
		}
	}
	void CL_map_TBPERSONNE::setAdresse(String^ Adresse)
	{
		if (Adresse != "")
		{
			this->Adresse = Adresse;
		}
	}
	void CL_map_TBPERSONNE::setCP(String^ CP)
	{
		if (CP != "")
		{
			this->CP = CP;
		}
	}
	void CL_map_TBPERSONNE::setVille(String^ Ville)
	{
		if (Ville != "")
		{
			this->Ville = Ville;
		}
	}
	int CL_map_TBPERSONNE::getId_Client(void)
	{
		return this->Id_Client;
	}
	String^ CL_map_TBPERSONNE::getNom_Client(void)
	{
		return this->Nom_Client;
	}
	String^ CL_map_TBPERSONNE::getPrenom_Client(void)
	{
		return this->Prenom_Client;
	}
	String^ CL_map_TBPERSONNE::getDate_Naissance(void)
	{
		return this->Date_Naissance;
	}
	String^ CL_map_TBPERSONNE::getAdresse(void)
	{
		return this->Adresse;
	}
	String^ CL_map_TBPERSONNE::getCP(void)
	{
		return this->CP;
	}
	String^ CL_map_TBPERSONNE::getVille(void)
	{
		return this->Ville;
	}
	int CL_map_TBPERSONNE::getId(void)
	{
		return this->Id;
	}
	//
	//Personnel=======================================================
	//
	//
	//Requêtes SQL
	//
	String^ CL_map_TBPERSONNE::SELECT_Personnel(void)
	{
		return "SELECT * " +
			"FROM Personnel;";
	}
	String^ CL_map_TBPERSONNE::INSERT_Personnel(void)
	{
		return "INSERT INTO Personnel " +
			"(Nom_Personnel, Prenom_Personnel, Adresse_Personnel, CP_Personnel, Ville_Personnel, Date_Embauche, Superieur) " +
			"VALUES('" + this->getNom_Personnel() + "', '" + this->getPrenom_Personnel() + "', '" + this->getAdresse_Personnel() + "', '" + this->getCP_Personnel() + "', '" + this->getVille_Personnel() + "', '" + this->getDate_Embauche() + "', '" + this->getSuperieur() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPERSONNE::UPDATE_Personnel(void)
	{
		return "UPDATE Personnel " +
			"SET Nom_Personnel = '" + this->getNom_Personnel() + "', Prenom_Personnel = '" + this->getPrenom_Personnel() + "', Adresse_Personnel = '" + this->getAdresse_Personnel() + "', CP_Personnel = '" + this->getCP_Personnel() + "', Ville_Personnel = '" + this->getVille_Personnel() + "', Date_Embauche = '" + this->getDate_Embauche() + "', Superieur = '" + this->getSuperieur() + "' " +
			"WHERE(Id_Personnel = " + this->getId_Personnel() + ");";
	}
	String^ CL_map_TBPERSONNE::DELETE_Personnel(void)
	{
		return "DELETE FROM Personnel " +
			"WHERE(Id_Personnel = " + this->getId_Personnel() + ");";
	}
	//
	//Fonction Set et Get
	//
	void CL_map_TBPERSONNE::setId_Personnel(int Id_Personnel)
	{
		if (Id_Personnel > 0)
		{
			this->Id_Personnel = Id_Personnel;
		}
	}
	void CL_map_TBPERSONNE::setPrenom_Personnel(String^ Prenom_Personnel)
	{
		if (Prenom_Personnel != "")
		{
			this->Prenom_Personnel = Prenom_Personnel;
		}
	}
	void CL_map_TBPERSONNE::setNom_Personnel(String^ Nom_Personnel)
	{
		if (Nom_Personnel != "")
		{
			this->Nom_Personnel = Nom_Personnel;
		}
	}
	void CL_map_TBPERSONNE::setAdresse_Personnel(String^ Adresse_Personnel)
	{
		if (Adresse_Personnel != "")
		{
			this->Adresse_Personnel = Adresse_Personnel;
		}
	}
	void CL_map_TBPERSONNE::setCP_Personnel(String^ CP_Personnel)
	{
		if (CP_Personnel != "")
		{
			this->CP_Personnel = CP_Personnel;
		}
	}
	void CL_map_TBPERSONNE::setVille_Personnel(String^ Ville_Personnel)
	{
		if (Ville_Personnel != "")
		{
			this->Ville_Personnel = Ville_Personnel;
		}
	}
	void CL_map_TBPERSONNE::setDate_Embauche(String^ Date_Embauche)
	{
		if (Date_Embauche != "")
		{
			this->Date_Embauche = Date_Embauche;
		}
	}
	void CL_map_TBPERSONNE::setSuperieur(String^ Superieur)
	{
		if (Superieur != "")
		{
			this->Superieur = Superieur;
		}
	}
	int CL_map_TBPERSONNE::getId_Personnel(void)
	{
		return this->Id_Personnel;
	}
	String^ CL_map_TBPERSONNE::getNom_Personnel(void)
	{
		return this->Nom_Personnel;
	}
	String^ CL_map_TBPERSONNE::getPrenom_Personnel(void)
	{
		return this->Prenom_Personnel;
	}
	String^ CL_map_TBPERSONNE::getAdresse_Personnel(void)
	{
		return this->Adresse_Personnel;
	}
	String^ CL_map_TBPERSONNE::getCP_Personnel(void)
	{
		return this->CP_Personnel;
	}
	String^ CL_map_TBPERSONNE::getVille_Personnel(void)
	{
		return this->Ville_Personnel;
	}
	String^ CL_map_TBPERSONNE::getDate_Embauche(void)
	{
		return this->Date_Embauche;
	}
	String^ CL_map_TBPERSONNE::getSuperieur(void)
	{
		return this->Superieur;
	}
	//
	//Commande=======================================================
	//
	//
	//Requêtes SQL
	//
	String^ CL_map_TBPERSONNE::SELECT_Commande(void)
	{
		return "SELECT * " +
			"FROM Commande,Article " +
			"WHERE " +
			"Commande.Id_Commande=Article.Id_Commande;";
	}
	String^ CL_map_TBPERSONNE::INSERT_Commande(void)
	{
		return "INSERT INTO Commande " +
			"(Date_Paiement, Moyen_Paiement, Solde_du_règlement, Id_Adresse_Facturation, Id_Adresse_Livraison, Remise, Id_Client) " +
			"VALUES('" + this->getAnnee_Paiement() + "-" + this->getMois_Paiement() + "-" + this->getJour_Paiement() + "', '" + this->getMoyen_Paiement() + "', '" + this->getSolde_du_reglement() + "', '" + this->getId_Adresse_Facturation() + "', '" + this->getId_Adresse_Livraison() + "', '" + this->getRemise() + "', '" + this->getId_Com_Client() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPERSONNE::INSERT_Article(void)
	{
		return "INSERT INTO Article " +
			"(Id_Catalogue, Quantite, Id_Commande) " +
			"VALUES('" + this->getId_Art_Catalogue() + "', '" + this->getQuantite() + "', '" + this->getId_Art_Commande() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPERSONNE::UPDATE_Commande(void)
	{
		return "UPDATE Commande " +
			"SET Date_Paiement = '" + this->getAnnee_Paiement() + "-" + this->getMois_Paiement() + "-" + this->getJour_Paiement() + "', Moyen_Paiement = '" + this->getMoyen_Paiement() + "', Solde_du_règlement = '" + this->getSolde_du_reglement() + "', Id_Adresse_Facturation = '" + this->getId_Adresse_Facturation() + "', Id_Adresse_Livraison = '" + this->getId_Adresse_Livraison() + "', Remise = '" + this->getRemise() + "' " +
			"WHERE(Id_Commande = " + this->getId_Commande() + ");";
		
	}
	String^ CL_map_TBPERSONNE::DELETE_Commande(void)
	{
		return "DELETE FROM Commande " +
			"WHERE(Id_Commande = " + this->getId_Commande() + ");";
	}
	String^ CL_map_TBPERSONNE::DELETE_Article(void)
	{
		return "DELETE FROM Article " +
			"WHERE(Article.Id_Commande = " + this->getId_Commande() + ");";
	}
	//
	//Fonction Set et Get
	//
	void CL_map_TBPERSONNE::setId_Commande(int Id_Commande)
	{
		if (Id_Commande > 0)
		{
			this->Id_Commande = Id_Commande;
		}
	}
	void CL_map_TBPERSONNE::setAnnee_Paiement(String^ Annee_Paiement)
	{
		if (Annee_Paiement != "")
		{
			this->Annee_Paiement = Annee_Paiement;
		}
	}
	void CL_map_TBPERSONNE::setMois_Paiement(String^ Mois_Paiement)
	{
		if (Mois_Paiement != "")
		{
			this->Mois_Paiement = Mois_Paiement;
		}
	}
	void CL_map_TBPERSONNE::setJour_Paiement(String^ Jour_Paiement)
	{
		if (Jour_Paiement != "")
		{
			this->Jour_Paiement = Jour_Paiement;
		}
	}
	void CL_map_TBPERSONNE::setMoyen_Paiement(String^ Moyen_Paiement)
	{
		if (Moyen_Paiement != "")
		{
			this->Moyen_Paiement = Moyen_Paiement;
		}
	}
	void CL_map_TBPERSONNE::setSolde_du_reglement(String^ Solde_du_reglement)
	{
		if (Solde_du_reglement != "")
		{
			this->Solde_du_reglement = Solde_du_reglement;
		}
	}
	void CL_map_TBPERSONNE::setId_Adresse_Facturation(String^ Id_Adresse_Facturation)
	{
		if (Id_Adresse_Facturation != "")
		{
			this->Id_Adresse_Facturation = Id_Adresse_Facturation;
		}
	}
	void CL_map_TBPERSONNE::setId_Adresse_Livraison(String^ Id_Adresse_Livraison)
	{
		if (Id_Adresse_Livraison != "")
		{
			this->Id_Adresse_Livraison = Id_Adresse_Livraison;
		}
	}
	void CL_map_TBPERSONNE::setAnnee_Emission(String^ Annee_Emission)
	{
		if (Annee_Emission != "")
		{
			this->Annee_Emission = Annee_Emission;
		}
	}
	void CL_map_TBPERSONNE::setMois_Emission(String^ Mois_Emission)
	{
		if (Mois_Emission != "")
		{
			this->Mois_Emission = Mois_Emission;
		}
	}
	void CL_map_TBPERSONNE::setJour_Emission(String^ Jour_Emission)
	{
		if (Jour_Emission != "")
		{
			this->Jour_Emission = Jour_Emission;
		}
	}
	void CL_map_TBPERSONNE::setRemise(String^ Remise)
	{
		if (Remise != "")
		{
			this->Remise = Remise;
		}
	}
	void CL_map_TBPERSONNE::setId_Com_Client(String^ Id_Com_Client)
	{
		if (Id_Com_Client != "")
		{
			this->Id_Com_Client = Id_Com_Client;
		}
	}
	void CL_map_TBPERSONNE::setQuantite(String^ Quantite)
	{
		if (Quantite != "")
		{
			this->Quantite = Quantite;
		}
	}
	void CL_map_TBPERSONNE::setId_Art_Catalogue(String^ Id_Art_Catalogue)
	{
		if (Id_Art_Catalogue != "")
		{
			this->Id_Art_Catalogue = Id_Art_Catalogue;
		}
	}
	void CL_map_TBPERSONNE::setId_Art_Commande(String^ Id_Art_Commande)
	{
		if (Id_Art_Commande != "")
		{
			this->Id_Art_Commande = Id_Art_Commande;
		}
	}
	int CL_map_TBPERSONNE::getId_Commande(void)
	{
		return this->Id_Commande;
	}
	String^ CL_map_TBPERSONNE::getAnnee_Paiement(void)
	{
		return this->Annee_Paiement;
	}
	String^ CL_map_TBPERSONNE::getMois_Paiement(void)
	{
		return this->Mois_Paiement;
	}
	String^ CL_map_TBPERSONNE::getJour_Paiement(void)
	{
		return this->Jour_Paiement;
	}
	String^ CL_map_TBPERSONNE::getMoyen_Paiement(void)
	{
		return this->Moyen_Paiement;
	}
	String^ CL_map_TBPERSONNE::getSolde_du_reglement(void)
	{
		return this->Solde_du_reglement;
	}
	String^ CL_map_TBPERSONNE::getId_Adresse_Facturation(void)
	{
		return this->Id_Adresse_Facturation;
	}
	String^ CL_map_TBPERSONNE::getId_Adresse_Livraison(void)
	{
		return this->Id_Adresse_Livraison;
	}
	String^ CL_map_TBPERSONNE::getAnnee_Emission(void)
	{
		return this->Annee_Emission;
	}
	String^ CL_map_TBPERSONNE::getMois_Emission(void)
	{
		return this->Mois_Emission;
	}
	String^ CL_map_TBPERSONNE::getJour_Emission(void)
	{
		return this->Jour_Emission;
	}
	String^ CL_map_TBPERSONNE::getRemise(void)
	{
		return this->Remise;
	}
	String^ CL_map_TBPERSONNE::getId_Com_Client(void)
	{
		return this->Id_Com_Client;
	}
	String^ CL_map_TBPERSONNE::getQuantite(void)
	{
		return this->Quantite;
	}
	String^ CL_map_TBPERSONNE::getId_Art_Catalogue(void)
	{
		return this->Id_Art_Catalogue;
	}
	String^ CL_map_TBPERSONNE::getId_Art_Commande(void)
	{
		return this->Id_Art_Commande;
	}
	//
	//Catalogue=======================================================
	//
	//
	//Requêtes SQL
	//
	String^ CL_map_TBPERSONNE::SELECT_Catalogue(void)
	{
		return "SELECT Id_Catalogue, Nom_Article, Stock, TVA " +
			"FROM Catalogue " + 
			"WHERE Test <> 1;";
	}
	String^ CL_map_TBPERSONNE::INSERT_Catalogue(void)
	{
		return "INSERT INTO Catalogue " +
			"(Nom_Article, HT, Stock, TVA, Test) " +
			"VALUES('" + this->getNom_Article() + "', '" + this->getHT() + "', '" + this->getStock() + "', '" + this->getTVA() + "', '0');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPERSONNE::UPDATE_Catalogue(void)
	{
		return "UPDATE Catalogue " +
			"SET Nom_Article = '" + this->getNom_Article() + "', HT = '" + this->getHT() + "', Stock = '" + this->getStock() + "', TVA = '" + this->getTVA() + "' " +
			"WHERE(Id_Catalogue = " + this->getId_Catalogue() + ");";

	}
	String^ CL_map_TBPERSONNE::DELETE_Catalogue(void)
	{
		return "UPDATE Catalogue " +
			"SET Test = '1' " +
			"WHERE (Id_Catalogue = " + this->getId_Catalogue() + ");";
	}
	//
	//Fonction Set et Get
	//
	void CL_map_TBPERSONNE::setId_Catalogue(int Id_Catalogue)
	{
		if (Id_Catalogue > 0)
		{
			this->Id_Catalogue = Id_Catalogue;
		}
	}
	void CL_map_TBPERSONNE::setNom_Article(String^ Nom_Article)
	{
		if (Nom_Article != "")
		{
			this->Nom_Article = Nom_Article;
		}
	}
	void CL_map_TBPERSONNE::setHT(String^ HT)
	{
		if (HT != "")
		{
			this->HT = HT;
		}
	}
	void CL_map_TBPERSONNE::setStock(String^ Stock)
	{
		if (Stock != "")
		{
			this->Stock = Stock;
		}
	}
	void CL_map_TBPERSONNE::setTVA(String^ TVA)
	{
		if (TVA != "")
		{
			this->TVA = TVA;
		}
	}
	int CL_map_TBPERSONNE::getId_Catalogue(void)
	{
		return this->Id_Catalogue;
	}
	String^ CL_map_TBPERSONNE::getNom_Article(void)
	{
		return this->Nom_Article;
	}
	String^ CL_map_TBPERSONNE::getHT(void)
	{
		return this->HT;
	}
	String^ CL_map_TBPERSONNE::getStock(void)
	{
		return this->Stock;
	}
	String^ CL_map_TBPERSONNE::getTVA(void)
	{
		return this->TVA;
	}
	//
	//Stat=======================================================
	//
	//
	//Requêtes SQL
	//
	String^ CL_map_TBPERSONNE::SELECT_Stat1(void)
	{
		return "SELECT " +
					"SUM(Prix_Panier) / COUNT(Id_commande) " +
				"FROM " +
					"(SELECT " +
						"SUM(Prix_Article)AS Prix_Panier " +
					"FROM " +
						"(SELECT " +
							"((Catalogue.HT) * (1 + (Catalogue.TVA) / 100) * (Article.Quantite) * (1 - (Commande.Remise) / cast(100 as float))) " +
						"AS " +
							"Prix_Article, Article.Id_Commande AS Id " +
						"FROM " +
							"Catalogue, Article, Commande " +
						"WHERE " +
							"Article.Id_Commande = Commande.Id_Commande " +
						"AND " +
							"Article.Id_Catalogue = Catalogue.Id_Catalogue)AS tmp, commande " +
					"WHERE " +
						"Id = Commande.Id_Commande " +
					"GROUP BY " +
						"Id)AS temp, commande;";
	}
	String^ CL_map_TBPERSONNE::SELECT_Stat2(void)
	{
		return "SELECT " +
					"SUM(Prix_Panier) " +
				"FROM " +
					"(SELECT " +
						"SUM(Prix_Article)AS Prix_Panier " +
					"FROM " +
						"(SELECT " +
							"((Catalogue.HT) * (1 + (Catalogue.TVA) / 100) * (Article.Quantite) * (1 - (Commande.Remise) / cast(100 as float))) " +
						"AS " +
							"Prix_Article, Article.Id_Commande AS Id " +
						"FROM " +
							"Catalogue, Article, Commande " +
						"WHERE " +
							"Article.Id_Commande = Commande.Id_Commande " +
						"AND " +
							"Article.Id_Catalogue = Catalogue.Id_Catalogue)AS tmp, commande " +
					"WHERE " +
						"Id = Commande.Id_Commande " +
					"GROUP BY " +
						"Id)AS temp, commande " +
				"WHERE " +
					"Date_Paiement >= '" + this->getAnnee_inferieur() + "-" + this->getMois_inferieur() + "-" + this->getJour_inferieur() + "' " +
				"AND " +
					"Date_Paiement < '" + this->getAnnee_superieur() + "-" + this->getMois_superieur() + "-" + this->getJour_superieur() + "'; ";

	}
	String^ CL_map_TBPERSONNE::SELECT_Stat3(void)
	{
		return "SELECT " +
					"Nom_Article, Id_Catalogue " +
				"FROM " +
					"Catalogue " +
				"WHERE " +
					"Stock <= ((15 * (SELECT " +
						"SUM(Quantite) " +
					"FROM " +
						"Article, commande, catalogue " +
					"WHERE " +
						"Commande.Id_Commande = Article.Id_Commande " +
					"AND " +
						"Article.Id_Catalogue = Catalogue.Id_Catalogue " +
					"AND " +
						"Commande.Date_Paiement > DATEADD(year, -1, (CONVERT(date, GETDATE())))) " +
					"/ 365.242 + (SELECT MAX(result) " +
					"FROM " +
						"(SELECT(SUM(Quantite))AS result " +
						"FROM " +
							"Article, commande, catalogue " +
						"WHERE " +
							"Commande.Id_Commande = Article.Id_Commande " +
						"AND " +
							"Article.Id_Catalogue = Catalogue.Id_Catalogue " +
						"AND " +
							"Commande.Date_Paiement > DATEADD(year, -1, (CONVERT(date, GETDATE()))) " +
						"GROUP BY " +
							"MONTH(Commande.Date_Paiement))as smt) " +
				"- ((SELECT " +
						"SUM(Quantite) " +
					"FROM " +
						"Article, commande, catalogue " +
					"WHERE " +
						"Commande.Id_Commande = Article.Id_Commande AND Article.Id_Catalogue = Catalogue.Id_Catalogue " +
					"AND " +
						"Commande.Date_Paiement > DATEADD(year, -1, (CONVERT(date, GETDATE()))))) " +
				"+ 15))";
	}
	String^ CL_map_TBPERSONNE::SELECT_Stat4(void)
	{
		return "SELECT  " +
					"SUM(Prix_Article) " +
				"AS Prix_panier " +
				"FROM " +
					"(SELECT " +
						"((Catalogue.HT) * (1 + (Catalogue.TVA) / CAST(100 as float)) * (Article.Quantite) * (1 - (Commande.Remise) / CAST(100 as float))) " +
					"AS Prix_Article " +
					"FROM " +
						"Catalogue, Article, Commande " +
					"WHERE " +
						"Article.Id_Commande = Commande.Id_Commande " +
					"AND " +
						"Article.Id_Catalogue = Catalogue.Id_Catalogue " +
					"AND " +
						"Id_Client =" + this->getId_Stat_Client() + ")AS tmp;";
	}
	String^ CL_map_TBPERSONNE::SELECT_Stat5(void)
	{
		return "SELECT TOP 10 " +
					"SUM(article.Quantite) / 2 AS resultat, Catalogue.Nom_Article " +
				"FROM " +
					"Article, commande, catalogue " +
				"WHERE " +
					"Article.Id_Catalogue = catalogue.Id_Catalogue " +
				"Group BY " +
					"Catalogue.Nom_Article " +
				"ORDER BY " +
					"resultat desc;";
	}
	String^ CL_map_TBPERSONNE::SELECT_Stat6(void)
	{
		return "SELECT TOP 10 " +
					"SUM(article.Quantite) / 2 AS resultat, Catalogue.Nom_Article " +
				"FROM " +
					"Article, commande, catalogue " +
				"WHERE " +
					"Article.Id_Catalogue = catalogue.Id_Catalogue " +
				"Group BY " +
					"Catalogue.Nom_Article " +
				"ORDER BY " +
				"resultat asc;";
	}
	String^ CL_map_TBPERSONNE::SELECT_Stat7(void)
	{
		return "SELECT " +
					"SUM(Resultat) " +
				"FROM " +
					"(SELECT " +
						"(Catalogue.Stock) * (Catalogue.HT) * (1 + (Catalogue.TVA) / CAST(100 AS FLOAT)) AS Resultat " +
					"FROM " +
						"Catalogue)AS tmp; ";
	}
	String^ CL_map_TBPERSONNE::SELECT_Stat8(void)
	{
		return "SELECT " +
					"SUM(Resultat) " +
				"FROM " +
					"(SELECT " +
						"(Catalogue.Stock) * (Catalogue.HT) AS Resultat " +
					"FROM " +
						"Catalogue)AS tmp; ";
	}
	String^ CL_map_TBPERSONNE::SELECT_Stat9(void)
	{
		return "SELECT " +
					"SUM(Resultat) " +
				"FROM " +
					"(SELECT " +
						"((Catalogue.Stock) * (Catalogue.HT) * (1 + (" + this->getTVA() + ") / CAST(100 AS FLOAT)) * (1 - (" + this->getRemise() + ") / CAST(100 AS FLOAT)) * (1 - (" + this->getDemarche() + ") / CAST(100 AS FLOAT)) * (1 + (" + this->getMarge() + ") / 100)) AS Resultat " +
					"FROM " +
						"Catalogue) as tmp; ";
	}
	//
	//Fonction Set et Get
	//
	void CL_map_TBPERSONNE::setId_Stat_Client(String^ Id_Stat_Client)
	{
		if (Id_Stat_Client != "")
		{
			this->Id_Stat_Client = Id_Stat_Client;
		}
	}
	void CL_map_TBPERSONNE::setAnnee_inferieur(String^ Annee_inferieur)
	{
		if (Annee_inferieur != "")
		{
			this->Annee_inferieur = Annee_inferieur;
		}
	}
	void CL_map_TBPERSONNE::setMois_inferieur(String^ Mois_inferieur)
	{
		if (Mois_inferieur != "")
		{
			this->Mois_inferieur = Mois_inferieur;
		}
	}
	void CL_map_TBPERSONNE::setJour_inferieur(String^ Jour_inferieur)
	{
		if (Jour_inferieur != "")
		{
			this->Jour_inferieur = Jour_inferieur;
		}
	}
	void CL_map_TBPERSONNE::setAnnee_superieur(String^ Annee_superieur)
	{
		if (Annee_superieur != "")
		{
			this->Annee_superieur = Annee_superieur;
		}
	}
	void CL_map_TBPERSONNE::setMois_superieur(String^ Mois_superieur)
	{
		if (Mois_superieur != "")
		{
			this->Mois_superieur = Mois_superieur;
		}
	}
	void CL_map_TBPERSONNE::setJour_superieur(String^ Jour_superieur)
	{
		if (Jour_superieur != "")
		{
			this->Jour_superieur = Jour_superieur;
		}
	}
	void CL_map_TBPERSONNE::setMarge(String^ Marge)
	{
		if (Marge != "")
		{
			this->Marge = Marge;
		}
	}
	void CL_map_TBPERSONNE::setDemarche(String^ Demarche)
	{
		if (Demarche != "")
		{
			this->Demarche = Demarche;
		}
	}
	String^ CL_map_TBPERSONNE::getMarge(void)
	{
		return this->Marge;
	}
	String^ CL_map_TBPERSONNE::getDemarche(void)
	{
		return this->Demarche;
	}
	String^ CL_map_TBPERSONNE::getId_Stat_Client(void)
	{
		return this->Id_Stat_Client;
	}
	String^ CL_map_TBPERSONNE::getAnnee_inferieur(void)
	{
		return this->Annee_inferieur;
	}
	String^ CL_map_TBPERSONNE::getMois_inferieur(void)
	{
		return this->Mois_inferieur;
	}
	String^ CL_map_TBPERSONNE::getJour_inferieur(void)
	{
		return this->Jour_inferieur;
	}
	String^ CL_map_TBPERSONNE::getAnnee_superieur(void)
	{
		return this->Annee_superieur;
	}
	String^ CL_map_TBPERSONNE::getMois_superieur(void)
	{
		return this->Mois_superieur;
	}
	String^ CL_map_TBPERSONNE::getJour_superieur(void)
	{
		return this->Jour_superieur;
	}
	//
	//Utilitaire=======================================================
	//
	String^ CL_map_TBPERSONNE::TEST_Ville(void)
	{
		return "SELECT COALESCE(MAX(Ville_de_France_Majuscule), 'false') AS WhenReturnSetIsEmpty FROM Ville_France WHERE Ville_de_France_Majuscule='" + this->getVille() + "' OR Ville_de_France_Minuscule = '" + this->getVille() +"';";
	}
}

namespace NS_Svc
{
	CL_svc_gestionPersonnes::CL_svc_gestionPersonnes(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personne = gcnew NS_Composants::CL_map_TBPERSONNE();
		this->ds = gcnew Data::DataSet();
	}
	//
	//Client=======================================================
	//
	//
	//Exécutions des requêtes
	//
	DataSet^ CL_svc_gestionPersonnes::liste_Client(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Client(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionPersonnes::liste_Adresse(String^ dataTableName, String^ Id)
	{
		this->personne->setId_Com_Client(Id);
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Adresse(), dataTableName);
		return this->ds;
	}
	String^ CL_svc_gestionPersonnes::ajouter_Client(String^ nom, String^ prenom, String^ Date)
	{
		this->personne->setNom_Client(nom);
		this->personne->setPrenom_Client(prenom);
		this->personne->setDate_Naissance(Date);
		return Convert::ToString(this->cad->actionRowsID(this->personne->INSERT_Client()));	
	}
	void CL_svc_gestionPersonnes::ajouter_Client_Adresse(String^ Adresse_sql, String^ CP_sql, String^ Ville_sql, int Id)
	{
		this->personne->setAdresse(Adresse_sql);
		this->personne->setCP(CP_sql);
		this->personne->setVille(Ville_sql);
		this->personne->setId_Client(Id);
		this->cad->actionRows(this->personne->INSERT_Adresse());
	}
	void CL_svc_gestionPersonnes::modifier_Client(int Id_Client, String^ nom, String^ prenom, String^ date)
	{
		this->personne->setId_Client(Id_Client);
		this->personne->setNom_Client(nom);
		this->personne->setPrenom_Client(prenom);
		this->personne->setDate_Naissance(date);

		this->cad->actionRows(this->personne->UPDATE_Client());
	}
	void CL_svc_gestionPersonnes::supprimer_Client(int Id_Client)
	{
		this->personne->setId_Client(Id_Client);
		this->cad->actionRows(this->personne->DELETE_Adresse());
		this->cad->actionRows(this->personne->DELETE_Client());
	}
	//
	//Personnel=======================================================
	//
	//
	//Exécutions des requêtes
	//
	DataSet^ CL_svc_gestionPersonnes::liste_Personnel(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Personnel(), dataTableName);
		return this->ds;
	}
	void CL_svc_gestionPersonnes::ajouter_Personnel(String^ Nom_Personnel, String^ Prenom_Personnel, String^ Adresse_Personnel, String^ CP_Personnel, String^ Ville_Personnel, String^ Date_Embauche, String^ Superieur)
	{
		this->personne->setNom_Personnel(Nom_Personnel);
		this->personne->setPrenom_Personnel(Prenom_Personnel);
		this->personne->setAdresse_Personnel(Adresse_Personnel);
		this->personne->setCP_Personnel(CP_Personnel);
		this->personne->setVille_Personnel(Ville_Personnel);
		this->personne->setDate_Embauche(Date_Embauche);
		this->personne->setSuperieur(Superieur);
		this->cad->actionRows(this->personne->INSERT_Personnel());
	}
	void CL_svc_gestionPersonnes::modifier_Personnel(int Id_Personnel, String^ Nom_Personnel, String^ Prenom_Personnel, String^ Adresse_Personnel, String^ CP_Personnel, String^ Ville_Personnel, String^ Date_Embauche, String^ Superieur)
	{
		this->personne->setId_Personnel(Id_Personnel);
		this->personne->setNom_Personnel(Nom_Personnel);
		this->personne->setPrenom_Personnel(Prenom_Personnel);
		this->personne->setAdresse_Personnel(Adresse_Personnel);
		this->personne->setCP_Personnel(CP_Personnel);
		this->personne->setVille_Personnel(Ville_Personnel);
		this->personne->setDate_Embauche(Date_Embauche);
		this->personne->setSuperieur(Superieur);
		this->cad->actionRows(this->personne->UPDATE_Personnel());
	}
	void CL_svc_gestionPersonnes::supprimer_Personnel(int Id_Personnel)
	{
		this->personne->setId_Personnel(Id_Personnel);
		this->cad->actionRows(this->personne->DELETE_Personnel());
	}
	//
	//Commande=======================================================
	//
	//
	//Exécutions des requêtes
	//
	DataSet^ CL_svc_gestionPersonnes::liste_Commande(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Commande(), dataTableName);
		return this->ds;
	}
	String^ CL_svc_gestionPersonnes::ajouter_Commande(String^ Annee_Paiement, String^ Mois_Paiement, String^ Jour_Paiement, String^ Moyen_Paiement, String^ Solde_du_reglement, String^ Id_Adresse_Facturation, String^ Id_Adresse_Livraison, String^ Remise, String^ Id_Com_Client)
	{
		int Id_rows_Commande;
		this->personne->setAnnee_Paiement(Annee_Paiement);
		this->personne->setMois_Paiement(Mois_Paiement);
		this->personne->setJour_Paiement(Jour_Paiement);
		this->personne->setMoyen_Paiement(Moyen_Paiement);
		this->personne->setSolde_du_reglement(Solde_du_reglement);
		this->personne->setId_Adresse_Facturation(Id_Adresse_Facturation);
		this->personne->setId_Adresse_Livraison(Id_Adresse_Livraison);
		this->personne->setRemise(Remise);
		this->personne->setId_Com_Client(Id_Com_Client);
		return Convert::ToString(this->cad->actionRowsID(this->personne->INSERT_Commande()));
		
	}
	void CL_svc_gestionPersonnes::ajouter_Article(String^ Id_Art_Catalogue, String^ Quantite, String^ Id_Commande)
	{
		this->personne->setId_Art_Catalogue(Id_Art_Catalogue);
		this->personne->setQuantite(Quantite);
		this->personne->setId_Art_Commande(Id_Commande);
		this->cad->actionRows(this->personne->INSERT_Article());
	}
	void CL_svc_gestionPersonnes::modifier_Commande(int Id_Commande, String^ Annee_Paiement, String^ Mois_Paiement, String^ Jour_Paiement, String^ Moyen_Paiement, String^ Solde_du_reglement, String^ Id_Adresse_Facturation, String^ Id_Adresse_Livraison, String^ Remise)
	{
		this->personne->setId_Commande(Id_Commande);
		this->personne->setAnnee_Paiement(Annee_Paiement);
		this->personne->setMois_Paiement(Mois_Paiement);
		this->personne->setJour_Paiement(Jour_Paiement);
		this->personne->setMoyen_Paiement(Moyen_Paiement);
		this->personne->setSolde_du_reglement(Solde_du_reglement);
		this->personne->setId_Adresse_Facturation(Id_Adresse_Facturation);
		this->personne->setId_Adresse_Livraison(Id_Adresse_Livraison);
		this->personne->setRemise(Remise);
		this->cad->actionRows(this->personne->UPDATE_Commande());
	}
	void CL_svc_gestionPersonnes::supprimer_Commande(int Id_Commande)
	{
		this->personne->setId_Commande(Id_Commande);
		this->cad->actionRows(this->personne->DELETE_Commande());
	}
	void CL_svc_gestionPersonnes::supprimer_Article(int Id_Commande)
	{
		this->personne->setId_Commande(Id_Commande);
		this->cad->actionRows(this->personne->DELETE_Article());
	}
	//
	//Catalogue=======================================================
	//
	//
	//Exécutions des requêtes
	//
	DataSet^ CL_svc_gestionPersonnes::liste_Catalogue(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Catalogue(), dataTableName);
		return this->ds;
	}
	void CL_svc_gestionPersonnes::ajouter_Catalogue(String^ Nom_Article, String^ HT, String^ Stock, String^ TVA)
	{
		this->personne->setNom_Article(Nom_Article);
		this->personne->setHT(HT);
		this->personne->setStock(Stock);
		this->personne->setTVA(TVA);
		this->cad->actionRowsID(this->personne->INSERT_Catalogue());
	}
	void CL_svc_gestionPersonnes::modifier_Catalogue(int Id_Catalogue, String^ Nom_Article, String^ HT, String^ Stock, String^ TVA)
	{
		this->personne->setId_Catalogue(Id_Catalogue);
		this->personne->setNom_Article(Nom_Article);
		this->personne->setHT(HT);
		this->personne->setStock(Stock);
		this->personne->setTVA(TVA);
		this->cad->actionRows(this->personne->UPDATE_Catalogue());
	}
	void CL_svc_gestionPersonnes::supprimer_Catalogue(int Id_Catalogue)
	{
		this->personne->setId_Catalogue(Id_Catalogue);
		this->cad->actionRows(this->personne->DELETE_Catalogue());
	}
	//
	//Stat=======================================================
	//
	//
	//Exécutions des requêtes
	//
	DataSet^ CL_svc_gestionPersonnes::Stat1(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Stat1(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionPersonnes::Stat2(String^ dataTableName, String^ Annee_inferieur, String^ Mois_inferieur, String^ Jour_inferieur, String^ Annee_superieur, String^ Mois_superieur, String^ Jour_superieur)
	{
		this->ds->Clear();
		this->personne->setAnnee_inferieur(Annee_inferieur);
		this->personne->setMois_inferieur(Mois_inferieur);
		this->personne->setJour_inferieur(Jour_inferieur);
		this->personne->setAnnee_superieur(Annee_superieur);
		this->personne->setMois_superieur(Mois_superieur);
		this->personne->setJour_superieur(Jour_superieur);
		this->ds = this->cad->getRows(this->personne->SELECT_Stat2(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionPersonnes::Stat3(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Stat3(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionPersonnes::Stat4(String^ dataTableName, String^ Id_Stat_Client)
	{
		this->ds->Clear();
		this->personne->setId_Stat_Client(Id_Stat_Client);
		this->ds = this->cad->getRows(this->personne->SELECT_Stat4(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionPersonnes::Stat5(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Stat5(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionPersonnes::Stat6(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Stat6(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionPersonnes::Stat7(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Stat7(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionPersonnes::Stat8(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT_Stat8(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionPersonnes::Stat9(String^ dataTableName, String^ VAT, String^ Marge, String^ Demarche, String^ Remise)
	{
		this->ds->Clear();
		this->personne->setTVA(VAT);
		this->personne->setMarge(Marge);
		this->personne->setDemarche(Demarche);
		this->personne->setRemise(Remise);
		this->ds = this->cad->getRows(this->personne->SELECT_Stat9(), dataTableName);
		return this->ds;
	}
	//
	//Utilitaire=======================================================
	//
	//
	//Exécutions des requêtes
	//
	DataSet^ CL_svc_gestionPersonnes::Ville(String^ dataTableName, String^ Ville)
	{
		this->ds->Clear();
		this->personne->setVille(Ville);
		this->ds = this->cad->getRows(this->personne->TEST_Ville(), dataTableName);
		return this->ds;
	}
}
