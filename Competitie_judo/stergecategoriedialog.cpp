#include "stergecategoriedialog.h"
#include "ui_stergecategoriedialog.h"
#include<QMessageBox>
stergeCategorieDialog::stergeCategorieDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stergeCategorieDialog)
{
    ui->setupUi(this);
}

stergeCategorieDialog::~stergeCategorieDialog()
{
    delete ui;
}
QString stergeCategorieDialog::introduceCategorieClub()
{
    return (ui->lineID->text());
}
void stergeCategorieDialog::accept()
{
    bool ok=true;
    ui->lineID->text().toInt(&ok);
     if(!ok)
     {
         QMessageBox::warning(this, tr("Eroare de sterge"), tr("id trebuie sa fie numar"));
     }
     else{
         QDialog::accept();
     }
}
void stergeCategorieDialog::showEvent(QShowEvent *)
{
    ui->lineID->setText("");
}
