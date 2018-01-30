#include "dueldialog.h"
#include "ui_dueldialog.h"
#include <QMessageBox>
DuelDialog::DuelDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DuelDialog)
{
    ui->setupUi(this);
}

DuelDialog::~DuelDialog()
{
    delete ui;
}
QString DuelDialog::genereazaConcurentiDuel()
{
    return (ui->lineID->text());
}

void DuelDialog::accept()
{
    bool ok=true;

    ui->lineID->text().toInt(&ok);
    if(!ok)
    {
         QMessageBox::warning(this, tr("Eroare de selectie"), tr("Id-ul trebuie sa fie numar"));
    }
    else
        {

        QDialog::accept();
    }
}

void DuelDialog::showEvent(QShowEvent *)
{
    ui->lineID->setText("");
}
