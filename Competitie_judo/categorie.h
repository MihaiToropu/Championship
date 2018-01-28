#ifndef CATEGORIE_H
#define CATEGORIE_H


#include <QString>
#include <QList>
#include "concurent.h"
class categorie
{
public:
    categorie(int id,QString nume);
    void AddConcurent(concurent &Concurent);
    QString getNume();
    int getId();
    int getCastigator();


private:
     QString nume; //numele categoriei
     int id;
     int castigator;

     //concurent& castigator;//castigatorul pe fiecare categorie
     QList<concurent>listaConcurenti;//lista de concurenti din fiecare categorie
};

#endif // CATEGORIE_H
