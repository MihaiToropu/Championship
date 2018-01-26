#ifndef CLASAMENT_H
#define CLASAMENT_H

#include"categorie.h"

class clasament
{
public:
    clasament(categorie* Categorie);
    void afiseazaClasament();
private:
     categorie* Categorie;
};

#endif // CLASAMENT_H
