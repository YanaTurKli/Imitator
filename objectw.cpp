#include "objectw.h"
#include "ui_objectw.h"

ObjectW::ObjectW(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ObjectW)
{
    ui->setupUi(this);
}

ObjectW::~ObjectW()
{
    delete ui;
}
