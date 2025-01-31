#ifndef EDITARTURMA_H
#define EDITARTURMA_H

#include <QDialog>
#include <QtSql>
#include "horariosturma.h"
#include "turma.h"

namespace Ui {
class EditarTurma;
}

class EditarTurma : public QDialog
{
    Q_OBJECT

public:
    explicit EditarTurma(QWidget *parent = nullptr, QString id_professor = "0");
    ~EditarTurma();

    QString getIdTurma(); // Função para obter o ID da turma

    // Funções para atualizar as listas de alunos e professores selecionados
    void atualizarListaDeSelecionadosAlunos();
    void atualizarListaDeSelecionadosProfessores();

    // Funções para obter os IDs dos alunos e professores selecionados
    QStringList getIdsAlunosSelecionados();
    QStringList getIdsProfessoresSelecionados();

private slots:
    void on_botaoEditarHorarios_clicked(); // Função chamada quando o botão de editar horários da turma é clicado

    void on_botaoConfirmar_clicked(); // Função chamada quando o botão de confirmar a edição da turma é clicado

    void on_botaoCancelar_clicked(); // Função chamada quando o botão de cancelar a edição da turma é clicado

private:
    Ui::EditarTurma *ui;
    HorariosTurma *horariosTurma; // Ponteiro para a classe de horários da turma
    QString idTurma; // Armazena o ID da turma que está sendo editada
    QStringList idsAlunosSelecionados; // Lista para armazenar os IDs dos alunos selecionados
    QStringList idsProfessoresSelecionados; // Lista para armazenar os IDs dos professores selecionados
};

#endif // EDITARTURMA_H
