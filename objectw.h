#ifndef OBJECTW_H
#define OBJECTW_H

#include <QMainWindow>

namespace Ui {
class ObjectW;
}

class ObjectW : public QMainWindow
{
    Q_OBJECT

public:
    explicit ObjectW(QWidget *parent = nullptr);
    ~ObjectW();

private:
    Ui::ObjectW *ui;
};

#endif // OBJECTW_H
