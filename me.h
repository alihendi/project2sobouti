#ifndef ME_H
#define ME_H

#include <QDialog>

namespace Ui {
class me;
}

class me : public QDialog
{
    Q_OBJECT

public:
    explicit me(QWidget *parent = nullptr);
    ~me();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::me *ui;
};

#endif // ME_H
