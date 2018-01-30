#include "duel.h"
#include<time.h>
#include<stdlib.h>
duel::duel(categorieRepository  *m_categorie ,concurentRepository *m_concurent)
{
    this->m_categorie=m_categorie;
    this->m_concurent=m_concurent;
}
void duel::DeterminaCastigator()
{

}
void duel::UpdateList()
{

}

void duel::Duel(QString id_categorie)
{
    QList <int> listaConcurenti=m_categorie->listaConcurentiCategorii(id_categorie);
    for (auto & i :listaConcurenti) {
           m_concurent->UpdatePunctajConcurent(i,10);
    }
}


