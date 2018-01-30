#include "categorierepository.h"
#include<QDebug>
#include<QSqlDatabase>
#include<QVariant>
#include<QSqlQuery>
#include <iostream>
using namespace std;
const QString Tabel_Categorie_BazaDate = "fight_categories";
categorieRepository::categorieRepository(QSqlDatabase &database):mDatabase(database)
{

}
 void categorieRepository::init() const
{
    if(!mDatabase.tables().contains(Tabel_Categorie_BazaDate))
        {
        printf("creaza baza");
            QSqlQuery query(mDatabase);
            query.prepare("CREATE TABLE fight_categories(category_id int PRIMARY KEY, category_name character (30),winner_fgk integer DEFAULT NULL );");
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
    printf("intra in categorie");
        query.prepare("INSERT INTO fight_categories(category_id,category_name,winner_fgk) "
                      "VALUES (:category_id,:category_name,:winner_fgk)");
            query.bindValue(":category_id",Categorie.getId());
            query.bindValue(":category_name",Categorie.getNume());
            printf("iese din categorie");
    query.exec();
}
void categorieRepository::StergeCategorie(QString id)
{
    QSqlQuery query(mDatabase);
    query.prepare("DELETE FROM fight_categories WHERE category_id = '"+id+"'");
    query.bindValue(":category_id", id);
    query.exec();
}

 QList<categorie> categorieRepository::listaCategorii() const
{
    QSqlQuery query(mDatabase);
       query.prepare("SELECT * FROM fight_categories");
       query.exec();

       QList<categorie> listaCategorii;
       while(query.next()) {
           int id = query.value("category_id").toInt();
           QString nume = query.value("category_name").toString();

           categorie Categorie(id,nume);

           listaCategorii.push_back(Categorie);
       }

   return listaCategorii;

}

 void categorieRepository::initComboBox(QComboBox &cb)
{
     cb.clear();
     for (auto & i :listaCategorii())
         {
           cb.addItem(i.getNume());
         }

}

 QList<int> categorieRepository::listaConcurentiCategorii(QString id_categorie) const
 {
     QSqlQuery query(mDatabase);
        query.prepare("SELECT * FROM competitor WHERE fight_category_fgk='"+id_categorie+"");
        query.bindValue(":fight_category",id_categorie);
        query.exec();

        QList<int> listaConcurentiCategorii;
        while(query.next()) {
            int id = query.value("competitor_id").toInt();
                    printf("%d",id);
            listaConcurentiCategorii.push_back(id);
        }

    return listaConcurentiCategorii;
 }

