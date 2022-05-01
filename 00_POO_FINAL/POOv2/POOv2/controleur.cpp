/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "login.h"
#include "DomainePP.h"

#include <String>
#include "testeur.h"





using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]







int __clrcall WinMain(array<String^>^ args)
{
    String^ action;
    String^ domaine;
    int nvautoriter=0;
    int conect=0;
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    while (1)
    {
        POOv2::login log;
        log.seti(&nvautoriter);
        nvautoriter = 0;
        Application::Run(% log);
        conect = 0;
        while(1)
            { 
            if (nvautoriter >= 1 && conect==0)
            {
                POOv2::DomainePP dom;
                dom.setselect( &domaine);
                dom.setaction(&action);
                dom.setstop(&conect);
                Application::Run(% dom);
            }
            if (nvautoriter == 1 && conect == 0)
            {
            
               testeur:: commercial(domaine, action);
            }
            else  if (nvautoriter == 2 && conect == 0)
            {

                testeur::RH(domaine, action);
            }
            else  if (nvautoriter == 3 && conect == 0)
            {
                testeur::RH(domaine, action);
                testeur::commercial(domaine, action);
            }
            else 
            {
                break;
            }
        }
        if (nvautoriter == 0)
        {
            break;
        }
    }
}

