#include "docw.h"
#include "ui_docw.h"

DocW::DocW(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DocW)
{
    ui->setupUi(this);
}

DocW::~DocW()
{
    delete ui;
}
