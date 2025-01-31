#ifndef EDITARPROFESSOR_H
#define EDITARPROFESSOR_H

#include <QDialog>
#include <QtSql>
#include "horariosprofessor.h"
#include "professor.h"

namespace Ui {
class EditarProfessor;
}

class EditarProfessor : public QDialog
{
    Q_OBJECT

public:
    explicit EditarProfessor(QWidget *parent = nullptr, QString id_professor = "0");
    ~EditarProfessor();

    QString getIdProfessor(); // Função para obter o ID do professor

private slots:
    void on_botaoEditarHorarios_clicked(); // Função chamada quando o botão de editar horários do professor é clicado

    void on_botaoConfirmar_clicked(); // Função chamada quando o botão de confirmar a edição do professor é clicado

    void on_botaoCancelar_clicked(); // Função chamada quando o botão de cancelar a edição do professor é clicado

private:
    Ui::EditarProfessor *ui;
    Horariosprofessor *horariosProfessor; // Ponteiro para a classe de horários do professor
    QString id; // Armazena o ID do professor que está sendo editado
};

#endif // EDITARPROFESSOR_H
