/********************************************************************************
** Form generated from reading UI file 'stergeconcurentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STERGECONCURENTDIALOG_H
#define UI_STERGECONCURENTDIALOG_H

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

class Ui_stergeConcurentDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineID;
    QLabel *label_2;

    void setupUi(QDialog *stergeConcurentDialog)
    {
        if (stergeConcurentDialog->objectName().isEmpty())
            stergeConcurentDialog->setObjectName(QStringLiteral("stergeConcurentDialog"));
        stergeConcurentDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(stergeConcurentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(stergeConcurentDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 97, 221, 31));
        lineID = new QLineEdit(stergeConcurentDialog);
        lineID->setObjectName(QStringLiteral("lineID"));
        lineID->setGeometry(QRect(250, 100, 113, 25));
        label_2 = new QLabel(stergeConcurentDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 20, 67, 17));

        retranslateUi(stergeConcurentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), stergeConcurentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), stergeConcurentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(stergeConcurentDialog);
    } // setupUi

    void retranslateUi(QDialog *stergeConcurentDialog)
    {
        stergeConcurentDialog->setWindowTitle(QApplication::translate("stergeConcurentDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("stergeConcurentDialog", "Id-ul concurentului ce va fi sters :", nullptr));
        label_2->setText(QApplication::translate("stergeConcurentDialog", "Sterge Concurent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stergeConcurentDialog: public Ui_stergeConcurentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STERGECONCURENTDIALOG_H
