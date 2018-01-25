#ifndef DUEL_H
#define DUEL_H

#include "categorie.h"
class duel
{
public:
    duel(categorie Categorie);
    void UpdateList();
    void UpdatePunctaj();
    void DeterminaCastigator();
private:
    categorie Categorie;//categoria pentru care se va organiza duelul
};

#endif // DUEL_H
