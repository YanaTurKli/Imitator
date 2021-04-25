#ifndef IUS_H
#define IUS_H

#include <QMainWindow>

namespace Ui {
class ius;
}

class ius : public QMainWindow
{
    Q_OBJECT

public:
    explicit ius(QWidget *parent = nullptr);
    ~ius();

private:
    Ui::ius *ui;

public slots:
    int pb_pbInsertDoc_click();
};

#endif // IUS_H
