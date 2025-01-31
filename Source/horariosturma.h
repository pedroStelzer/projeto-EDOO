#ifndef HORARIOSTURMA_H
#define HORARIOSTURMA_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QStringList>
#include <QMap>
#include <QStringList>

namespace Ui {
class HorariosTurma;
}

class HorariosTurma : public QDialog
{
    Q_OBJECT

public:
    explicit HorariosTurma(QWidget *parent = nullptr);
    ~HorariosTurma();

    void onConfirmarClicked(); // Função chamada quando o botão "Confirmar" é clicado

    QMap<QString, QStringList> getHorariosSelecionados(); // Função para obter os horários selecionados da turma

private:
    Ui::HorariosTurma *ui;
    QMap<QString, QStringList> horariosSelecionados; // Dicionário que armazena os horários selecionados, onde a chave é uma string (dias da semana) e o valor é uma lista de strings (horários)
};

#endif // HORARIOSTURMA_H
