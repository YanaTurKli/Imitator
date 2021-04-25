#include "rlsw.h"
#include "ui_rlsw.h"

RLSw::RLSw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RLSw)
{
    ui->setupUi(this);
}

RLSw::~RLSw()
{
    delete ui;
}
