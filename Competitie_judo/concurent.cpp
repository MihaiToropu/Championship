#include "concurent.h"



concurent::concurent(QString nume,int varsta,int greutate,QString experienta,int nrPuncte,int CNP/*,organizatie Organizatie*/)
{
    this->nume=nume;
    this->varsta=varsta;
    this->greutate=greutate;
    this->experienta=experienta;
    this->nrPuncte=nrPuncte;
    this->CNP=CNP;
    //this->Organizatie=Organizatie;

}
 int concurent::getVarsta()
{
    return varsta;
}

int concurent::getGreutate()
{
    return greutate;
}

QString concurent::getExperienta()
{
    return experienta;
}
void concurent::setnrPuncte(int puncte)
{
    nrPuncte+=puncte;
}
int concurent::getnrPuncte()
{
    return nrPuncte;
}
int concurent::getCNP()
{
    return CNP;
}
QString concurent::getNume()
{
    return nume;
}

/*organizatie concurent::getOrganizatie()
{
    return organizatie;
}
*/
