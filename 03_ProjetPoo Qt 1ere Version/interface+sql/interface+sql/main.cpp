#include <QtWidgets/QApplication>
#include <QtCore/qstring.h>
#include "QtWidgets/QMessageBox"

#include "domainespp.h"
#include "login.h"
#include "choixcscp.h"
#include "commande.h"
#include "stock.h"
#include "client.h"
#include "personnel.h"
#include "stat.h"
#include "CLSQL.h"


int main(int argc, char* argv[])
{
    int table=0;
    int action=0;
    int i=0;
    QApplication a(argc, argv);
    login log;
    SQL connect;
    connect.Connection("root", "");
    log.i =&i;
    log.show();
    a.exec();
    if (i == 1)
    {
        
        i = 0;
        domainespp michel;
        michel.etat = &table;
        michel.show();
        a.exec();

    }
    else 
    {
        return 0;
    }
    if (table < 5 && table>0)
    {
        choixcscp cho;

        cho.action = &action;
        cho.show();

        a.exec();
    }

 
    if (table == 1)
    {  
        if (action == 1)
        {
            commandeajout ca;
            ca.show();
            ca.i = &i;
            a.exec();
            if (i == 1)
            {
                i = 0;
                commandeajoutarticle cad;
                cad.show();
                a.exec();
            }
            else { return 0; }
        }
        else if (action==2)
        {
            commandemodif cm;
            cm.show();
            a.exec();
        }
        else if (action == 4)
        {
            commandesuppr cs;
            cs.show();
            a.exec();
        }
        else if(action==3)
        {
             commandeaffi cf;
             cf.show();
             a.exec();
        }
        else 
        {
            return 0;
        }
    }
    else if(table==2)
    {
        if (action == 1) 
        {
            stockajout sa;
            sa.show();
            a.exec();
        }
        else if (action == 2)
        {

            stockmodif sm;
            sm.show();
            a.exec();
        }
        else if (action == 4)
        {
            stocksuppr ss;
            ss.show();
            a.exec();
        }
        else if (action==3)
        {
            stockaffi sf;
            sf.show();
            a.exec();
        }
        else
        {
            return 0;
        }
    }
    else if (table == 3)
    {
        if (action == 1)
        {
            clientajout cla;
            cla.i = &i;
            cla.show();
            a.exec();
            if (i == 1)
            {
                i = 0;
                clientajoutadress clad;
                clad.show();
                a.exec();
            }
        }
        else if (action == 2)
        {
            clientmodif clm;
            clm.i = &i;
            clm.show();
            a.exec();
            if (i == 1)
            {
                clientmodifadresssuppr cmas;
                cmas.show();
                a.exec();
            }
            else if (i == 2)
            {
                clientajoutadress clad;
                clad.show();
                a.exec();
            }

        }
        else if (action == 4)
        {
            clientsuppr cls;
            cls.show();
            a.exec();

        }
        else if(action==3)
        {
            clientaffi clf;
            clf.show();
            a.exec();
        }
        else
        {
            return 0;
        }

    }
    else if (table == 4)
    {
    if (action == 1)
    {
        personnelajout pa;
        pa.show();
        a.exec();
    }
    else if (action == 2)
    {
        personnelmodif pm;
        pm.show();
        a.exec();
    }
    else if (action==3)
    {
        personnelaffi pf;
        pf.show();
        a.exec();
    }
    else if(action==4)
    {

        personnelsuppr ps;
        ps.show();
        a.exec();

        //a faire avec le sql
        personnelchangementsuperieur pcs;
        pcs.show();
        a.exec();

    }
    else
    {
        return 0;
    }
        

        


         
    }
    else if (table==5)
    { 
        statchoix stc;
        stc.choix = &action;
        stc.show();
        a.exec();
        if (action ==1 || action==3  ||action==5 || action==6 || action==7 || action==8 )
        {
            stataffi stf;
            stf.show();
            a.exec();
        }
        else if (action==2)
        { 
            statcalcmois stcm;
            stcm.show();
            a.exec();
        }
        else if (action == 4)
        {
            statcalctotal stct;
            stct.show();
            a.exec();
        }
        else if (action==9)
        {
            statsimu sts;
            sts.show();
            a.exec();
        }
        else 
        {
            return 0;
        }
    }
}



