#include "concurentRepository.h"
#include <QSqlDatabase>
#include <QSqlQuery>

const QString Tabel_Concurent_BazaDate = "Concurenti";

concurentRepository::concurentRepository(QSqlDatabase& database)
{
    this->mDatabase=database;
}

concurentRepository::init()
{
    if(!mDatabase.tables().contains(Tabel_Concurent_BazaDate))
       {
           QSqlQuery query(mDatabase);
           query.prepare("CREATE TABLE Players ( Id int PRIMARY KEY, Score int, Team text, Age int, Weight int);");
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
concurentRepository::AdaugaConcurent(concurent& Concurent)
{
    QSqlQuery query(mDatabase);
    query.prepare("INSERT INTO"
                  "     Players"
                  "(CNP, Score, Team, Age, Weight)"
                  "VALUES (:CNP, :nr_puncte, :team, :age, :weight)");
        query.bindValue(":CNP", Concurent.GetCNP());
        query.bindValue(":NrPuncte", Concurent.getnrPuncte());
        query.bindValue(":Organizatie", Concurent.getOrganizatie());
        query.bindValue(":varsta", Concurent.getVarsta());
        query.bindValue(":greutate", Concurent.getGreutate());
        query.exec();
}
concurentRepository::UpdateConcurent(concurent& Concurent)
{
    QSqlQuery query(mDatabase);
        query.prepare("UPDATE "
                      "     Players"
                      "SET"
                      "      score = (:score)"
                      "WHERE"
                      "      id = (:id)");
        query.bindValue(":score", Concurent.getnrPuncte());
        query.bindValue(":id", Concurent.getCNP());
        query.exec();
}


concurentRepository::StergeConcurent(int CNP)
{
    QSqlQuery query(mDatabase);
    query.prepare("DELETE FROM Players WHERE Id = (:id)");
    query.bindValue(":CNP", CNP);
    qDebug() << query.exec();
}
concurentRepository::listaConcurent()
{

    QSqlQuery query(mDatabase);
    query.prepare("SELECT * FROM Concurent");
    query.exec();

    QList<concurent>listaConcurent;
    while(query.next()) {

        int id = query.value("Id").toInt();
        QString experienta = query.value("experienta").toString();
        int varsta = query.value("varsta").toInt();
        int greutate = query.value("greutate").toInt();
        int nrPuncte = query.value("nr_puncte").toInt();
        int CNP = query.value("CNP").toInt();
        QString Organizatie=query.value("nume").toString();

        concurent Concurent(id,varsta,greutate,experienta,nrPuncte,CNP);


        listaConcurent.push_back(Concurent);
    }

return listaConcurent;
}



