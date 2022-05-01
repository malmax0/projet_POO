#pragma once
#include "login.h"
#include <QtWidgets/QDialog>
#include <QtWidgets/QWidget>
#include "QtWidgets/QtWidgets"
#include "QtCore/qdebug.h"
#include "QtCore/qfileinfo.h"
#include "QtWidgets/qmainwindow.h"
#include <QtWidgets/QWidget>
#include "ui_domainesPP.h"

class domainespp : public QWidget
{
    Q_OBJECT

public:
    int* etat;
    domainespp(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtDeco_clicked();
    void on_BtInterfaceVal_clicked();

private:
    Ui::domainesppClass ui;
};
