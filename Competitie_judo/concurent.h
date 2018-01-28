#ifndef CONCURENT_H
#define CONCURENT_H


#include <QString>
#include <organizatie.h>
class organizatie;
class concurent
{
public:
    concurent(QString nume,int varsta,int greutate,int nrPuncte,int id/*,organizatie Organizatie*/);

    int getVarsta();
    int getGreutate();
    QString getExperienta();
    QString getNume();
    int getID();
    void setnrPuncte(int puncte);
    int getnrPuncte();
   // organizatie getOrganizatie();

private:
    int id;//indentificatorul unic al fiecarui concurent
    QString nume;
    int varsta; //varsta concurentului
    int greutate; //greutatea concurentului
    int nrPuncte; // numarul de puncte acumulat de concurent pe perioada competitiei
    //organizatie Organizatie;
};

#endif // CONCURENT_H
