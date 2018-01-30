#include "clubreposititory.h"
#include<QDebug>
#include<QSqlDatabase>
#include<QVariant>
#include<QSqlQuery>
const QString Tabel_Club_BazaDate = "fight_club";
clubRepository::clubRepository(QSqlDatabase &database):mDatabase(database)
{

}

void clubRepository::init() const
{
   if(!mDatabase.tables().contains(Tabel_Club_BazaDate))
       {
       printf("creaza baza");
           QSqlQuery query(mDatabase);
           query.prepare("CREATE TABLE fight_club(club_id integer PRIMARY KEY,club_name character(30),CONSTRAINT fight_club_pkey PRIMARY KEY (club_id));");
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

void clubRepository::AdaugaClub(club &Club)
{
       QSqlQuery query(mDatabase);
       printf("intra in club");
           query.prepare("INSERT INTO fight_club(club_id,club_name) "
                         "VALUES (:club_id,:club_name)");
               query.bindValue(":club_id",Club.getID());
               query.bindValue(":club_name",Club.getNume());
               printf("iese din categorie");
       query.exec();
}

void clubRepository::StergeClub(QString id)
{
    QSqlQuery query(mDatabase);
    query.prepare("DELETE FROM fight_club WHERE club_id = '"+id+"'");
    query.bindValue(":club_id", id);
    query.exec();
}

QList<club> clubRepository::listaCluburi() const
{
    QSqlQuery query(mDatabase);
       query.prepare("SELECT * FROM fight_club");
       query.exec();

       QList<club> listaCluburi;
       while(query.next()) {
           int id = query.value("club_id").toInt();
           QString nume = query.value("club_name").toString();

           club Club(id,nume);

           listaCluburi.push_back(Club);
       }

   return listaCluburi;

}

void clubRepository::initComboBox(QComboBox &cb)
{
    cb.clear();
    for (auto & i :listaCluburi()) {
       cb.addItem(i.getNume());
}
}
