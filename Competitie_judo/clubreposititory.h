#ifndef CLUBREPOSTITORY_H
#define CLUBREPOSTITORY_H


#include<QList>
#include "club.h"
#include<QComboBox>
class QSqlDatabase;




class clubRepository
{
public:
    clubRepository(QSqlDatabase& database);
    void init() const;
    void AdaugaClub(club& Club);
    void StergeClub(int id);
    void initComboBox(QComboBox &cb);
    QList<club> listaCluburi() const;
private:
    QSqlDatabase& mDatabase;

};

#endif // CLUBREPOSTITORY_H
