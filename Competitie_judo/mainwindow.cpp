#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QSqlField>
#include <QSqlRecord>
#include<databasemanager.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionAdauga_Concurent, &QAction::triggered, this, &MainWindow::AdaugaConcurent);
    m_AdaugaConcurentDialog = new adaugaConcurentDialog(this);
    connect(ui->actionAdauga_Categorie, &QAction::triggered, this, &MainWindow::AdaugaCategorie);
    m_AdaugaCategorieDialog = new adaugaCategorieDialog(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::AdaugaConcurent()
{
int r = m_AdaugaConcurentDialog->exec();
    if(r == QDialog::Accepted)
     {
        std::unique_ptr<concurent> concurentNou = m_AdaugaConcurentDialog->introduceDateConcurent();
        DatabaseManager::instance().mConcurentRepository.AdaugaConcurent(*concurentNou);
     }
}
void MainWindow::StergeCategorie()
{

}
void MainWindow::AdaugaCategorie()
{
   int r=m_AdaugaCategorieDialog->exec();
}
void MainWindow::StergeConcurent()
{

}
void MainWindow::onRefresh()
{

}
void MainWindow::onViewTriggered(QAction *action)
{

}
