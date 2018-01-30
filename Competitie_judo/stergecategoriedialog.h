#ifndef STERGECATEGORIEDIALOG_H
#define STERGECATEGORIEDIALOG_H

#include <QDialog>

namespace Ui {
class stergeCategorieDialog;
}

class stergeCategorieDialog : public QDialog
{
    Q_OBJECT

public:
    explicit stergeCategorieDialog(QWidget *parent = 0);
    QString introduceCategorieClub();
    ~stergeCategorieDialog();
protected:
    void showEvent(QShowEvent *);
    void accept() override;
private:
    Ui::stergeCategorieDialog *ui;
};

#endif // STERGECATEGORIEDIALOG_H
