#pragma once
#include "ClientEdit.h"
#include "ClientShow.h"
#include "CommandeEdit.h"
#include "CommandShow.h"
#include "PersonnelEdit.h"
#include "PersonnelShow.h"
#include "StatCA.h"
#include "StatSales.h"
#include "StatShow.h"
#include "StatValue.h"
#include "StockEdit.h"
#include "StockShow.h"
#include "SQL.h"
using namespace System;
using namespace System::Windows::Forms;


class testeur {




public:
    static void commercial(String^ DomaineSelected, String^ action);
    static void RH(String^ DomaineSelected, String^ action);
    
    };