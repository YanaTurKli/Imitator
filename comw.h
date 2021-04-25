#ifndef COMW_H
#define COMW_H

#include <QMainWindow>

namespace Ui {
class ComW;
}

class ComW : public QMainWindow
{
    Q_OBJECT

public:
    explicit ComW(QWidget *parent = nullptr);
    ~ComW();

private:
    Ui::ComW *ui;
};

#endif // COMW_H
