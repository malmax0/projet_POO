#pragma once
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
namespace NS_Composants
{
	ref class CL_CAD
	{
	private:
		String^ cnx;
		String^ rq_sql;
		SqlConnection^ CNX;
		SqlCommand^ CMD;
		SqlDataAdapter^ DA;
		DataSet^ DS;
		void setSQL(String^);
	public:
		CL_CAD(void);
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};

	ref class CL_map_TBPERSONNE
	{
	private:
		//
		//Client
		//
		int Id_Client;
		String^ Nom_Client;
		String^ Prenom_Client;
		String^ Date_Naissance;
		int Id;
		String^ Adresse;
		String^ CP;
		String^ Ville;
		//
		//Personnel
		//
		int Id_Personnel;
		String^ Nom_Personnel;
		String^ Prenom_Personnel;
		String^ Adresse_Personnel;
		String^ CP_Personnel;
		String^ Ville_Personnel;
		String^ Date_Embauche;
		String^ Superieur;
		//
		//Commande
		//
		int Id_Commande;
		String^ Annee_Paiement;
		String^ Mois_Paiement;
		String^ Jour_Paiement;
		String^ Moyen_Paiement;
		String^ Solde_du_reglement;
		String^ Id_Adresse_Facturation;
		String^ Id_Adresse_Livraison;
		String^ Annee_Emission;
		String^ Mois_Emission;
		String^ Jour_Emission;
		String^ Remise;
		String^ Id_Com_Client;
		String^ Quantite;
		String^ Id_Art_Catalogue;
		String^ Id_Art_Commande;
		//
		//Catalogue
		//
		int Id_Catalogue;
		String^ Nom_Article;
		String^ HT;
		String^ Stock;
		String^ TVA;
		//
		//Stat
		//
		String^ Marge;
		String^ Demarche;
		String^ Id_Stat_Client;
		String^ Annee_inferieur;
		String^ Mois_inferieur;
		String^ Jour_inferieur;
		String^ Annee_superieur;
		String^ Mois_superieur;
		String^ Jour_superieur;

	public:
		CL_map_TBPERSONNE(void);
		//
		//Client
		//
		String^ SELECT_Client(void);
		String^ SELECT_Adresse(void);
		String^ INSERT_Client(void);
		String^ INSERT_Adresse(void);
		String^ UPDATE_Client(void);
		String^ DELETE_Client(void);
		String^ DELETE_Adresse(void);
		//
		//Personnel
		//
		String^ SELECT_Personnel(void);
		String^ INSERT_Personnel(void);
		String^ UPDATE_Personnel(void);
		String^ DELETE_Personnel(void);
		//
		//Commande
		//
		String^ SELECT_Commande(void);
		String^ INSERT_Commande(void);
		String^ INSERT_Article(void);
		String^ UPDATE_Commande(void);
		String^ DELETE_Commande(void);
		String^ DELETE_Article(void);
		//
		//Catalogue
		//
		String^ SELECT_Catalogue(void);
		String^ INSERT_Catalogue(void);
		String^ UPDATE_Catalogue(void);
		String^ DELETE_Catalogue(void);
		//
		//Stat
		//
		String^ SELECT_Stat1(void);
		String^ SELECT_Stat2(void);
		String^ SELECT_Stat3(void);
		String^ SELECT_Stat4(void);
		String^ SELECT_Stat5(void);
		String^ SELECT_Stat6(void);
		String^ SELECT_Stat7(void);
		String^ SELECT_Stat8(void);
		String^ SELECT_Stat9(void);
		//
		//Utilitaire
		//
		String^ TEST_Ville(void);
		//
		//Client
		//
		void setId_Client(int);
		void setPrenom_Client(String^);
		void setNom_Client(String^);
		void setDate_Naissance(String^);
		void setId(int);
		void setAdresse(String^);
		void setCP(String^);
		void setVille(String^);
		int getId_Client(void);
		String^ getNom_Client(void);
		String^ getPrenom_Client(void);
		String^ getDate_Naissance(void);
		String^ getAdresse(void);
		String^ getCP(void);
		String^ getVille(void);
		int getId(void);
		//
		//Personnel
		//
		void setId_Personnel(int);
		void setPrenom_Personnel(String^);
		void setNom_Personnel(String^);
		void setAdresse_Personnel(String^);
		void setCP_Personnel(String^);
		void setVille_Personnel(String^);
		void setDate_Embauche(String^);
		void setSuperieur(String^);
		int getId_Personnel(void);
		String^ getNom_Personnel(void);
		String^ getPrenom_Personnel(void);
		String^ getAdresse_Personnel(void);
		String^ getCP_Personnel(void);
		String^ getVille_Personnel(void);
		String^ getDate_Embauche(void);
		String^ getSuperieur(void);
		//
		//Commande
		//
		void setId_Commande(int);
		void setAnnee_Paiement(String^);
		void setMois_Paiement(String^);
		void setJour_Paiement(String^);
		void setMoyen_Paiement(String^);
		void setSolde_du_reglement(String^);
		void setId_Adresse_Facturation(String^);
		void setId_Adresse_Livraison(String^);
		void setAnnee_Emission(String^);
		void setMois_Emission(String^);
		void setJour_Emission(String^);
		void setRemise(String^);
		void setId_Com_Client(String^);
		void setQuantite(String^);
		void setId_Art_Catalogue(String^);
		void setId_Art_Commande(String^);
		int getId_Commande(void);
		String^ getAnnee_Paiement(void);
		String^ getMois_Paiement(void);
		String^ getJour_Paiement(void);
		String^ getMoyen_Paiement(void);
		String^ getSolde_du_reglement(void);
		String^ getId_Adresse_Facturation(void);
		String^ getId_Adresse_Livraison(void);
		String^ getAnnee_Emission(void);
		String^ getMois_Emission(void);
		String^ getJour_Emission(void);
		String^ getRemise(void);
		String^ getId_Com_Client(void);
		String^ getQuantite(void);
		String^ getId_Art_Catalogue(void);
		String^ getId_Art_Commande(void);
		//
		//Catalogue
		//
		void setId_Catalogue(int);
		void setNom_Article(String^);
		void setHT(String^);
		void setStock(String^);
		void setTVA(String^);
		int getId_Catalogue(void);
		String^ getNom_Article(void);
		String^ getHT(void);
		String^ getStock(void);
		String^ getTVA(void);
		//
		//Stat
		//
		void setMarge(String^);
		void setDemarche(String^);
		void setId_Stat_Client(String^);
		void setAnnee_inferieur(String^);
		void setMois_inferieur(String^);
		void setJour_inferieur(String^);
		void setAnnee_superieur(String^);
		void setMois_superieur(String^);
		void setJour_superieur(String^);
		String^ getMarge(void);
		String^ getDemarche(void);
		String^ getId_Stat_Client(void);
		String^ getAnnee_inferieur(void);
		String^ getMois_inferieur(void);
		String^ getJour_inferieur(void);
		String^ getAnnee_superieur(void);
		String^ getMois_superieur(void);
		String^ getJour_superieur(void);
	};
}

