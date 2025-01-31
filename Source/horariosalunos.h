#ifndef HORARIOSALUNOS_H
#define HORARIOSALUNOS_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QStringList>
#include <QMap>
#include <QStringList>

namespace Ui {
class HorariosAlunos;
}

class HorariosAlunos : public QDialog
{
    Q_OBJECT

public:
    explicit HorariosAlunos(QWidget *parent = nullptr);
    ~HorariosAlunos();

    void onConfirmarClicked(); // Função chamada quando o botão "Confirmar" é clicado

    QMap<QString, QStringList> getHorariosSelecionados(); // Função para obter os horários selecionados pelos alunos

private:
    Ui::HorariosAlunos *ui;
    QMap<QString, QStringList> horariosSelecionados; // Dicionário que armazena os horários selecionados, onde a chave é uma string (dias da semana) e o valor é uma lista de strings (horários)
};

#endif // HORARIOSALUNOS_H
