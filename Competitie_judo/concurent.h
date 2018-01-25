#ifndef CONCURENT_H
#define CONCURENT_H


#include <QString>
#include "organizatie.h"

class concurent
{
public:
    concurent(int id,int varsta,int greutate,QString experienta,int nrPuncte,int CNP,organizatie Organizatie);

    int getVarsta();
    int getGreutate();
    char getExperienta();
    int getCNP();
    void setnrPuncte(int puncte);
    int getnrPuncte();
    int getOrganizatie();

private:
    int id;//indentificatorul unic al fiecarui concurent
    int varsta; //varsta concurentului
    int greutate; //greutatea concurentului
    int CNP;//cnp-ul concurentului
    QString experienta;//experienta concurentului
    int nrPuncte; // numarul de puncte acumulat de concurent pe perioada competitiei
    organizatie Organizatie;
};

#endif // CONCURENT_H
