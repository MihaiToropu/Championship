#include "stergeclubdialog.h"
#include "ui_stergeclubdialog.h"
#include <QMessageBox>
stergeClubDialog::stergeClubDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stergeClubDialog)
{
    ui->setupUi(this);
}

stergeClubDialog::~stergeClubDialog()
{
    delete ui;
}
QString stergeClubDialog::introduceIdClub()
{
    return (ui->lineID->text());
}

void stergeClubDialog::accept()
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
void stergeClubDialog::showEvent(QShowEvent *)
{
    ui->lineID->setText("");
}
