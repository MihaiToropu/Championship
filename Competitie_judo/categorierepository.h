#ifndef CATEGORIEREPOSITORY_H
#define CATEGORIEREPOSITORY_H


#include"categorie.h"
#include<QList>
#include "QComboBox"
#include"concurent.h"
class QSqlDatabase;


class categorieRepository
{
public:
    categorieRepository(QSqlDatabase& database);
    void init() const;
    void initComboBox(QComboBox &cb);
    void AdaugaCategorie(categorie& Categorie);
    void StergeCategorie(QString id);
    QList<categorie> listaCategorii() const;
    QList<int> listaConcurentiCategorii(QString id_categorie) const;


private:
    QSqlDatabase& mDatabase;
};

#endif // CATEGORIEREPOSITORY_H
