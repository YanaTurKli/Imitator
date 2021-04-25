#include "comw.h"
#include "ui_comw.h"

ComW::ComW(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ComW)
{
    ui->setupUi(this);
}

ComW::~ComW()
{
    delete ui;
}
