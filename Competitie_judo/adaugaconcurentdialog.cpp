#include "adaugaconcurentdialog.h"
#include "ui_adaugaconcurentdialog.h"
#include<QMessageBox>
adaugaConcurentDialog::adaugaConcurentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaugaConcurentDialog)
{
    ui->setupUi(this);
    ui->comboCategorie->addItem("furnica");
    ui->comboCategorie->addItem("cocos");

}

adaugaConcurentDialog::~adaugaConcurentDialog()
{
    delete ui;
}

std::unique_ptr<concurent> adaugaConcurentDialog::introduceDateConcurent()
{
    return std::make_unique<concurent>(ui->lineNume->text(),
                                                ui->lineVarsta->text().toInt(),
                                                ui->lineGreutate->text().toInt(),
                                                ui->lineExperienta->text(),
                                                ui->lineNr_puncte->text().toInt(),
                                                ui->lineCNP->text().toInt());
}

void adaugaConcurentDialog::accept()
{
   bool ok=true;
   ui->lineVarsta->text().toInt(&ok);
   ui->lineGreutate->text().toInt(&ok);
   ui->lineNr_puncte->text().toInt(&ok);
   ui->lineCNP->text().toInt(&ok);
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
    ui->lineExperienta->setText("");
    ui->lineNr_puncte->setText("");
    ui->lineCNP->setText("");
}