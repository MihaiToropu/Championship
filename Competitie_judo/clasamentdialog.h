#ifndef CLASAMENTDIALOG_H
#define CLASAMENTDIALOG_H
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QTableView>
#include <QDialog>

namespace Ui {
class ClasamentDialog;
}

class ClasamentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClasamentDialog(QWidget *parent = 0);
    void afiseazaClasament();
    ~ClasamentDialog();

private:
    Ui::ClasamentDialog *ui;
     QSqlTableModel *m_model;
      QSqlDatabase mDatabase;
      QSqlQueryModel *m_clasament;
};

#endif // CLASAMENTDIALOG_H
