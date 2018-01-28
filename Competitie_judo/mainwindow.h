#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"adaugacategoriedialog.h"
#include"adaugaconcurentdialog.h"
#include"categorie.h"
#include"concurent.h"
#include"adaugaclubdialog.h"

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

private:
    Ui::MainWindow *ui;
    //std::unique_ptr<adaugaCategorieDialog> mAdaugaCategorieDialog;

    //std::unique_ptr<adaugaConcurentDialog> mAdaugaConcurentDialog;
    adaugaConcurentDialog *m_AdaugaConcurentDialog;
    adaugaCategorieDialog *m_AdaugaCategorieDialog;
    adaugaClubDialog *m_AdaugaClubDialog;
    //concurent mConcurent;
    //categorie mCategorie;
};

#endif // MAINWINDOW_H
