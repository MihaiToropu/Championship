#include "concurent.h"



concurent::concurent(QString nume,int varsta,int greutate,int nrPuncte,int id)
{
    this->nume=nume;
    this->varsta=varsta;
    this->greutate=greutate;
    this->nrPuncte=nrPuncte;
    this->id=id;
}
 int concurent::getVarsta()
{
    return varsta;
}

int concurent::getGreutate()
{
    return greutate;
}

void concurent::setnrPuncte(int puncte)
{
    nrPuncte+=puncte;
}
int concurent::getnrPuncte()
{
    return nrPuncte;
}
int concurent::getID()
{
    return id;
}
QString concurent::getNume()
{
    return nume;
}


