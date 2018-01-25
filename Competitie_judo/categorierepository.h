#ifndef CATEGORIEREPOSITORY_H
#define CATEGORIEREPOSITORY_H


#include"categorie.h"
#include<QList>
class QSqlDatabase;

class categorieRepository
{
public:
    categorieRepository(QSqlDatabase& database);
    void init() const;
    void AdaugaCategorie(categorie& Categorie);
    void StergeCategorie(int id);
    QList<categorie> listaCategorii() const;
private:
    QSqlDatabase& mDatabase;
};

#endif // CATEGORIEREPOSITORY_H
