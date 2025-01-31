#include "cadastroaluno.h"
#include "ui_cadastroaluno.h"

// Construtor da classe CadastroAluno
CadastroAluno::CadastroAluno(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CadastroAluno)
{
    ui->setupUi(this);
}

// Destruidor da classe CadastroAluno
CadastroAluno::~CadastroAluno()
{
    delete ui;
}

// Slot chamado quando o botão de selecionar horários do aluno é clicado
void CadastroAluno::on_botaoSelecionarHorariosAluno_clicked()
{
    horariosAlunos = new HorariosAlunos(this); // Cria uma instância da janela de seleção de horários
    horariosAlunos->exec(); // Exibe a janela de seleção de horários
}

// Slot chamado quando o botão de cadastrar aluno é clicado
void CadastroAluno::on_botaoCadastrarAluno_clicked()
{
    // Coleta as informações fornecidas pelo usuário nos campos de texto
    QMap<QString, QStringList> horariosSelecionados;
    QString nome, email, telefone, moduloAtual;

    nome = ui->nomeLineEdit->text(); // Obtém o texto do campo nome
    email = ui->emailLineEdit->text(); // Obtém o texto do campo email
    telefone = ui->telefoneLineEdit->text(); // Obtém o texto do campo telefone
    moduloAtual = ui->moduloAtualLineEdit->text(); // Obtém o texto do campo módulo atual
    horariosSelecionados = horariosAlunos->getHorariosSelecionados(); // Obtém os horários selecionados na janela de seleção

    // Cria um objeto Aluno com os dados fornecidos
    Aluno aluno("0", nome, email, telefone, moduloAtual, horariosSelecionados);

    aluno.adicionarNoBancoDeDados(); // Adiciona o aluno no banco de dados

    this->close();// Fecha a janela de cadastro
}

void CadastroAluno::on_botaoCancelarAluno_clicked()
{
    this->close(); // Fecha a janela de cadastro
}

