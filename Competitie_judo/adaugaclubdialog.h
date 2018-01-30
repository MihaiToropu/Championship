#ifndef ADAUGACLUBDIALOG_H
#define ADAUGACLUBDIALOG_H

#include <QDialog>
#include "club.h"
#include <memory>
#include <QSqlDatabase>


namespace Ui {
class adaugaClubDialog;
}

class adaugaClubDialog : public QDialog
{
    Q_OBJECT

public:
    explicit adaugaClubDialog(QWidget *parent = 0);
     std::unique_ptr<club> introduceDateClub();
    ~adaugaClubDialog();

protected:
    void accept() override;
    void showEvent(QShowEvent *);
private:
    Ui::adaugaClubDialog *ui;
    QSqlDatabase mDatabase;
};

#endif // ADAUGACLUBDIALOG_H
