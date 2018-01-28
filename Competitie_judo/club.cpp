#include "club.h"

club::club(int id, QString nume)
{
    this->id=id;
    this->nume=nume;
}

int club::getID()
{
    return id;
}

QString club::getNume()
{
    return nume;
}
