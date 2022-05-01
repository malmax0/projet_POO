#pragma once
#include <iostream>
#include <mysql.h>


using namespace std;


class SQL
{
public:

	string Fonction(int in);
	string SELECT(std::string smt, std::string sth);
	void INSERT(std::string query);
	void Connection(string ID, string PW);
	void Lancer_requete();
	void Afficher_resultat();
	int SQL::testVille(string StrVille);

protected:

	MYSQL* conn = mysql_init(0);
	MYSQL_ROW row;
	MYSQL_RES* res;
	int qstate;
};