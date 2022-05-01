#pragma once
#include "login.h"
#include <QtWidgets/QDialog>
#include <QtWidgets/QWidget>
#include "qdebug.h"
#include "qfileinfo.h"
#include "qmainwindow.h"
#include <QtWidgets/QWidget>
#include "ui_interface.h"

class interface : public QWidget
{
    Q_OBJECT

public:
    interface(QWidget* parent = Q_NULLPTR);
  

private slots:
    void on_BtDeco_clicked();

private:
    Ui::interfaceClass ui;
};
