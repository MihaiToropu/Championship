#ifndef DUEL_H
#define DUEL_H

#include <categorie.h>
#include <concurent.h>
#include<QList>
#include <categorierepository.h>
#include <concurentRepository.h>

class categorie;
class duel
{
public:
    duel(categorieRepository *m_categorie,concurentRepository *m_concurent);
    void UpdateList();
    void DeterminaCastigator();
    void Duel(QString id_categorie);
private:
    //categorie *Categorie;//categoria pentru care se va organiza duelul
    categorieRepository *m_categorie;
    concurentRepository *m_concurent;
};

#endif // DUEL_H
