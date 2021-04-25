#include "ius.h"
#include "docw.h"
#include "ui_ius.h"

ius::ius(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ius)
{
    ui->setupUi(this);
    connect(ui->pbInsertDoc,SIGNAL(clicked()),this,SLOT(pb_pbInsertDoc_click()));
}

ius::~ius()
{
    delete ui;
}

int ius::pb_pbInsertDoc_click()
{
    DocW *w= new DocW;
    w->show();

    return 0;
}
