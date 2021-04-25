#ifndef F1_H
#define F1_H

#include <QMainWindow>

namespace Ui {
class f1;
}

class f1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit f1(QWidget *parent = nullptr);
    ~f1();


private:
    Ui::f1 *ui;

public slots:
    int pb_pbInsertRLS_click();
     int pb_pbInsertKom_click();
      int pb_pbInsertObj_click();
};

#endif // F1_H
