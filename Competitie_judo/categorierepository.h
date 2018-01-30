#ifndef CATEGORIEREPOSITORY_H
#define CATEGORIEREPOSITORY_H


#include"categorie.h"
#include<QList>
#include "QComboBox"
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

private:
    QSqlDatabase& mDatabase;
};

#endif // CATEGORIEREPOSITORY_H
