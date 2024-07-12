#ifndef MASSAGESENT_H
#define MASSAGESENT_H

#include <QMainWindow>

namespace Ui {
class massagesent;
}

class massagesent : public QMainWindow
{
    Q_OBJECT

public:
    explicit massagesent(QWidget *parent = nullptr);
    ~massagesent();

private:
    Ui::massagesent *ui;
};

#endif // MASSAGESENT_H
