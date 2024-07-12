#ifndef MASSAGE_H
#define MASSAGE_H

#include <QDialog>

namespace Ui {
class massage;
}

class massage : public QDialog
{
    Q_OBJECT

public:
    explicit massage(QWidget *parent = nullptr);
    ~massage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::massage *ui;
};

#endif // MASSAGE_H
