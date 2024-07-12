#ifndef MYNET_C_H
#define MYNET_C_H

#include <QDialog>

namespace Ui {
class Mynet_c;
}

class Mynet_c : public QDialog
{
    Q_OBJECT

public:
    explicit Mynet_c(QWidget *parent = nullptr);
    ~Mynet_c();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::Mynet_c *ui;
};

#endif // MYNET_C_H
