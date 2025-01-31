#include "cadastro.h"
#include "ui_cadastro.h"

// Construtor da classe Cadastro
Cadastro::Cadastro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Cadastro)
{
    ui->setupUi(this);

}

// Destruidor da classe Cadastro
Cadastro::~Cadastro()
{
    delete ui;
}

// Slot que é chamado quando o botão de cadastro é clicado
void Cadastro::on_pushButton_clicked()
{
     // Coleta as informações fornecidas pelo usuário nos campos de texto
    QString nome, endereco, telefone, email, senha, confirmacaoSenha;

     nome = ui->nomeLineEdit->text();  // Obtém o texto do campo nome
     endereco = ui->endereOLineEdit->text();  // Obtém o texto do campo endereço
     telefone = ui->telefoneLineEdit->text();  // Obtém o texto do campo telefone
     email = ui->emailLineEdit->text();  // Obtém o texto do campo email
     senha = ui->senhaLineEdit->text();  // Obtém o texto do campo senha
     confirmacaoSenha = ui->confirmarSenhaLineEdit->text();  // Obtém o texto do campo confirmar senha

    // Verifica se a senha e a confirmação de senha são iguais, e se todos os campos foram preenchidos
    if(senha == confirmacaoSenha && !nome.isEmpty() && !endereco.isEmpty() && !telefone.isEmpty() && !email.isEmpty() && !senha.isEmpty() && !confirmacaoSenha.isEmpty())
    {
        // Cria um objeto Instituicao com os dados fornecidos
        Instituicao instituicao("0", senha, nome, endereco, telefone, email);

        instituicao.adicionarNoBancoDeDados(); // Adiciona a instituição no banco de dados

        this->close(); // Fecha a janela de cadastro
    }
    else
    {
        // Caso haja erro (senha diferente da confirmação ou campos vazios), exibe uma mensagem de erro
        ui->mensagemErro->setText("Digite as informações corretamente");
        ui->mensagemErro->setStyleSheet("color: red");
    }

}

// Slot que é chamado quando o botão de cancelar é clicado
void Cadastro::on_pushButton_2_clicked()
{
    this->close(); // Fecha a janela de cadastro
}

