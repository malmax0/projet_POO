#include "testeur.h"

void testeur::commercial(String^ DomaineSelected, String^ action)
{
    {
        if (DomaineSelected == "Order")
        {

            if (action == "show all")
            {
                POOv2::CommandShow cosh;
                Application::Run(% cosh);
            }
            else if (action == "add, delete, change")
            {
                POOv2::CommandeEdit coed;
                Application::Run(% coed);
            }
            else
            {
                return;
            }
        }
        else  if (DomaineSelected == "Stock")
        {
            if (action == "show all")
            {
                POOv2::StockShow stsh;
                Application::Run(% stsh);
            }
            else if (action == "add, delete, change")
            {
                POOv2::StockEdit sted;
                Application::Run(% sted);
            }
            else
            {
                return;
            }
        }
        else if (DomaineSelected == "Client")
        {
            if (action == "show all")
            {
                POOv2::ClientShow clsh;
                Application::Run(% clsh);
            }
            else if (action == "add, delete, change")
            {
                POOv2::ClientEdit cled;
                Application::Run(% cled);
            }
            else
            {
                return;
            }
        }
        else if (DomaineSelected == "Statistic")
        {
            if (action == "Calculate the average cart (after discount)")
            {
                int i = 1;
                POOv2::StatShow stsh;
                stsh.setetat(&i);
                Application::Run(% stsh);

            }
            else if (action == "Revenue for a specific period")
            {
                POOv2::StatCA stca;
                Application::Run(% stca);
            }
            else if (action == "Items under the limit replenishment")
            {
                int i = 2;
                POOv2::StatShow stsh;
                stsh.setetat(&i);
                Application::Run(% stsh);
            }
            else if (action == "Total sales for a selected client")
            {
                POOv2::StatSales stsa;
                Application::Run(% stsa);
            }
            else if (action == "The 10 best - selling items")
            {
                int i = 3;
                POOv2::StatShow stsh;
                stsh.setetat(&i);
                Application::Run(% stsh);
            }
            else if (action == "The 10 least sold items")
            {
                int i = 4;
                POOv2::StatShow stsh;
                stsh.setetat(&i);
                Application::Run(% stsh);
            }
            else if (action == "Calculate the commercial value of the stock")
            {
                int i = 5;
                POOv2::StatShow stsh;
                stsh.setetat(&i);
                Application::Run(% stsh);
            }
            else if (action == "Calculate the purchase value of the stock")
            {
                int i = 6;
                POOv2::StatShow stsh;
                stsh.setetat(&i);
                Application::Run(% stsh);
            }
            else if (action == "Simulate changes in commercial values")
            {
                POOv2::StatValue stva;
                Application::Run(% stva);
            }
        }
    }
}

void testeur::RH(String^ DomaineSelected, String^ action)
{


    if (DomaineSelected == "Staff")
    {
        if (action == "show all")
        {
            POOv2::PersonnelShow pesh;
            Application::Run(% pesh);
        }
        else if (action == "add, delete, change")
        {
            POOv2::PersonnelEdit peed;
            Application::Run(% peed);
        }
        else
        {
            return;
        }
    }
}