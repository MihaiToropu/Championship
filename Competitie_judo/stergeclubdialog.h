#ifndef STERGECLUBDIALOG_H
#define STERGECLUBDIALOG_H

#include <QDialog>

namespace Ui {
class stergeClubDialog;
}

class stergeClubDialog : public QDialog
{
    Q_OBJECT

public:
    explicit stergeClubDialog(QWidget *parent = 0);
     QString introduceIdClub();
    ~stergeClubDialog();
protected:
    void showEvent(QShowEvent *);
    void accept() override;
private:
    Ui::stergeClubDialog *ui;
};

#endif // STERGECLUBDIALOG_H
