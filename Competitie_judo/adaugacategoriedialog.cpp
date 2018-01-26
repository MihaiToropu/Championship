#include "adaugacategoriedialog.h"
#include "ui_adaugacategoriedialog.h"
#include<QMessageBox>
#include<QtCore>
#include<QtGui>
adaugaCategorieDialog::adaugaCategorieDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaugaCategorieDialog)
{
    ui->setupUi(this);

}

adaugaCategorieDialog::~adaugaCategorieDialog()
{
    delete ui;
}

std::unique_ptr<categorie> adaugaCategorieDialog::introduceNumeleCategoriei()
{
    return std::make_unique<categorie>(ui->lineEdit->text().toInt(),ui->lineNume->text());
}
void adaugaCategorieDialog::accept()
{
    bool ok=true;
    ui->lineEdit->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Eroare de adaugare"), tr("id trebuie sa fie numar"));
    }
    else{
     QDialog::accept();
    }
}
void adaugaCategorieDialog::showEvent(QShowEvent *)
{
    ui->lineNume->setText("");
}
