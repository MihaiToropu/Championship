#include "categorie.h"

categorie::categorie(int id,QString nume)
{
    this->id=id;
    this->nume=nume;
}

categorie::getNume()
{
    return nume;
}

categorie::getId()
{
    return id;
}


categorie::AddConcurent(concurent& Concurent)
{
    listaConcurenti.push_back(Concurent);
}
