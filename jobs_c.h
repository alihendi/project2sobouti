#ifndef JOBS_C_H
#define JOBS_C_H

#include <QDialog>

namespace Ui {
class jobs_c;
}

class jobs_c : public QDialog
{
    Q_OBJECT

public:
    explicit jobs_c(QWidget *parent = nullptr);
    ~jobs_c();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_6_clicked();

private:
    Ui::jobs_c *ui;
};

#endif // JOBS_C_H
