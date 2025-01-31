#include "cadastroprofessor.h"
#include "ui_cadastroprofessor.h"

// Construtor da classe CadastroProfessor
CadastroProfessor::CadastroProfessor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CadastroProfessor)
{
    ui->setupUi(this);
}

// Destruidor da classe CadastroProfessor
CadastroProfessor::~CadastroProfessor()
{
    delete ui;
}

// Slot chamado quando o botão de selecionar horários do professor é clicado
void CadastroProfessor::on_botaoSelecionaHorariosProfessor_clicked()
{
    horariosProfessor = new Horariosprofessor(this); // Cria uma instância da janela de seleção de horários
    horariosProfessor->exec(); // Exibe a janela de seleção de horários
}

// Slot chamado quando o botão de cadastrar professor é clicado
void CadastroProfessor::on_botaoCadastraProfessor_clicked()
{
    // Coleta as informações fornecidas pelo usuário nos campos de texto
    QMap<QString, QStringList> horariosSelecionados;
    QString nome, email, telefone;

    nome = ui->nomeLineEdit->text(); // Obtém o texto do campo nome
    email = ui->emailLineEdit->text(); // Obtém o texto do campo email
    telefone = ui->telefoneLineEdit->text(); // Obtém o texto do campo telefone
    horariosSelecionados = horariosProfessor->getHorariosSelecionados(); // Obtém os horários selecionados na janela de seleção

    // Cria um objeto Professor com os dados fornecidos
    Professor professor("0", nome, email, telefone, horariosSelecionados);

    professor.adicionarNoBancoDeDados(); // Adiciona o professor no banco de dados

    this->close(); // Fecha a janela de cadastro
}

// Slot chamado quando o botão de cancelar cadastro é clicado
void CadastroProfessor::on_botaoCancelaProfessor_clicked()
{
    this->close(); // Fecha a janela de cadastro
}
