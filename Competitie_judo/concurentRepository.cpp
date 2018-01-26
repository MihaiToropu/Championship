#include "concurentRepository.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

const QString Tabel_Concurent_BazaDate = "concurent";

concurentRepository::concurentRepository(QSqlDatabase& database):mDatabase(database)
{
}

void concurentRepository::init() const
{
    if(!mDatabase.tables().contains(Tabel_Concurent_BazaDate))
       {
           QSqlQuery query(mDatabase);
           query.prepare("CREATE TABLE concurent ( Id int PRIMARY KEY, nume_concurent character(30),varsta smallint NOT NULL,greutate smallint NOT NULL,experienta character(20) NOT NULL,punctaj smallint NOT NULL DEFAULT 0,CNP smallint NOT NULL);");
           if(query.exec())
           {
               qDebug() << "Creat";
           }
           else
           {
               qDebug() << "Necreat";
           }
   }

}
void concurentRepository::AdaugaConcurent(concurent& Concurent)
{
    QSqlQuery query(mDatabase);
    query.prepare("INSERT INTO"
                  "     concurent"
                  "(nume, varsta, greutate, experienta, punctaj,CNP)"
                  "VALUES (:CNP, :nr_puncte, :team, :age, :weight)");
        query.bindValue(":nume", Concurent.getNume());
        query.bindValue(":varsta", Concurent.getVarsta());
        query.bindValue(":greutate", Concurent.getGreutate());
        query.bindValue(":experienta", Concurent.getExperienta());
        query.bindValue(":punctaj", Concurent.getnrPuncte());
        query.bindValue(":CNP", Concurent.getCNP());


        //query.bindValue(":Organizatie", Concurent.getOrganizatie());



        query.exec();
}
void concurentRepository::UpdateConcurent(concurent& Concurent)
{
    QSqlQuery query(mDatabase);
        query.prepare("UPDATE "
                      "     concurent"
                      "SET"
                      "      nr_puncte = (:nr_puncte)"
                      "WHERE"
                      "      id = (:id)");
        query.bindValue(":nr_puncte", Concurent.getnrPuncte());
        query.bindValue(":CNP", Concurent.getCNP());
        query.exec();
}


void concurentRepository::StergeConcurent(int CNP)
{
    QSqlQuery query(mDatabase);
    query.prepare("DELETE FROM concurent WHERE CNP = (:CNP)");
    query.bindValue(":CNP", CNP);
    qDebug() << query.exec();
}
std::vector<concurent> concurentRepository::listaConcurent() const
{

    QSqlQuery query(mDatabase);
    query.prepare("SELECT * FROM concurent");
    query.exec();

    std::vector<concurent>listaConcurent;
    while(query.next()) {

        QString nume = query.value("nume").toString();
        QString experienta = query.value("experienta").toString();
        int varsta = query.value("varsta").toInt();
        int greutate = query.value("greutate").toInt();
        int nrPuncte = query.value("nr_puncte").toInt();
        int CNP = query.value("CNP").toInt();
        //QString Organizatie=query.value("nume").toString();

        concurent Concurent(nume,varsta,greutate,experienta,nrPuncte,CNP);


        listaConcurent.push_back(Concurent);
    }

return listaConcurent;
}



