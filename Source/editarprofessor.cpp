#include "editarprofessor.h"
#include "ui_editarprofessor.h"

static QString id; // Declaração de uma variável estática que irá armazenar o ID do professor

EditarProfessor::EditarProfessor(QWidget *parent, QString id_professor)
    : QDialog(parent)
    , ui(new Ui::EditarProfessor)
{
    ui->setupUi(this);

    id = id_professor;

    // Cria um objeto QSqlQuery para fazer a consulta no banco de dados
    QSqlQuery query;
    query.prepare("select * from tb_professores where id_professor =" + id);
    query.exec();

    query.first(); // Move o cursor para o primeiro (e único) resultado da consulta

    // Preenche os campos da interface gráfica com os dados do professor
    ui->nomeLineEdit->setText(query.value(1).toString()); // Nome do professor (primeira coluna no banco de dados)
    ui->emailLineEdit->setText(query.value(3).toString()); // Email do professor (terceira coluna no banco de dados)
    ui->telefoneLineEdit->setText(query.value(2).toString()); // Telefone do professor (segunda coluna no banco de dados)
}

EditarProfessor::~EditarProfessor()
{
    delete ui;
}

// Método para retornar o ID do professor
QString EditarProfessor::getIdProfessor()
{
    return id;
}

// Slot chamado quando o botão "Editar Horários" é pressionado
void EditarProfessor::on_botaoEditarHorarios_clicked()
{
    horariosProfessor= new Horariosprofessor(this); // Cria uma nova instância da janela de edição de horários
    horariosProfessor->exec(); // Exibe o janela de edição de horários
}

// Slot chamado quando o botão "Confirmar" é pressionado
void EditarProfessor::on_botaoConfirmar_clicked()
{
    QMap<QString, QStringList> horariosSelecionados;
    QString nome, email, telefone;

    // Pega os dados digitados pelo usuário na interface gráfica
    nome = ui->nomeLineEdit->text();
    email = ui->emailLineEdit->text();
    telefone = ui->telefoneLineEdit->text();
    horariosSelecionados = horariosProfessor->getHorariosSelecionados();

    // Cria um objeto Professor com os dados atualizados
    Professor professor(id, nome, email, telefone, horariosSelecionados);

    professor.atualizarBancoDeDados(); // Atualiza os dados do professor no banco de dados

    this->close(); // Fecha a janela após salvar as alterações
}

// Slot chamado quando o botão "Cancelar" é pressionado
void EditarProfessor::on_botaoCancelar_clicked()
{
    this->close(); // Fecha a janela
}
