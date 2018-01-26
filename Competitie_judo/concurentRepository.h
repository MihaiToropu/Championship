#ifndef CONCURENTREPOSITORY_H
#define CONCURENTREPOSITORY_H

#include<QList>;
#include"concurent.h"
#include<memory>

class QSqlDatabase;

class concurentRepository
{
public:
    concurentRepository(QSqlDatabase& database);
    void init() const;
    void AdaugaConcurent(concurent& Concurent);
    void UpdateConcurent(concurent& player);
    void StergeConcurent(int CNP);
    std::vector<concurent> listaConcurent() const;
private:
     QSqlDatabase& mDatabase;

};

#endif // CONCURENTREPOSITORY_H
