#ifndef ORGANIZATIE_H
#define ORGANIZATIE_H

#include<QString>
class organizatie
{
public:
    organizatie(int id,QString nume);
    void addOrganizatie();
    void deleteOrganizatie();
private:
    int id;//id-ul organizatiei
    QString nume;
};

#endif // ORGANIZATIE_H
