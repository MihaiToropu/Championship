#ifndef ETAPA_H
#define ETAPA_H


#include <QString>
#include <QList>
#include <categorie.h>
#include <duel.h>
#include <clasament.h>

class categorie;
class duel;
class clasament;
class etapa
{
public:
    etapa(QString nume, QList<categorie>& listCategorie, duel *mDuel);
    void SimuleazaDuel(duel& Duel);
    void SimuleazaEtapa();
    void SimuleazaClasament(clasament& Clasament);

private:
    QString nume;//numele etapei
    QList<categorie> listCategorie;//lista de categorii primita
    duel *mDuel;
    clasament *mClasament;
};

#endif // ETAPA_H
