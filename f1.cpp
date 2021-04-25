#include "f1.h"
#include "rlsw.h"
#include "comw.h"
#include "objectw.h"
#include "ui_f1.h"

f1::f1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::f1)
{
    ui->setupUi(this);
    connect(ui->pbInsertRLS,SIGNAL(clicked()),this,SLOT(pb_pbInsertRLS_click()));
    connect(ui->pbInsertOb,SIGNAL(clicked()),this,SLOT(pb_pbInsertObj_click()));
    connect(ui->pbInsertKom,SIGNAL(clicked()),this,SLOT(pb_pbInsertKom_click()));
}

f1::~f1()
{
    delete ui;
}

int f1::pb_pbInsertRLS_click()
{

    RLSw *w= new RLSw;
    w->show();

    return 0;
}

int f1::pb_pbInsertKom_click()
{
    ComW *w= new ComW;
    w->show();

    return 0;
}

int f1::pb_pbInsertObj_click()
{
    ObjectW *w= new ObjectW;
    w->show();

    return 0;
}

