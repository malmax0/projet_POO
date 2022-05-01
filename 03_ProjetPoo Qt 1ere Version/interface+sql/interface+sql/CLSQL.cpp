#include "CLSQL.h"
#include <iostream>
#include <mysql.h>
#include <string>


std::string SQL::Fonction(int in)
{
    string retour;
    switch (in)
    {
    case 1:
        retour = "SELECT ";
        break;

    case 2:
        retour = " FROM ";
        break;

    case 3:
        retour = "INSERT INTO ";
        break;

    case 4:
        retour = " VALUES ";
        break;

    case 5:
        retour = "(";
        break;

    case 6:
        retour = ",";
        break;

    case 7:
        retour = ")";
        break;

    case 8:
        retour = ";";
        break;

    case 9:
        retour = "'";
        break;

    case 10:
        retour = " WHERE ";
        break;

    case 11:
        retour = "*";
        break;

    case 12:
        retour = "COALESCE(MAX(";
        break;

    case 13:
        retour = "), 'false') AS WhenReturnSetIsEmpty";
        break;

    default:
        break;
    }



    return retour;
}

string SQL::SELECT(std::string smt, std::string sth)
{
    string requete = "";
    requete += SQL::Fonction(1) + SQL::Fonction(12) + SQL::Fonction(2) + "sth" + SQL::Fonction(8);
    return requete;
}

void SQL::INSERT(std::string query)
{
    if (conn)
    {
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
    }
}

void SQL::Connection(string myID, string myPW)
{
    const char* ID = myID.c_str();
    const char* PW = myPW.c_str();
    conn = mysql_real_connect(conn, "localhost", ID, PW, "ProjetPOO", 3306, NULL, 0);
    if (conn)
    {
        //puts("Successful connection to database!");
    }
    else
    {
        //puts("Connection to database has sucessfully failed!");
    }
}


void SQL::Lancer_requete()
{
    int x = 0, y = 0;
    string query = "";
    
    if (conn)
    {
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
        if (!qstate)
        {
            std::cout << "Query success" << endl;
        }
        else
        {
            std::cout << "Query successfully failed: " << mysql_error(conn) << endl;
        }
    }
}




void SQL::Afficher_resultat()
{

    if (!qstate)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            printf("ID: %s, Nom_client: %s, Prnom_Client: %s, Date_Naissance: %s,Date_Firstachat: %s\n", row[0], row[1], row[2], row[3], row[4]);   
        }
    }

}

int SQL::testVille(string StrVille)
{
    int test;
    string query;
    query = "SELECT COALESCE(MAX(Ville_de_France_Majuscule), 'false') AS WhenReturnSetIsEmpty FROM Ville_France WHERE Ville_de_France_Majuscule='qqc' OR Ville_de_France_Minuscule = '"+StrVille+"';";
    if (conn)
    {
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
        if (!qstate)
        {
            std::cout << "Query success" << endl;
            res = mysql_store_result(conn);
            while (row = mysql_fetch_row(res))
            {
                if (string(row[0]) == "false")
                {
                    test = 1;
                }
                else
                {
                    test = 0;
                }
            }
        }
        else
        {
            std::cout << "Query successfully failed: " << mysql_error(conn) << endl;
        }
    }

    return test;

}