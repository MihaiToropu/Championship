/********************************************************************************
** Form generated from reading UI file 'stergecategoriedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STERGECATEGORIEDIALOG_H
#define UI_STERGECATEGORIEDIALOG_H

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

class Ui_stergeCategorieDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineID;

    void setupUi(QDialog *stergeCategorieDialog)
    {
        if (stergeCategorieDialog->objectName().isEmpty())
            stergeCategorieDialog->setObjectName(QStringLiteral("stergeCategorieDialog"));
        stergeCategorieDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(stergeCategorieDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(stergeCategorieDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 121, 20));
        label_2 = new QLabel(stergeCategorieDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 110, 281, 21));
        lineID = new QLineEdit(stergeCategorieDialog);
        lineID->setObjectName(QStringLiteral("lineID"));
        lineID->setGeometry(QRect(280, 110, 113, 25));

        retranslateUi(stergeCategorieDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), stergeCategorieDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), stergeCategorieDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(stergeCategorieDialog);
    } // setupUi

    void retranslateUi(QDialog *stergeCategorieDialog)
    {
        stergeCategorieDialog->setWindowTitle(QApplication::translate("stergeCategorieDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("stergeCategorieDialog", "Sterge Categorie", nullptr));
        label_2->setText(QApplication::translate("stergeCategorieDialog", "Introduce id-ul categoriei ce va fi stearsa :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stergeCategorieDialog: public Ui_stergeCategorieDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STERGECATEGORIEDIALOG_H
