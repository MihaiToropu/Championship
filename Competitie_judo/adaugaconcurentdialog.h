#ifndef ADAUGACONCURENTDIALOG_H
#define ADAUGACONCURENTDIALOG_H

#include <QDialog>
#include "concurent.h"
#include<memory>
namespace Ui {
class adaugaConcurentDialog;
}

class adaugaConcurentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit adaugaConcurentDialog(QWidget *parent = 0);
    std::unique_ptr<concurent> introduceDateConcurent();
    ~adaugaConcurentDialog();


protected:
    void accept() override;
    void showEvent(QShowEvent *);
private:
    Ui::adaugaConcurentDialog *ui;
};

#endif // ADAUGACONCURENTDIALOG_H
