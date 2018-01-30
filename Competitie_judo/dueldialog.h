#ifndef DUELDIALOG_H
#define DUELDIALOG_H

#include <QDialog>

namespace Ui {
class DuelDialog;
}

class DuelDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DuelDialog(QWidget *parent = 0);
    QString genereazaConcurentiDuel();
    ~DuelDialog();
protected:
    void accept() override;
    void showEvent(QShowEvent *);
private:
    Ui::DuelDialog *ui;
};

#endif // DUELDIALOG_H
