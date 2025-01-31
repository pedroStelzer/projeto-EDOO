#ifndef CADASTROPROFESSOR_H
#define CADASTROPROFESSOR_H

#include <QDialog>
#include "horariosprofessor.h"
#include "professor.h"

namespace Ui {
class CadastroProfessor;
}

class CadastroProfessor : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroProfessor(QWidget *parent = nullptr);
    ~CadastroProfessor();

private slots:

    void on_botaoSelecionaHorariosProfessor_clicked(); // Função chamada quando o botão para selecionar horários do professor é clicado

    void on_botaoCadastraProfessor_clicked(); // Função chamada quando o botão para cadastrar um professor é clicado


    void on_botaoCancelaProfessor_clicked(); // Função chamada quando o botão de cancelar o cadastro de um professor é clicado

private:
    Ui::CadastroProfessor *ui;
    Horariosprofessor *horariosProfessor; // Ponteiro para a classe de horários dos professores
};

#endif // CADASTROPROFESSOR_H
