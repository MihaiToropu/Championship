#include "concurent.h"



concurent::concurent(int id,int varsta,int greutate,QString experienta,int nrPuncte,int CNP,organizatie Organizatie)
{
    this->id=id;
    this->varsta=varsta;
    this->greutate=greutate;
    this->experienta=experienta;
    this->nrPuncte=nrPuncte;
    this->CNP=CNP;
    this->Organizatie=Organizatie;

}
concurent::getVarsta()
{
    return varsta;
}

concurent::getGreutate()
{
    return greutate;
}

concurent::getExperienta()
{
    return experienta;
}
concurent::setnrPuncte(int puncte)
{
    nrPuncte+=puncte;
}
concurent::getnrPuncte()
{
    return nrPuncte;
}
concurent::getCNP()
{
    return CNP;
}
concurent::getOrganizatie()
{
    return organizatie;
}
