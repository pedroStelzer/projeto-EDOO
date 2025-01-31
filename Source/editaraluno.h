#ifndef EDITARALUNO_H
#define EDITARALUNO_H

#include <QDialog>
#include <QtSql>
#include "horariosalunos.h"
#include "aluno.h"

namespace Ui {
class EditarAluno;
}

class EditarAluno : public QDialog
{
    Q_OBJECT

public:
    explicit EditarAluno(QWidget *parent = nullptr, QString id_aluno = "0");
    ~EditarAluno();

    QString getIdAluno(); // Função para obter o ID do aluno

private slots:
    void on_botaoCancelar_clicked(); // Função chamada quando o botão de cancelar edição do aluno é clicado

    void on_botaoConfirmar_clicked(); // Função chamada quando o botão de confirmar a edição do aluno é clicado

    void on_botaoEditarHorarios_clicked(); // Função chamada quando o botão de editar horários do aluno é clicado

private:
    Ui::EditarAluno *ui;
    HorariosAlunos *horariosAlunos; // Ponteiro para a classe de horários do aluno
    QString id; // Armazena o ID do aluno que está sendo editado
};

#endif // EDITARALUNO_H
