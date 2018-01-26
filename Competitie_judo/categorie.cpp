#include "categorie.h"

categorie::categorie(int id,QString nume)
{
    this->id=id;
    this->nume=nume;
}

QString categorie::getNume()
{
    return nume;
}

int categorie::getId()
{
    return id;
}


void categorie::AddConcurent(concurent &Concurent)
{
    listaConcurenti.push_back(Concurent);
}
