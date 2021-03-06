#ifndef CONCURENT_H
#define CONCURENT_H

#include "categorie.h"
#include <QString>

#include "club.h"
class concurent
{
public:
    concurent(QString nume,int varsta,int greutate,int nrPuncte,int id, QString numeCategorie,QString numeClub);

    int getVarsta();
    int getGreutate();
    QString getExperienta();
    QString getNume();
    int getID();
    void setnrPuncte(int puncte);
    int getnrPuncte();
    QString getNumeCategorie();
    QString getNumeClub();

private:
    int id;//indentificatorul unic al fiecarui concurent
    QString nume;
    int varsta; //varsta concurentului
    int greutate; //greutatea concurentului
    int nrPuncte; // numarul de puncte acumulat de concurent pe perioada competitiei
    QString numeCategorie;
    QString numeClub;

};

#endif // CONCURENT_H
