#include "clasamentdialog.h"
#include "ui_clasamentdialog.h"
#include<QSqlRelationalTableModel>
#include<databasemanager.h>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlField>
#include <QSqlRecord>
ClasamentDialog::ClasamentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClasamentDialog)
{
    ui->setupUi(this);
    afiseazaClasament();
    ui->tableView->setModel(m_clasament);
}

ClasamentDialog::~ClasamentDialog()
{
    delete ui;
}
void ClasamentDialog::afiseazaClasament()
{
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        m_model = new QSqlRelationalTableModel(this,mDatabase);

        m_model->setTable("competitor");
        m_model->select();
        m_clasament = new QSqlQueryModel(this);

        QSqlQuery query("SELECT name,fight_categories.category_name,fight_club.club_name,points FROM competitor INNER JOIN fight_categories ON competitor.fight_category_fgk = fight_categories.category_id INNER JOIN fight_club ON competitor.fight_club_fgk = fight_club.club_id ORDER BY category_id,points DESC");
        m_clasament->setQuery(query);
        m_clasament->setHeaderData(0, Qt::Horizontal, tr("Name"));
        m_clasament->setHeaderData(1, Qt::Horizontal, tr("Categorie"));
        m_clasament->setHeaderData(2, Qt::Horizontal, tr("Club"));
        m_clasament->setHeaderData(3, Qt::Horizontal, tr("Punctaj"));

}
