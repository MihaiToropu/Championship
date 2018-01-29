#ifndef ADAUGACONCURENTDIALOG_H
#define ADAUGACONCURENTDIALOG_H

#include <QDialog>
#include "concurent.h"
#include<memory>
#include "categorierepository.h"
#include "clubreposititory.h"
#include "databasemanager.h"
#include "ui_adaugaconcurentdialog.h"

class QSqlDatabase;
namespace Ui
{

    class adaugaConcurentDialog : public Ui_adaugaConcurentDialog, public QDialog
    {
    public:

        explicit adaugaConcurentDialog(categorieRepository & categRepo,clubRepository & clubRepo, QWidget *parent = 0);
        std::unique_ptr<concurent> introduceDateConcurent();
    private:
        ~adaugaConcurentDialog();

    protected:
        void accept() override;
        void showEvent(QShowEvent *);

    private:
         Ui::adaugaConcurentDialog *ui;
    };
}

#endif // ADAUGACONCURENTDIALOG_H
