#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H

#include <QMainWindow>
#include <QtSql>
#include <QStringList>
#include <QDebug>
#include "cadastroaluno.h"
#include "cadastroprofessor.h"
#include "editaraluno.h"
#include "editarprofessor.h"
#include "editarturma.h"
#include "cadastroturma.h"

namespace Ui {
class TelaPrincipal;
}

class TelaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit TelaPrincipal(QWidget *parent = nullptr);
    ~TelaPrincipal();

private slots:

    // Botões relacionados a Aluno
    void on_pesquisa_aluno_clicked(); // Pesquisa de aluno
    void on_cadastra_aluno_clicked(); // Cadastro de aluno
    void on_edita_aluno_clicked(); // Edição de aluno
    void on_deleta_aluno_clicked(); // Exclusão de aluno

    // Botões relacionados a Professor
    void on_pesquisa_professor_clicked(); // Pesquisa de professor
    void on_cadastra_professor_clicked(); // Cadastro de professor
    void on_edita_professor_clicked(); // Edição de professor
    void on_deleta_professor_clicked(); // Exclusão de professor

    // Botões relacionados a Turma
    void on_pesquisa_turma_clicked(); // Pesquisa de turma
    void on_cadastra_turma_clicked(); // Cadastro de turma
    void on_edita_turma_clicked(); // Edição de turma
    void on_deleta_turma_clicked(); // Exclusão de turma

private:
    Ui::TelaPrincipal *ui;
    CadastroAluno *cadastroAluno; // Ponteiro para a tela de cadastro de aluno
    CadastroProfessor *cadastroProfessor; // Ponteiro para a tela de cadastro de professor
    CadastroTurma *cadastroTurma;       // Ponteiro para a tela de cadastro de turma
    EditarAluno *editarAluno; // Ponteiro para a tela de edição de aluno
    EditarProfessor *editarProfessor; // Ponteiro para a tela de edição de professor
    EditarTurma *editarTurma; // Ponteiro para a tela de edição de Turma
};

#endif // TELAPRINCIPAL_H
