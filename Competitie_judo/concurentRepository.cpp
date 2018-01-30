#include "concurentRepository.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include<QSqlError>
using namespace std;
const QString Tabel_Concurent_BazaDate = "competitor";

concurentRepository::concurentRepository(QSqlDatabase& database):mDatabase(database)
{
}

void concurentRepository::init() const
{
    if(!mDatabase.tables().contains(Tabel_Concurent_BazaDate))
       {
           QSqlQuery query(mDatabase);
           printf("intra in tabe");
           query.prepare("CREATE TABLE competitor ( competitor_id int PRIMARY KEY, age smallint NOT NULL"
                         ",weight real NOT NULL,points smallint NOT NULL,name character(40) NOT NULL"
                         ",fight_club_fgk integer,fight_category_fgk integer ;");
           if(query.exec())
           {
               printf("creat");
               qDebug() << "Creat";
           }
           else
           {
               printf("necreat");
               qDebug() << "Necreat";
           }
   }

}
void concurentRepository::AdaugaConcurent(concurent& Concurent)
{

    QSqlQuery query(mDatabase);
    QSqlQuery query1(mDatabase);
    QSqlQuery query2(mDatabase);
    auto categ = Concurent.getNumeCategorie().trimmed();

    auto queryStr = "SELECT * FROM fight_categories WHERE category_name = '" + categ + "'";
       bool success = query1.prepare(queryStr);
        success;
       query1.exec();
       QString err = query1.lastError().text();
       query1.next();
       int id = query1.value("category_id").toInt();

       auto club = Concurent.getNumeClub().trimmed();

       auto queryStr1 = "SELECT * FROM fight_club WHERE club_name = '" + club + "'";
          bool success1 = query2.prepare(queryStr1);
           success1;
          query2.exec();
          QString err1 = query2.lastError().text();
          query2.next();
          int id1 = query2.value("club_id").toInt();

       query.prepare("INSERT INTO competitor(competitor_id,age,weight,points,name,fight_club_fgk,fight_category_fgk) "
                  "VALUES(:competitor_id,:age,:weight,:points,:name,:fight_club_fgk,:fight_category_fgk)");

        query.bindValue(":competitor_id",Concurent.getID());
        query.bindValue(":name",Concurent.getNume());
        query.bindValue(":age", Concurent.getVarsta());
        query.bindValue(":weight",Concurent.getGreutate());
        query.bindValue(":points",Concurent.getnrPuncte());

        query.bindValue(":fight_club_fgk",id1);
        query.bindValue(":fight_category_fgk",id);
        //printf("a facut prepare");
        qDebug() <<query.lastError();

        //query.bindValue(":Organizatie", Concurent.getOrganizatie());



        query.exec();
        printf("a facut exec");
}
void concurentRepository::UpdatePunctajConcurent(int id_Concurent,int punctaj)
{
    QSqlQuery query(mDatabase);
        query.prepare("UPDATE "
                      "competitor"
                      "SET"
                      "      points = :points"
                      "WHERE"
                      "      concurent_id = :concurent_id");
        query.bindValue(":points", punctaj);
        query.bindValue(":concurent_id", id_Concurent);
        query.exec();
}


void concurentRepository::StergeConcurent(QString id)
{
    printf("%d",id);
    QSqlQuery query(mDatabase);

    query.prepare("DELETE FROM competitor WHERE competitor_id ='"+id+"' ");
    query.bindValue(":competitor_id",id);

    qDebug() << query.exec();
}
std::vector<concurent> concurentRepository::listaConcurent() const
{

    QSqlQuery query(mDatabase);
    query.prepare("SELECT * FROM competitor");
    query.exec();

    std::vector<concurent>listaConcurent;
    while(query.next()) {

        QString nume = query.value("name").toString();
        int varsta = query.value("age").toInt();
        int greutate = query.value("weight").toInt();
        int nrPuncte = query.value("points").toInt();
        int competitor_id = query.value("competitor_id").toInt();
        QString category_id=query.value("fight_category_fgk").toString();
        QString club_id=query.value("fight_club_fgk").toString();
        //QString Organizatie=query.value("nume").toString();

        concurent Concurent(nume,varsta,greutate,nrPuncte,competitor_id,category_id,club_id);


        listaConcurent.push_back(Concurent);
    }

return listaConcurent;
}



