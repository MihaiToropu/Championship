#include "adaugaclubdialog.h"
#include "ui_adaugaclubdialog.h"
#include<QMessageBox>

adaugaClubDialog::adaugaClubDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaugaClubDialog)
{
    ui->setupUi(this);
}

adaugaClubDialog::~adaugaClubDialog()
{
    delete ui;
}

std::unique_ptr<club> adaugaClubDialog::introduceDateClub()
{
    return std::make_unique<club>(ui->lineID->text().toInt(),ui->lineName->text());
}


void adaugaClubDialog::accept()
{
    bool ok=true;
    ui->lineID->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Eroare de adaugare"), tr("id trebuie sa fie numar"));
    }
    else{
     QDialog::accept();
    }
}
void adaugaClubDialog::showEvent(QShowEvent *)
{
    ui->lineName->setText("");
}
