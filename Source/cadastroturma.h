#ifndef CADASTROTURMA_H
#define CADASTROTURMA_H

#include <QDialog>
#include <QtSql>
#include "horariosturma.h"
#include "turma.h"

namespace Ui {
class CadastroTurma;
}

class CadastroTurma : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroTurma(QWidget *parent = nullptr);
    ~CadastroTurma();

    void atualizarListaDeSelecionadosAlunos(); // Função para atualizar a lista de alunos selecionados
    void atualizarListaDeSelecionadosProfessores(); // Função para atualizar a lista de professores selecionados

    QStringList getIdsAlunosSelecionados(); // Função para obter os IDs dos alunos selecionados
    QStringList getIdsProfessoresSelecionados(); // Função para obter os IDs dos professores selecionados

private slots:
    void on_botaoSelecionarHorarios_clicked(); // Função chamada quando o botão para selecionar horários da turma é clicado

    void on_botaoCadastrar_clicked(); // Função chamada quando o botão para cadastrar a turma é clicado

    void on_botaoCancelar_clicked(); // Função chamada quando o botão para cancelar o cadastro da turma é clicado

private:
    Ui::CadastroTurma *ui;
    HorariosTurma *horariosTurma; // Ponteiro para a classe de horários da turma
    QStringList idsAlunosSelecionados; // Lista para armazenar os IDs dos alunos selecionados
    QStringList idsProfessoresSelecionados; // Lista para armazenar os IDs dos professores selecionados
};

#endif // CADASTROTURMA_H
