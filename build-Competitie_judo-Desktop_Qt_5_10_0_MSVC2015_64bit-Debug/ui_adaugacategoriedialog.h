/********************************************************************************
** Form generated from reading UI file 'adaugacategoriedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAUGACATEGORIEDIALOG_H
#define UI_ADAUGACATEGORIEDIALOG_H

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

class Ui_adaugaCategorieDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *lNume;
    QLineEdit *lineNume;
    QLabel *label;
    QLabel *lID;
    QLineEdit *lineID;

    void setupUi(QDialog *adaugaCategorieDialog)
    {
        if (adaugaCategorieDialog->objectName().isEmpty())
            adaugaCategorieDialog->setObjectName(QStringLiteral("adaugaCategorieDialog"));
        adaugaCategorieDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(adaugaCategorieDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lNume = new QLabel(adaugaCategorieDialog);
        lNume->setObjectName(QStringLiteral("lNume"));
        lNume->setGeometry(QRect(30, 70, 67, 17));
        lineNume = new QLineEdit(adaugaCategorieDialog);
        lineNume->setObjectName(QStringLiteral("lineNume"));
        lineNume->setGeometry(QRect(80, 70, 101, 21));
        label = new QLabel(adaugaCategorieDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 67, 17));
        lID = new QLabel(adaugaCategorieDialog);
        lID->setObjectName(QStringLiteral("lID"));
        lID->setGeometry(QRect(30, 100, 67, 17));
        lineID = new QLineEdit(adaugaCategorieDialog);
        lineID->setObjectName(QStringLiteral("lineID"));
        lineID->setGeometry(QRect(80, 100, 113, 21));

        retranslateUi(adaugaCategorieDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), adaugaCategorieDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), adaugaCategorieDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(adaugaCategorieDialog);
    } // setupUi

    void retranslateUi(QDialog *adaugaCategorieDialog)
    {
        adaugaCategorieDialog->setWindowTitle(QApplication::translate("adaugaCategorieDialog", "Dialog", nullptr));
        lNume->setText(QApplication::translate("adaugaCategorieDialog", "Nume:", nullptr));
        lineNume->setText(QString());
        label->setText(QApplication::translate("adaugaCategorieDialog", "Categorie", nullptr));
        lID->setText(QApplication::translate("adaugaCategorieDialog", "Id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adaugaCategorieDialog: public Ui_adaugaCategorieDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAUGACATEGORIEDIALOG_H
