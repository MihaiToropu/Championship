#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QSqlField>
#include <QSqlRecord>
#include<databasemanager.h>
#include<QSqlRelationalTableModel>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->actionAdauga_Concurent, &QAction::triggered, this, &MainWindow::AdaugaConcurent);
    m_AdaugaConcurentDialog = new Ui::adaugaConcurentDialog(DatabaseManager::instance().mCategorieRepository,DatabaseManager::instance().mClubRepository,this);
    connect(ui->actionAdauga_Categorie, &QAction::triggered, this, &MainWindow::AdaugaCategorie);
    m_AdaugaCategorieDialog = new adaugaCategorieDialog(this);
    connect(ui->actionAdauga_Club, &QAction::triggered, this, &MainWindow::AdaugaClub);
    m_AdaugaClubDialog=new adaugaClubDialog(this);

    connect(ui->actionStergeConcurent, &QAction::triggered, this, &MainWindow::StergeConcurent);
    m_StergeConcurentDialog=new stergeConcurentDialog(this);
    connect(ui->actionSterge_Categorie, &QAction::triggered, this, &MainWindow::StergeCategorie);
    m_StergeCategorieDialog=new stergeCategorieDialog(this);
    connect(ui->actionSterge_Club_Sportiv, &QAction::triggered, this, &MainWindow::StergeClub);
    m_StergeClubDialog=new stergeClubDialog(this);

    connect(ui->actionSimuleazaDuel, &QAction::triggered, this, &MainWindow::SimuleazaDuel);
    m_duelDialog=new DuelDialog(this);

    connect(ui->actionSimuleaza_Clasament, &QAction::triggered, this, &MainWindow::SimuleazaClasament);
    m_clasamentDialog=new ClasamentDialog(this);


    QPixmap pix("/home/marius/DB/Championship/others/judo.png");
    ui->Image->setPixmap(pix);


    setupModel();
    ui->tableView->setModel(m_concurent);
    setupModel2();
    ui->tableView_2->setModel(m_categorie);
    setupModel3();
    ui->tableView_3->setModel(m_club);
    connect(ui->actionRefresh, &QAction::triggered, this, &MainWindow::onRefresh);



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
int r = m_StergeCategorieDialog->exec();
    if(r == QDialog::Accepted)
       {
            QString categorieNoua = m_StergeCategorieDialog->introduceCategorieClub();
            DatabaseManager::instance().mCategorieRepository.StergeCategorie(categorieNoua);
       }
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
    int r = m_StergeConcurentDialog->exec();
    if(r==QDialog::Accepted)
    {
     QString concurentNou = m_StergeConcurentDialog->introduceIdConcurent();
     DatabaseManager::instance().mConcurentRepository.StergeConcurent(concurentNou);
    }
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
    int r = m_StergeClubDialog->exec();
    if(r==QDialog::Accepted)
    {
     QString clubNou = m_StergeClubDialog->introduceIdClub();
     DatabaseManager::instance().mClubRepository.StergeClub(clubNou);
    }

}
void MainWindow::SimuleazaDuel()
{
    int r=m_duelDialog->exec();
    if(r==QDialog::Accepted)
    {
     QString duelNou = m_duelDialog->genereazaConcurentiDuel();
     DatabaseManager::instance().mCategorieRepository.listaConcurentiCategorii(duelNou);
     Duel->Duel(duelNou);
    }

}

void MainWindow::SimuleazaClasament()
{
     int r=m_clasamentDialog->exec();
}

void MainWindow::setupModel()
{
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        m_model = new QSqlRelationalTableModel(this,mDatabase);

        m_model->setTable("competitor");
        m_model->select();
        m_concurent = new QSqlQueryModel(this);

        QSqlQuery query("SELECT competitor_id,name FROM competitor");
        m_concurent->setQuery(query);
        m_concurent->setHeaderData(0, Qt::Horizontal, tr("Id_concure"));
        m_concurent->setHeaderData(1, Qt::Horizontal, tr("Name"));

}

void MainWindow::setupModel2()
{
    ui->tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
        m_model2 = new QSqlRelationalTableModel(this,mDatabase);

        m_model2->setTable("fight_categories");
        m_model2->select();
        m_categorie = new QSqlQueryModel(this);

        QSqlQuery query("SELECT category_id,category_name FROM fight_categories");
        m_categorie->setQuery(query);
        m_categorie->setHeaderData(0, Qt::Horizontal, tr("Id_categorie"));
        m_categorie->setHeaderData(1, Qt::Horizontal, tr("Name"));


}
void MainWindow::setupModel3()
{
    ui->tableView_3->setSelectionMode(QAbstractItemView::SingleSelection);
        m_model3 = new QSqlRelationalTableModel(this,mDatabase);

        m_model3->setTable("fight_club");
        m_model3->select();
        m_club = new QSqlQueryModel(this);

        QSqlQuery query("SELECT club_id,club_name FROM fight_club");
        m_club->setQuery(query);
        m_club->setHeaderData(0, Qt::Horizontal, tr("Id_club"));
        m_club->setHeaderData(1, Qt::Horizontal, tr("Name"));
}

void MainWindow::onRefresh()
{
   setupModel();
   setupModel2();
   setupModel3();
   ui->tableView->setModel(m_concurent);
   ui->tableView_2->setModel(m_categorie);
   ui->tableView_3->setModel(m_club);
   DatabaseManager::instance().mCategorieRepository.initComboBox(*(m_AdaugaConcurentDialog->comboCategorie));
   DatabaseManager::instance().mClubRepository.initComboBox(*(m_AdaugaConcurentDialog->comboClub));
}
void MainWindow::onViewTriggered(QAction *action)
{

}
