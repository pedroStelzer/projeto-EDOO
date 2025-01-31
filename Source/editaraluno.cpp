#include "editaraluno.h"
#include "ui_editaraluno.h"

static QString id; // Declaração de uma variável estática que irá armazenar o ID do aluno

EditarAluno::EditarAluno(QWidget *parent, QString id_aluno)
    : QDialog(parent)
    , ui(new Ui::EditarAluno)
{
    ui->setupUi(this);

    id = id_aluno;

    // Prepara a consulta SQL para buscar os dados do aluno com o ID fornecido
    QSqlQuery query;
    query.prepare("select * from tb_alunos where id_aluno =" + id);
    query.exec();

    query.first(); // Move o cursor para o primeiro (e único) resultado da consulta

    // Preenche os campos da interface gráfica com os dados do aluno
    ui->nomeLineEdit->setText(query.value(1).toString()); // Nome do aluno (primeira coluna no banco de dados)
    ui->emailLineEdit->setText(query.value(3).toString()); // Email do aluno (terceira coluna no banco de dados)
    ui->telefoneLineEdit->setText(query.value(2).toString()); // Telefone do aluno (segunda coluna no banco de dados)
    ui->moduloAtualLineEdit->setText(query.value(4).toString()); // Módulo atual do aluno (quarta coluna no banco de dados)
}

EditarAluno::~EditarAluno()
{
    delete ui;
}

// Método para retornar o ID do aluno
QString EditarAluno::getIdAluno()
{
    return id;
}

// Slot chamado quando o botão "Cancelar" é pressionado
void EditarAluno::on_botaoCancelar_clicked()
{
    this->close(); // Fecha a janela
}

// Slot chamado quando o botão "Confirmar" é pressionado
void EditarAluno::on_botaoConfirmar_clicked()
{
    QMap<QString, QStringList> horariosSelecionados;
    QString nome, email, telefone, moduloAtual;

    // Pega os dados digitados pelo usuário na interface gráfica
    nome = ui->nomeLineEdit->text();
    email = ui->emailLineEdit->text();
    telefone = ui->telefoneLineEdit->text();
    moduloAtual = ui->moduloAtualLineEdit->text();
    horariosSelecionados = horariosAlunos->getHorariosSelecionados();

    // Cria um objeto Aluno com os dados atualizados
    Aluno aluno(id, nome, email, telefone, moduloAtual, horariosSelecionados);

    aluno.atualizarBancoDeDados(); // Atualiza os dados do aluno no banco de dados

    this->close(); // Fecha a janela após salvar as alterações
}

// Slot chamado quando o botão "Editar Horários" é pressionado
void EditarAluno::on_botaoEditarHorarios_clicked()
{
    horariosAlunos = new HorariosAlunos(this); // Cria uma nova instância do diálogo de edição de horários
    horariosAlunos->exec(); // Exibe o diálogo de edição de horários
}
