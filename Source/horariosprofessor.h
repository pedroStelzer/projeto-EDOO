#ifndef HORARIOSPROFESSOR_H
#define HORARIOSPROFESSOR_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QStringList>
#include <QMap>
#include <QStringList>

namespace Ui {
class Horariosprofessor;
}

class Horariosprofessor : public QDialog
{
    Q_OBJECT

public:
    explicit Horariosprofessor(QWidget *parent = nullptr);
    ~Horariosprofessor();

    void onConfirmarClicked(); // Função chamada quando o botão "Confirmar" é clicado

    QMap<QString, QStringList> getHorariosSelecionados(); // Função para obter os horários selecionados pelo professor

private:
    Ui::Horariosprofessor *ui;
    QMap<QString, QStringList> horariosSelecionados; // Dicionário que armazena os horários selecionados, onde a chave é uma string (dias da semana) e o valor é uma lista de strings (horários)
};

#endif // HORARIOSPROFESSOR_H
