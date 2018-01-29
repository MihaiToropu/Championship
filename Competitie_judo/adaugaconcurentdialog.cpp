#include "adaugaconcurentdialog.h"
#include "ui_adaugaconcurentdialog.h"

#include<QMessageBox>
#include <QtSql>

using namespace Ui;

adaugaConcurentDialog::adaugaConcurentDialog(categorieRepository & categRepo,clubRepository & clubRepo, QWidget *parent) :
    QDialog(parent),
    ui(this)
{
    ui->setupUi(this);

    categRepo.initComboBox(*ui->comboCategorie);
    clubRepo.initComboBox(*ui->comboClub);
}

adaugaConcurentDialog::~adaugaConcurentDialog()
{
    delete ui;
}

std::unique_ptr<concurent> adaugaConcurentDialog::introduceDateConcurent()
{
    return std::make_unique<concurent>(ui->lineNume->text(),
                                                ui->lineVarsta->text().toInt(),
                                                ui->lineGreutate->text().toDouble(),
                                                ui->lineNr_puncte->text().toInt(),
                                                ui->lineID->text().toInt());
}

void adaugaConcurentDialog::accept()
{
   bool ok=true;
   ui->lineVarsta->text().toInt(&ok);
   ui->lineGreutate->text().toDouble(&ok);
   ui->lineNr_puncte->text().toInt(&ok);
   ui->lineID->text().toInt(&ok);
   if(!ok)
   {
        QMessageBox::warning(this, tr("Eroare de adaugare"), tr("Varsta,greutate,nr de puncte si cnp-ul trebuie sa fie numere"));
   }
   else
       {

       QDialog::accept();
   }
}

void adaugaConcurentDialog::showEvent(QShowEvent *)
{
    ui->lineNume->setText("");
    ui->lineVarsta->setText("");
    ui->lineGreutate->setText("");
    ui->lineNr_puncte->setText("");
    ui->lineID->setText("");
}
