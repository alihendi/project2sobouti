#ifndef MAKEJOB_H
#define MAKEJOB_H

#include <QDialog>

namespace Ui {
class makeJob;
}

class makeJob : public QDialog
{
    Q_OBJECT

public:
    explicit makeJob(QWidget *parent = nullptr);
    ~makeJob();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::makeJob *ui;
};

#endif // MAKEJOB_H
