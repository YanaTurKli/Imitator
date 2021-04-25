#ifndef RLSW_H
#define RLSW_H

#include <QMainWindow>

namespace Ui {
class RLSw;
}

class RLSw : public QMainWindow
{
    Q_OBJECT

public:
    explicit RLSw(QWidget *parent = nullptr);
    ~RLSw();

private:
    Ui::RLSw *ui;
};

#endif // RLSW_H
