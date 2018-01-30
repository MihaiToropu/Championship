/********************************************************************************
** Form generated from reading UI file 'adaugaclubdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAUGACLUBDIALOG_H
#define UI_ADAUGACLUBDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_adaugaClubDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *lID;
    QLabel *lNume;
    QLineEdit *lineID;
    QLineEdit *lineName;

    void setupUi(QDialog *adaugaClubDialog)
    {
        if (adaugaClubDialog->objectName().isEmpty())
            adaugaClubDialog->setObjectName(QStringLiteral("adaugaClubDialog"));
        adaugaClubDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(adaugaClubDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(adaugaClubDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 30, 67, 17));
        lID = new QLabel(adaugaClubDialog);
        lID->setObjectName(QStringLiteral("lID"));
        lID->setGeometry(QRect(30, 70, 21, 17));
        lNume = new QLabel(adaugaClubDialog);
        lNume->setObjectName(QStringLiteral("lNume"));
        lNume->setGeometry(QRect(20, 120, 51, 17));
        lineID = new QLineEdit(adaugaClubDialog);
        lineID->setObjectName(QStringLiteral("lineID"));
        lineID->setGeometry(QRect(70, 70, 113, 25));
        lineName = new QLineEdit(adaugaClubDialog);
        lineName->setObjectName(QStringLiteral("lineName"));
        lineName->setGeometry(QRect(70, 120, 113, 25));

        retranslateUi(adaugaClubDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), adaugaClubDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), adaugaClubDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(adaugaClubDialog);
    } // setupUi

    void retranslateUi(QDialog *adaugaClubDialog)
    {
        adaugaClubDialog->setWindowTitle(QApplication::translate("adaugaClubDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("adaugaClubDialog", "Club", nullptr));
        lID->setText(QApplication::translate("adaugaClubDialog", "ID:", nullptr));
        lNume->setText(QApplication::translate("adaugaClubDialog", "Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adaugaClubDialog: public Ui_adaugaClubDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAUGACLUBDIALOG_H
