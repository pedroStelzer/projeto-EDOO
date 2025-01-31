#ifndef CADASTRO_H
#define CADASTRO_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include "instituicao.h"

namespace Ui {
class Cadastro;
}

class Cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();

private slots:
    void on_pushButton_clicked(); // Botão de cadastrar

    void on_pushButton_2_clicked(); // Botão de cancelar

private:
    Ui::Cadastro *ui;
};

#endif // CADASTRO_H
