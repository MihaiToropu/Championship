#ifndef ETAPA_H
#define ETAPA_H


#include <QString>
#include <QList>
#include "categorie.h"
#include "duel.h"
#include "clasament.h"

class etapa
{
public:
    etapa(QString nume,QList<categorie> listCategorie,duel Duel);
    void SimuleazaDuel(duel Duel);
    void SimuleazaEtapa();
    void SimuleazaClasament(clasament clasament);

private:
    QString nume;//numele etapei
    QList<categorie> listCategorie;//lista de categorii primita
    duel Duel;
};

#endif // ETAPA_H
