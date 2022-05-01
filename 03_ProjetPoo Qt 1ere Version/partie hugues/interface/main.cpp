#include <QtWidgets/QApplication>

#include "interface.h"
#include "login.h"
#include "choixcscp.h"

#include "commandeajout.h"
#include "commandeajoutarticle.h"
#include "commandemodif.h"
#include "commandesuppr.h"
#include "commandeaffi.h"

#include "stockajout.h"
#include "stockmodif.h"
#include "stocksuppr.h"
#include "stockaffi.h"

#include "clientajout.h"
#include "clientmodif.h"
#include "clientajoutadress.h"
#include "clientmodifadresssuppr.h"
#include "clientsuppr.h"
#include "clientaffi.h"


#include "personnelajout.h"
#include "personnelaffi.h"
#include "personnelchangementsuperieur.h"
#include "personnelmodif.h"
#include "personnelsuppr.h"

#include "statchoix.h"
#include "stataffi.h"
#include "statcalcmois.h"
#include "statcalctotal.h"
#include "statsimu.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
  
     login log;
    log.show();

    interface inter;
    inter.show();

    choixcscp choi;
    choi.show();
    
    commandeajout ca;
    ca.show();

    commandeajoutarticle cad;
    cad.show();

    commandemodif cm;
    cm.show();

    commandesuppr cs;
    cs.show();

    commandeaffi cf;
    cf.show();
     
    stockajout sa;
    sa.show();

    stockmodif sm;
    sm.show();

    stocksuppr ss;
    ss.show();

    stockaffi sf;
    sf.show();
 
    clientajout cla;
    cla.show();

    clientajoutadress clad;
    clad.show();
      
    clientmodif clm;
    clm.show();

    clientmodifadresssuppr cmas;
    cmas.show();

    clientsuppr cls;
    cls.show();

    clientaffi clf;
    clf.show();
   
    personnelajout pa;
    pa.show();

    personnelmodif pm;
    pm.show();

    personnelsuppr ps;
    ps.show();

    personnelaffi pf;
    pf.show();

    personnelchangementsuperieur pcs;
    pcs.show();

    statchoix stc;
    stc.show();

    stataffi stf;
    stf.show();
   
    statcalcmois stcm;
    stcm.show();

    statcalctotal stct;
    stct.show();

    statsimu sts;
    sts.show();
    
    return a.exec();
}



