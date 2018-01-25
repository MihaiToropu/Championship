#ifndef CONCURENTREPOSITORY_H
#define CONCURENTREPOSITORY_H

#include<QList>;
#include"concurent.h"


class QSqlDatabase;

class concurentRepository
{
public:
    concurentRepository(QSqlDatabase& database);
    void init() const;
    void AdaugaConcurent(concurent& Concurent);
    void UpdateConcurent(concurent& player);
    void StergeConcurent(int CNP);
    QList<concurent>listaConcurent() const;
private:
     QSqlDatabase& mDatabase;

};

#endif // CONCURENTREPOSITORY_H
