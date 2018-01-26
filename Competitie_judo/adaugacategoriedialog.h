#ifndef ADAUGACATEGORIEDIALOG_H
#define ADAUGACATEGORIEDIALOG_H

#include <QDialog>
#include<memory>
#include "categorie.h"
namespace Ui {
class adaugaCategorieDialog;
}

class adaugaCategorieDialog : public QDialog
{
    Q_OBJECT

public:
    explicit adaugaCategorieDialog(QWidget *parent = 0);
    std::unique_ptr<categorie> introduceNumeleCategoriei();
    ~adaugaCategorieDialog();
protected:
    void accept() override;
    void showEvent(QShowEvent *);
private:
    Ui::adaugaCategorieDialog *ui;
};

#endif // ADAUGACATEGORIEDIALOG_H
