/********************************************************************************
** Form generated from reading UI file 'adaugaconcurentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAUGACONCURENTDIALOG_H
#define UI_ADAUGACONCURENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_adaugaConcurentDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *lNume;
    QLabel *lVarsta;
    QLabel *lGreutate;
    QLabel *lNr_puncte;
    QLabel *lID;
    QLineEdit *lineNume;
    QLineEdit *lineVarsta;
    QLineEdit *lineGreutate;
    QLineEdit *lineNr_puncte;
    QLineEdit *lineID;
    QLabel *label;
    QLabel *lCategory;
    QComboBox *comboCategorie;
    QLabel *lfight_club;
    QComboBox *comboClub;

    void setupUi(QDialog *adaugaConcurentDialog)
    {
        if (adaugaConcurentDialog->objectName().isEmpty())
            adaugaConcurentDialog->setObjectName(QStringLiteral("adaugaConcurentDialog"));
        adaugaConcurentDialog->resize(427, 316);
        buttonBox = new QDialogButtonBox(adaugaConcurentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lNume = new QLabel(adaugaConcurentDialog);
        lNume->setObjectName(QStringLiteral("lNume"));
        lNume->setGeometry(QRect(30, 50, 67, 17));
        lVarsta = new QLabel(adaugaConcurentDialog);
        lVarsta->setObjectName(QStringLiteral("lVarsta"));
        lVarsta->setGeometry(QRect(30, 80, 67, 17));
        lGreutate = new QLabel(adaugaConcurentDialog);
        lGreutate->setObjectName(QStringLiteral("lGreutate"));
        lGreutate->setGeometry(QRect(30, 110, 67, 17));
        lNr_puncte = new QLabel(adaugaConcurentDialog);
        lNr_puncte->setObjectName(QStringLiteral("lNr_puncte"));
        lNr_puncte->setGeometry(QRect(30, 140, 81, 17));
        lID = new QLabel(adaugaConcurentDialog);
        lID->setObjectName(QStringLiteral("lID"));
        lID->setGeometry(QRect(30, 20, 21, 17));
        lineNume = new QLineEdit(adaugaConcurentDialog);
        lineNume->setObjectName(QStringLiteral("lineNume"));
        lineNume->setGeometry(QRect(80, 50, 113, 21));
        lineVarsta = new QLineEdit(adaugaConcurentDialog);
        lineVarsta->setObjectName(QStringLiteral("lineVarsta"));
        lineVarsta->setGeometry(QRect(80, 80, 113, 21));
        lineGreutate = new QLineEdit(adaugaConcurentDialog);
        lineGreutate->setObjectName(QStringLiteral("lineGreutate"));
        lineGreutate->setGeometry(QRect(100, 110, 113, 21));
        lineNr_puncte = new QLineEdit(adaugaConcurentDialog);
        lineNr_puncte->setObjectName(QStringLiteral("lineNr_puncte"));
        lineNr_puncte->setGeometry(QRect(110, 140, 113, 21));
        lineID = new QLineEdit(adaugaConcurentDialog);
        lineID->setObjectName(QStringLiteral("lineID"));
        lineID->setGeometry(QRect(80, 20, 113, 21));
        label = new QLabel(adaugaConcurentDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 0, 81, 17));
        lCategory = new QLabel(adaugaConcurentDialog);
        lCategory->setObjectName(QStringLiteral("lCategory"));
        lCategory->setGeometry(QRect(30, 170, 67, 17));
        comboCategorie = new QComboBox(adaugaConcurentDialog);
        comboCategorie->setObjectName(QStringLiteral("comboCategorie"));
        comboCategorie->setGeometry(QRect(110, 170, 86, 25));
        lfight_club = new QLabel(adaugaConcurentDialog);
        lfight_club->setObjectName(QStringLiteral("lfight_club"));
        lfight_club->setGeometry(QRect(30, 205, 81, 21));
        comboClub = new QComboBox(adaugaConcurentDialog);
        comboClub->setObjectName(QStringLiteral("comboClub"));
        comboClub->setGeometry(QRect(120, 200, 86, 25));

        retranslateUi(adaugaConcurentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), adaugaConcurentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), adaugaConcurentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(adaugaConcurentDialog);
    } // setupUi

    void retranslateUi(QDialog *adaugaConcurentDialog)
    {
        adaugaConcurentDialog->setWindowTitle(QApplication::translate("adaugaConcurentDialog", "Dialog", nullptr));
        lNume->setText(QApplication::translate("adaugaConcurentDialog", "Name:", nullptr));
        lVarsta->setText(QApplication::translate("adaugaConcurentDialog", "Age:", nullptr));
        lGreutate->setText(QApplication::translate("adaugaConcurentDialog", "Weight:", nullptr));
        lNr_puncte->setText(QApplication::translate("adaugaConcurentDialog", "Points:", nullptr));
        lID->setText(QApplication::translate("adaugaConcurentDialog", "ID:", nullptr));
        label->setText(QApplication::translate("adaugaConcurentDialog", "Concurent", nullptr));
        lCategory->setText(QApplication::translate("adaugaConcurentDialog", "Category:", nullptr));
        lfight_club->setText(QApplication::translate("adaugaConcurentDialog", "Fight_Club", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adaugaConcurentDialog: public Ui_adaugaConcurentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAUGACONCURENTDIALOG_H
