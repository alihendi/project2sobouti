#ifndef JOBS_H
#define JOBS_H

#include <QDialog>

namespace Ui {
class jobs;
}

class jobs : public QDialog
{
    Q_OBJECT

public:
    explicit jobs(QWidget *parent = nullptr);
    ~jobs();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_5_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::jobs *ui;
};

#endif // JOBS_H
