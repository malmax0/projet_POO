#pragma once
#include <QtWidgets/QDialog>
#include <QtWidgets/QWidget>
#include "qdebug.h"
#include "qfileinfo.h"
#include "qmainwindow.h"
#include "ui_login.h"
#include "interface.h"

class login : public QWidget
{
    Q_OBJECT

public:
    int* i;
  login(QWidget* parent = Q_NULLPTR);
 

private slots:
    void on_BtCo_clicked();

private:
    Ui::loginclass ui;
};



