#ifndef CADASTROALUNO_H
#define CADASTROALUNO_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QStringList>
#include <QMap>
#include "horariosalunos.h"
#include "aluno.h"

namespace Ui {
class CadastroAluno;
}

class CadastroAluno : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroAluno(QWidget *parent = nullptr);
    ~CadastroAluno();

private slots:
    void on_botaoSelecionarHorariosAluno_clicked(); // Função chamada quando o botão para selecionar horários do aluno é clicado

    void on_botaoCadastrarAluno_clicked(); // Função chamada quando o botão para cadastrar um aluno é clicado

    void on_botaoCancelarAluno_clicked();

private:
    Ui::CadastroAluno *ui;
    HorariosAlunos *horariosAlunos; // Ponteiro para a classe de horários dos alunos
};

#endif // CADASTROALUNO_H
