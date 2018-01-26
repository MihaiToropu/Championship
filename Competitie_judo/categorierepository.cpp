#include "categorierepository.h"
#include<QDebug>
#include<QSqlDatabase>
#include<QVariant>
#include<QSqlQuery>
const QString Tabel_Categorie_BazaDate = "Categorii";
categorieRepository::categorieRepository(QSqlDatabase &database):mDatabase(database)
{

}
 void categorieRepository::init() const
{
    if(!mDatabase.tables().contains(Tabel_Categorie_BazaDate))
        {
            QSqlQuery query(mDatabase);
            query.prepare("CREATE TABLE categorie( id int PRIMARY KEY, nume character (30));");
            if(query.exec())
            {
                qDebug() << "Creat categories table";
            }
            else
            {
                qDebug() << "Necreat categories table";
            }
    }
}

void categorieRepository::AdaugaCategorie(categorie &Categorie)
{
    QSqlQuery query(mDatabase);
        query.prepare("INSERT INTO"
                      "     categorie"
                      "(id,nume)"
                      "VALUES (:id, :nume)");
            query.bindValue(":id", Categorie.getId());
            query.bindValue(":nume", Categorie.getNume());

    query.exec();
}
void categorieRepository::StergeCategorie(int id)
{
    QSqlQuery query(mDatabase);
    query.prepare("DELETE FROM categorie WHERE id = (:id)");
    query.bindValue(":id", id);
    query.exec();
}

QList<categorie> categorieRepository::listaCategorii() const
{
    QSqlQuery query(mDatabase);
       query.prepare("SELECT * FROM categorie");
       query.exec();

       QList<categorie> listaCategorii;
       while(query.next()) {
           int id = query.value("id").toInt();
           QString nume = query.value("nume").toString();

           categorie Categorie(id,nume);

           listaCategorii.push_back(Categorie);
       }

   return listaCategorii;

}
