#ifndef CONCURENTREPOSITORY_H
#define CONCURENTREPOSITORY_H

#include<QList>
#include"concurent.h"
#include<memory>

class QSqlDatabase;

class concurentRepository
{
public:
    concurentRepository(QSqlDatabase& database);
    void init() const;
    void AdaugaConcurent(concurent& Concurent);
    void UpdatePunctajConcurent(int id_concurent,int punctaj);
    void StergeConcurent(QString id);
    std::vector<concurent> listaConcurent() const;
private:
     QSqlDatabase& mDatabase;

};

#endif // CONCURENTREPOSITORY_H
