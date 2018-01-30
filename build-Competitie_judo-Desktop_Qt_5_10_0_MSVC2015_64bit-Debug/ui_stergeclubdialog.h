/********************************************************************************
** Form generated from reading UI file 'stergeclubdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STERGECLUBDIALOG_H
#define UI_STERGECLUBDIALOG_H

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

class Ui_stergeClubDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineID;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *stergeClubDialog)
    {
        if (stergeClubDialog->objectName().isEmpty())
            stergeClubDialog->setObjectName(QStringLiteral("stergeClubDialog"));
        stergeClubDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(stergeClubDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineID = new QLineEdit(stergeClubDialog);
        lineID->setObjectName(QStringLiteral("lineID"));
        lineID->setGeometry(QRect(160, 120, 113, 25));
        label = new QLabel(stergeClubDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 81, 17));
        label_2 = new QLabel(stergeClubDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 120, 61, 17));

        retranslateUi(stergeClubDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), stergeClubDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), stergeClubDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(stergeClubDialog);
    } // setupUi

    void retranslateUi(QDialog *stergeClubDialog)
    {
        stergeClubDialog->setWindowTitle(QApplication::translate("stergeClubDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("stergeClubDialog", "Sterge Club", nullptr));
        label_2->setText(QApplication::translate("stergeClubDialog", "ID club :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stergeClubDialog: public Ui_stergeClubDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STERGECLUBDIALOG_H
