#ifndef CLUB_H
#define CLUB_H

#include "QString"


class club
{
public:
    club(int id,QString nume);
    int getID();
    QString getNume();

private:
    QString nume; //numele clubului
    int id;//adresa clubului
};

#endif // CLUB_H
