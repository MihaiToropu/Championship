#include "stergeconcurentdialog.h"
#include "ui_stergeconcurentdialog.h"
#include <QMessageBox>
stergeConcurentDialog::stergeConcurentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stergeConcurentDialog)
{
    ui->setupUi(this);
}

stergeConcurentDialog::~stergeConcurentDialog()
{
    delete ui;
}

QString stergeConcurentDialog::introduceIdConcurent()
{
     return  (ui->lineID->text());
}
void stergeConcurentDialog::accept()
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

void stergeConcurentDialog::showEvent(QShowEvent *)
{
    ui->lineID->setText("");
}
