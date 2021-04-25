#ifndef DOCW_H
#define DOCW_H

#include <QMainWindow>

namespace Ui {
class DocW;
}

class DocW : public QMainWindow
{
    Q_OBJECT

public:
    explicit DocW(QWidget *parent = nullptr);
    ~DocW();

private:
    Ui::DocW *ui;
};

#endif // DOCW_H
