#include "telalogin.h"
#include "ui_telalogin.h"

TelaLogin::TelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Conecta ao banco de dados SQLite localizado no caminho especificado.
    this->bancoDeDados.setDatabaseName("C:/Users/Pedro Stelzer/OneDrive - UFPE/Attachments/Periodo-3/EDOO/Sistema_MArcacao_Turmas/banco_de_dados/db_sistema.db");

    this->bancoDeDados.open(); // Abre a conexão com o banco de dados.
}

TelaLogin::~TelaLogin()
{
    delete ui;
}

// Botão de "Primeiro Acesso" pressionado
void TelaLogin::on_pushButton_clicked()
{
    cadastro = new Cadastro(this); // Cria uma nova instância da janela Cadastro
    cadastro->exec();  // Exibe a janela Cadastro
}

// Botão de "Confirmar Login" pressionado
void TelaLogin::on_pushButton_2_clicked()
{   
    QString nome = ui->txt_usuario->text(); // Obtém o nome do usuário a partir do campo de texto
    QString senha = ui->txt_senha->text(); // Obtém a senha do usuário a partir do campo de texto

    // Verifica se o banco de dados está aberto. Caso não esteja, exibe uma mensagem de erro
    if(!this->bancoDeDados.isOpen())
    {
        qDebug() << "Banco de dados não está aberto";
        return;
    }

    // Executa a consulta SQL para verificar se o nome de usuário e senha existem no banco de dados
    QSqlQuery query;
    if(query.exec("select * from tb_instituicao where nome = '"+nome+"' and senha = '"+senha+"'"))
    {
        int count = 0;

        // Percorre os resultados da consulta e conta quantos registros correspondem
        while(query.next())
        {
            count++;
        }

        // Se um ou mais registros forem encontrados, faz o login com sucesso e abre a janela principal
        if(count > 0)
        {
            telaPrincipal = new TelaPrincipal(this); // Cria uma instância da janela principal
            this->close(); // Fecha a janela de login
            telaPrincipal->showMaximized(); // Exibe a janela principal maximizada
        }
        else
        {
            // Se nenhum registro for encontrado, exibe uma mensagem de erro para o usuário
            ui->txt_erro->setText("Usuário ou senha incorretos"); // Define o texto da mensagem de erro
            ui->txt_erro->setStyleSheet("color: red"); // Altera a cor do texto da mensagem de erro para vermelho
            ui->txt_usuario->clear(); // Limpa o campo de nome de usuário
            ui->txt_senha->clear(); // Limpa o campo de senha
            ui->txt_usuario->setFocus(); // Foca o cursor novamente no campo de nome de usuário
        }
    }
}
