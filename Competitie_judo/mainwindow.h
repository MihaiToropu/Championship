#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"adaugacategoriedialog.h"
#include"adaugaconcurentdialog.h"
#include"categorie.h"
#include"concurent.h"
#include"stergecategoriedialog.h"
#include"stergeclubdialog.h"
#include"stergeconcurentdialog.h"
#include"adaugaclubdialog.h"
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QTableView>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void AdaugaCategorie();
    void AdaugaConcurent();
    void StergeConcurent();
    void StergeCategorie();
    void AdaugaClub();
    void StergeClub();
    void onViewTriggered(QAction *action);
    void onRefresh();
    void setupModel();

private:
    Ui::MainWindow *ui;
    //std::unique_ptr<adaugaCategorieDialog> mAdaugaCategorieDialog;

    //std::unique_ptr<adaugaConcurentDialog> mAdaugaConcurentDialog;
    Ui::adaugaConcurentDialog *m_AdaugaConcurentDialog;
    adaugaCategorieDialog *m_AdaugaCategorieDialog;
    adaugaClubDialog *m_AdaugaClubDialog;
    stergeCategorieDialog *m_StergeCategorieDialog;
    stergeClubDialog *m_StergeClubDialog;
    stergeConcurentDialog *m_StergeConcurentDialog;

    QSqlTableModel *m_model;
    QSqlDatabase mDatabase;
    QSqlQueryModel *m_concurent;
    //concurent mConcurent;
    //categorie mCategorie;
};

#endif // MAINWINDOW_H
