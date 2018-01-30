/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdauga_Concurent;
    QAction *actionAdauga_Categorie;
    QAction *actionRefresh;
    QAction *actionAdauga_Club;
    QAction *actionStergeConcurent;
    QAction *actionSterge_Categorie;
    QAction *actionSterge_Club_Sportiv;
    QWidget *centralWidget;
    QLabel *Image;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuDatabase;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(589, 344);
        actionAdauga_Concurent = new QAction(MainWindow);
        actionAdauga_Concurent->setObjectName(QStringLiteral("actionAdauga_Concurent"));
        actionAdauga_Categorie = new QAction(MainWindow);
        actionAdauga_Categorie->setObjectName(QStringLiteral("actionAdauga_Categorie"));
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        actionAdauga_Club = new QAction(MainWindow);
        actionAdauga_Club->setObjectName(QStringLiteral("actionAdauga_Club"));
        actionStergeConcurent = new QAction(MainWindow);
        actionStergeConcurent->setObjectName(QStringLiteral("actionStergeConcurent"));
        actionSterge_Categorie = new QAction(MainWindow);
        actionSterge_Categorie->setObjectName(QStringLiteral("actionSterge_Categorie"));
        actionSterge_Club_Sportiv = new QAction(MainWindow);
        actionSterge_Club_Sportiv->setObjectName(QStringLiteral("actionSterge_Club_Sportiv"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Image = new QLabel(centralWidget);
        Image->setObjectName(QStringLiteral("Image"));
        Image->setGeometry(QRect(450, 0, 141, 201));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 40, 421, 231));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 589, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuDatabase = new QMenu(menuBar);
        menuDatabase->setObjectName(QStringLiteral("menuDatabase"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuDatabase->menuAction());
        menuFile->addAction(actionAdauga_Concurent);
        menuFile->addAction(actionAdauga_Categorie);
        menuFile->addAction(actionAdauga_Club);
        menuFile->addAction(actionStergeConcurent);
        menuFile->addAction(actionSterge_Categorie);
        menuFile->addAction(actionSterge_Club_Sportiv);
        menuDatabase->addAction(actionRefresh);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdauga_Concurent->setText(QApplication::translate("MainWindow", "Adauga Concurent", nullptr));
        actionAdauga_Categorie->setText(QApplication::translate("MainWindow", "Adauga Categorie", nullptr));
        actionRefresh->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        actionAdauga_Club->setText(QApplication::translate("MainWindow", "Adauga Club Sportiv", nullptr));
        actionStergeConcurent->setText(QApplication::translate("MainWindow", "Sterge Concurent", nullptr));
        actionSterge_Categorie->setText(QApplication::translate("MainWindow", "Sterge Categorie", nullptr));
        actionSterge_Club_Sportiv->setText(QApplication::translate("MainWindow", "Sterge Club Sportiv", nullptr));
        Image->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuDatabase->setTitle(QApplication::translate("MainWindow", "Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