namespace NS_Svc
{
	ref class CL_svc_gestionPersonnes
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBPERSONNE^ personne;
		DataSet^ ds;
	public:
		CL_svc_gestionPersonnes(void);
		//
		//Client
		//
		DataSet^ liste_Client(String^);
		DataSet^ liste_Adresse(String^, String^);
		String^ ajouter_Client(String^, String^, String^);
		void ajouter_Client_Adresse(String^, String^, String^, int);
		void modifier_Client(int, String^, String^, String^);
		void supprimer_Client(int);
		//
		//Personnel
		//
		DataSet^ liste_Personnel(String^);
		void ajouter_Personnel(String^, String^, String^, String^, String^, String^, String^);
		void modifier_Personnel(int, String^, String^, String^, String^, String^, String^, String^);
		void supprimer_Personnel(int);
		//
		//Commande
		//
		DataSet^ liste_Commande(String^);
		String^ ajouter_Commande(String^ Annee_Paiement, String^ Mois_Paiement, String^ Jour_Paiement, String^ Moyen_Paiement, String^ Solde_du_Paiement, String^ Id_Adresse_Facturation, String^ Id_Adresse_Livraison, String^ Remise, String^ Id_Com_Client);
		void ajouter_Article(String^, String^, String^);
		void modifier_Commande(int, String^, String^, String^, String^, String^, String^, String^, String^);
		void supprimer_Commande(int);
		void supprimer_Article(int);
		//
		//Catalogue
		//
		DataSet^ liste_Catalogue(String^);
		void ajouter_Catalogue(String^, String^, String^, String^);
		void modifier_Catalogue(int, String^, String^, String^, String^);
		void supprimer_Catalogue(int);
		//
		//Stat
		//
		DataSet^ Stat1(String^);
		DataSet^ Stat2(String^, String^, String^, String^, String^, String^, String^);
		DataSet^ Stat3(String^);
		DataSet^ Stat4(String^, String^);
		DataSet^ Stat5(String^);
		DataSet^ Stat6(String^);
		DataSet^ Stat7(String^);
		DataSet^ Stat8(String^);
		DataSet^ Stat9(String^, String^, String^, String^, String^);
		//
		//Utilitaire
		//
		DataSet^ Ville(String^, String^);
	};
}