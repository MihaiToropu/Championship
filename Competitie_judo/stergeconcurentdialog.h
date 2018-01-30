#ifndef STERGECONCURRENTDIALOG_H
#define STERGECONCURRENTDIALOG_H

#include <QDialog>
#include <concurent.h>
#include<memory>
namespace Ui {
class stergeConcurentDialog;
}

class stergeConcurentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit stergeConcurentDialog(QWidget *parent = 0);
    QString introduceIdConcurent();
    ~stergeConcurentDialog();
protected:
    void showEvent(QShowEvent *);
    void accept() override;
private:
    Ui::stergeConcurentDialog *ui;
};

#endif // STERGECONCURRENTDIALOG_H
