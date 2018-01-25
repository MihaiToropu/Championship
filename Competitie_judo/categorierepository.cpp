#include "categorierepository.h"

categorieRepository::categorieRepository(QSqlDatabase &database)
{
    this->mDatabase=database;
}
categorieRepository::init() const
{
    if(!mDatabase.tables().contains(DATABASE_TABLE_NAME))
        {
            QSqlQuery query(mDatabase);
            query.prepare("CREATE TABLE Categorie ( Id int PRIMARY KEY, MinWeight int, MaxWeight int, MinAge int, MaxAge int);");
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

categorieRepository::AdaugaCategorie(categorie &Categorie)
{
    QSqlQuery query(mDatabase);
        query.prepare("INSERT INTO"
                      "     Categories"
                      "(Id, MinWeight, MaxWeight, MinAge, MaxAge)"
                      "VALUES (:id, :minWeight, :maxWeight, :minAge, :maxAge)");
            query.bindValue(":id", Categorie.getId());
            query.bindValue(":nume", Categorie.getNume());

    query.exec();
}
categorieRepository::StergeCategorie(int id)
{
    QSqlQuery query(mDatabase);
    query.prepare("DELETE FROM Categories WHERE id = (:id)");
    query.bindValue(":id", id);
    query.exec();
}

categorieRepository::listaCategorii() const
{
    QSqlQuery query(mDatabase);
       query.prepare("SELECT * FROM Categories");
       query.exec();

       QList<categorie> listaCategorii;
       while(query.next()) {
           int id = query.value("Id").toInt();
           QString nume = query.value("nume").toString();

           categorie Categorie(id,nume);

           listaCategorii.push_back(Categorie);
       }

   return listaCategorii;

}
