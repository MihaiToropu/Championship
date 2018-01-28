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
    connect(ui->actionAdauga_Club, &QAction::triggered, this, &MainWindow::AdaugaClub);
    m_AdaugaClubDialog=new adaugaClubDialog(this);

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
   if(r==QDialog::Accepted)
   {
       std::unique_ptr<categorie> categorieNoua = m_AdaugaCategorieDialog->introduceNumeleCategoriei();
       DatabaseManager::instance().mCategorieRepository.AdaugaCategorie(*categorieNoua);
   }
}
void MainWindow::StergeConcurent()
{

}
void MainWindow::AdaugaClub()
{
    int r=m_AdaugaClubDialog->exec();
    if(r==QDialog::Accepted)
    {
        std::unique_ptr<club> clubNou = m_AdaugaClubDialog->introduceDateClub();
        DatabaseManager::instance().mClubRepository.AdaugaClub(*clubNou);
    }
}

void MainWindow::StergeClub()
{

}

void MainWindow::onRefresh()
{

}
void MainWindow::onViewTriggered(QAction *action)
{

}
