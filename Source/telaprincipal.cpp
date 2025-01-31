#include "telaprincipal.h"
#include "ui_telaprincipal.h"

// Construtor da classe TelaPrincipal
// Inicializa a interface gráfica
TelaPrincipal::TelaPrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaPrincipal)
{
    ui->setupUi(this); // Configura os elementos da UI
}

// Destrutor da classe TelaPrincipal
TelaPrincipal::~TelaPrincipal()
{
    delete ui;
}

// =========================== GERENCIAMENTO DE ALUNOS =========================== //

// Função para pesquisar alunos cadastrados no banco de dados
void TelaPrincipal::on_pesquisa_aluno_clicked()
{
    // Definição das colunas da tabela

    int colunaId = 0;
    int colunaNome = 1;
    int colunaTelefone = 2;
    int colunaEmail = 3;
    int colunaModulo = 4;
    int colunasSemanas = 5;

    // Cabeçalhos das colunas
    QStringList cabecalhos = {"ID", "Nome", "Telefone", "Email", "Módulo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};

    // Consulta SQL para buscar todos os alunos
    QSqlQuery query;
    query.prepare("select * from tb_alunos");
    query.exec();

    // Configuração inicial da tabela
    ui->tabelaAlunos->setRowCount(0);
    ui->tabelaAlunos->setColumnCount(11);

    int i = 0;
    while(query.next()) // Percorre os resultados da consulta
    {
        ui->tabelaAlunos->insertRow(i); // Insere uma nova linha na tabela

        // Preenche a linha com os dados do aluno
        for(int j = 0; j < cabecalhos.size(); j++)
        {
            ui->tabelaAlunos->setItem(i, j, new QTableWidgetItem(query.value(j).toString()));
        }

        ui->tabelaAlunos->setRowHeight(i, 20); // Define altura da linha
        i++;
    }

    // Configuração de largura das colunas
    ui->tabelaAlunos->setColumnWidth(colunaId, 20);
    ui->tabelaAlunos->setColumnWidth(colunaNome, 100);
    ui->tabelaAlunos->setColumnWidth(colunaTelefone, 100);
    ui->tabelaAlunos->setColumnWidth(colunaEmail, 200);
    ui->tabelaAlunos->setColumnWidth(colunaModulo, 80);

    // Ajuste da largura de colunas das semanas
    for(int i = 0; i < 6; i++)
    {
        ui->tabelaAlunos->setColumnWidth(colunasSemanas + i, 150);
    }

    // Ajustes visuais da tabela
    ui->tabelaAlunos->setWordWrap(true); // Ativa a quebra de linha automática nas células da tabela
    ui->tabelaAlunos->resizeRowsToContents(); // Ajusta a altura das linhas para se adaptarem ao conteúdo
    ui->tabelaAlunos->setHorizontalHeaderLabels(cabecalhos);
    ui->tabelaAlunos->setEditTriggers(QAbstractItemView::NoEditTriggers); // Impede edição direta na tabela
    ui->tabelaAlunos->setSelectionBehavior(QAbstractItemView::SelectRows); // Seleciona linhas inteiras
    ui->tabelaAlunos->verticalHeader()->setVisible(false); // Oculta o cabeçalho vertical
    ui->tabelaAlunos->setStyleSheet("QTableView {selection-background-color:blue}"); // Define cor da seleção
}

// Função para abrir a janela de cadastro de aluno
void TelaPrincipal::on_cadastra_aluno_clicked()
{
    cadastroAluno = new CadastroAluno(this);
    cadastroAluno->exec(); // Abre a janela de cadastro
}

// Função para editar um aluno selecionado na tabela
void TelaPrincipal::on_edita_aluno_clicked()
{
    int linha = ui->tabelaAlunos->currentRow(); // Obtém a linha selecionada
    QString id = ui->tabelaAlunos->item(linha, 0)->text(); // Obtém o ID do aluno

    EditarAluno editarAluno(this, id);
    editarAluno.exec(); // Abre a janela de edição

    this->on_pesquisa_aluno_clicked(); // Atualiza a tabela após a edição
}

// Função para deletar um aluno selecionado
void TelaPrincipal::on_deleta_aluno_clicked()
{
    int linha = ui->tabelaAlunos->currentRow(); // Obtém a linha selecionada
    QString id = ui->tabelaAlunos->item(linha, 0)->text(); // Obtém o ID do aluno

    QSqlQuery query;
    query.prepare("delete from tb_alunos where id_aluno =" + id); // Comando SQL para deletar
    query.exec();

    ui->tabelaAlunos->removeRow(linha); // Remove a linha da interface
}

// =========================== GERENCIAMENTO DE PROFESSORES =========================== //

// Função para pesquisar professores cadastrados no banco de dados
void TelaPrincipal::on_pesquisa_professor_clicked()
{
    // Definição das colunas da tabela
    int colunaId = 0;
    int colunaNome = 1;
    int colunaTelefone = 2;
    int colunaEmail = 3;
    int colunasSemanas = 4;

    // Cabeçalhos das colunas
    QStringList cabecalhos = {"ID", "Nome", "Telefone", "Email", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};

    // Consulta SQL para buscar todos os professores
    QSqlQuery query;
    query.prepare("select * from tb_professores");
    query.exec();

    // Configuração inicial da tabela
    ui->tabelaProfessores->setRowCount(0);
    ui->tabelaProfessores->setColumnCount(10);

    int i = 0;
    while(query.next()) // Percorre os resultados da consulta
    {
        ui->tabelaProfessores->insertRow(i); // Insere uma nova linha na tabela

         // Preenche a linha com os dados do aluno
        for(int j = 0; j < cabecalhos.size(); j++)
        {
            ui->tabelaProfessores->setItem(i, j, new QTableWidgetItem(query.value(j).toString()));
        }

        ui->tabelaProfessores->setRowHeight(i, 20); // Define altura da linha
        i++;
    }

    // Configuração de largura das colunas
    ui->tabelaProfessores->setColumnWidth(colunaId, 20);
    ui->tabelaProfessores->setColumnWidth(colunaNome, 100);
    ui->tabelaProfessores->setColumnWidth(colunaTelefone, 100);
    ui->tabelaProfessores->setColumnWidth(colunaEmail, 200);

    // Ajuste da largura das colunas das semanas
    for(int i = 0; i < 6; i++)
    {
        ui->tabelaProfessores->setColumnWidth(colunasSemanas + i, 150);
    }

    // Ajustes visuais da tabela
    ui->tabelaProfessores->setWordWrap(true); // Ativa a quebra de linha automática nas células da tabela
    ui->tabelaProfessores->resizeRowsToContents(); // Ajusta a altura das linhas para se adaptarem ao conteúdo
    ui->tabelaProfessores->setHorizontalHeaderLabels(cabecalhos);
    ui->tabelaProfessores->setEditTriggers(QAbstractItemView::NoEditTriggers); // Impede edição direta na tabela
    ui->tabelaProfessores->setSelectionBehavior(QAbstractItemView::SelectRows); // Seleciona linhas inteiras
    ui->tabelaProfessores->verticalHeader()->setVisible(false); // Oculta o cabeçalho vertical
    ui->tabelaProfessores->setStyleSheet("QTableView {selection-background-color:blue}"); // Define cor da seleção
}

// Função para abrir a janela de cadastro de professor
void TelaPrincipal::on_cadastra_professor_clicked()
{
    cadastroProfessor = new CadastroProfessor(this);
    cadastroProfessor->exec(); // Abre a janela de cadastro
}

// Função para editar um professor selecionado na tabela
void TelaPrincipal::on_edita_professor_clicked()
{
    int linha = ui->tabelaProfessores->currentRow(); // Obtém a linha selecionada
    QString id = ui->tabelaProfessores->item(linha, 0)->text(); // Obtém o ID do professor

    EditarProfessor editarProfessor(this, id);
    editarProfessor.exec(); // Abre a janela de edição

    this->on_pesquisa_professor_clicked(); // Atualiza a tabela após a edição
}

// Função para deletar um professor selecionado
void TelaPrincipal::on_deleta_professor_clicked()
{
    int linha = ui->tabelaProfessores->currentRow(); // Obtém a linha selecionada
    QString id = ui->tabelaProfessores->item(linha, 0)->text(); // Obtém o ID do professor

    QSqlQuery query;

    query.prepare("delete from tb_professores where id_professor =" + id); // Comando SQL para deletar
    query.exec();

    ui->tabelaProfessores->removeRow(linha); // Remove a linha da interface
}

// =========================== GERENCIAMENTO DE TURMAS =========================== //

// Função para pesquisar professores cadastrados no banco de dados
void TelaPrincipal::on_pesquisa_turma_clicked()
{
    // Definição das colunas da tabela de turmas
    int colunaId = 0;
    int colunaAlunos = 1;
    int colunaProfessores = 2;
    int colunaCurso = 3;
    int colunaModulo= 4;
    int colunaStatusDaTurma  = 5;
    int colunasSemanas = 6;

    // Definição dos cabeçalhos das colunas da tabela
    QStringList cabecalhosTurma = {"ID", "Alunos", "Professores", "Curso", "Módulo", "Status da Turma", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};

    // Consulta SQL para buscar todas as turmas cadastradas no banco de dados
    QSqlQuery query;
    query.prepare("select * from tb_turmas");
    query.exec();

    // Configuração inicial da tabela
    ui->tabelaTurmas->setRowCount(0);
    ui->tabelaTurmas->setColumnCount(cabecalhosTurma.size());

    int i = 0;
    while(query.next()) // Iteração sobre os resultados da query
    {
        ui->tabelaTurmas->insertRow(i); // Inserindo nova linha na tabela

        for(int j = 0; j < cabecalhosTurma.size(); j++)
        {
            // Processamento específico para a coluna de alunos
            if(j == colunaAlunos)
            {
                QString nomesAlunos;
                QString listaAlunos = query.value(j).toString();

                // Consulta SQL para buscar os nomes dos professores na tabela de professores a partir dos ids dos professores
                QSqlQuery queryAlunos;
                queryAlunos.prepare("select nome from tb_alunos where id_aluno in ("+listaAlunos+")");
                queryAlunos.exec();

                int k = 0;
                while(queryAlunos.next())
                {
                    // Formatação do campo de texto Alunos que será inserido na tabela
                    if(k == 0)
                    {
                        nomesAlunos = queryAlunos.value(0).toString();
                    }
                    else
                    {
                        nomesAlunos = nomesAlunos + ", " + queryAlunos.value(0).toString();
                    }
                    k++;
                }

                ui->tabelaTurmas->setItem(i, j, new QTableWidgetItem(nomesAlunos));
            }
            // Processamento específico para a coluna de professores
            else if(j == colunaProfessores)
            {
                QString nomesProfessores;
                QString listaProfessores = query.value(j).toString();

                // Consulta SQL para buscar os nomes dos professores na tabela de professores a partir dos ids dos professores
                QSqlQuery queryProfessores;
                queryProfessores.prepare("select nome from tb_professores where id_professor in ("+listaProfessores+")");
                queryProfessores.exec();

                int k = 0;
                while(queryProfessores.next())
                {
                    // Formatação do campo de texto Professores que será inserido na tabela
                    if(k == 0)
                    {
                        nomesProfessores = queryProfessores.value(0).toString();
                    }
                    else
                    {
                        nomesProfessores = nomesProfessores + ", " + queryProfessores.value(0).toString();
                    }
                    k++;
                }

                ui->tabelaTurmas->setItem(i, j, new QTableWidgetItem(nomesProfessores));
            }
            // Processamento para colunas normais
            else
            {
                ui->tabelaTurmas->setItem(i, j, new QTableWidgetItem(query.value(j).toString()));
            }
        }

        ui->tabelaTurmas->setRowHeight(i, 20); // Define a altura da linha
        i++;
    }

    // Ajustando as larguras das colunas para melhor exibição
    ui->tabelaTurmas->setColumnWidth(colunaId, 20);
    ui->tabelaTurmas->setColumnWidth(colunaAlunos, 150);
    ui->tabelaTurmas->setColumnWidth(colunaProfessores, 150);
    ui->tabelaTurmas->setColumnWidth(colunaCurso, 100);
    ui->tabelaTurmas->setColumnWidth(colunaModulo, 50);
    ui->tabelaTurmas->setColumnWidth(colunaStatusDaTurma, 100);

    for(int i = 0; i < 6; i++)
    {
        ui->tabelaTurmas->setColumnWidth(colunasSemanas + i, 150);
    }

    // Configurações visuais da tabela
    ui->tabelaTurmas->setWordWrap(true); // Ativa a quebra de linha automática nas células da tabela
    ui->tabelaTurmas->resizeRowsToContents(); // Ajusta a altura das linhas para se adaptarem ao conteúdo
    ui->tabelaTurmas->setHorizontalHeaderLabels(cabecalhosTurma);
    ui->tabelaTurmas->setEditTriggers(QAbstractItemView::NoEditTriggers); // Impede edição direta na tabela
    ui->tabelaTurmas->setSelectionBehavior(QAbstractItemView::SelectRows); // Seleciona linhas inteiras
    ui->tabelaTurmas->verticalHeader()->setVisible(false); // Oculta o cabeçalho vertical
    ui->tabelaTurmas->setStyleSheet("QTableView {selection-background-color:blue}"); // Define cor da seleção
}

// Função para abrir a janela de cadastro de turma
void TelaPrincipal::on_cadastra_turma_clicked()
{
    // Abre a janela de cadastro de nova turma
    cadastroTurma = new CadastroTurma(this);
    cadastroTurma->exec();
}

// Função para editar uma turma selecionado na tabela
void TelaPrincipal::on_edita_turma_clicked()
{
    int linha = ui->tabelaTurmas->currentRow(); // Obtém a linha selecionada na tabela
    QString id = ui->tabelaTurmas->item(linha, 0)->text();

    // Abre a janela de edição de turma com o ID da turma selecionada
    EditarTurma editarTurma(this, id);
    editarTurma.exec();

    this->on_pesquisa_turma_clicked(); // Atualiza a tabela após a edição
}

// Função para deletar uma turma selecionada
void TelaPrincipal::on_deleta_turma_clicked()
{
    // Obtém a linha selecionada e o ID da turma a ser deletada
    int linha = ui->tabelaTurmas->currentRow();
    QString id = ui->tabelaTurmas->item(linha, 0)->text();

    QSqlQuery query;
    query.prepare("delete from tb_turmas where id_turma =" + id);
    query.exec();

    // Remove a linha correspondente da interface gráfica
    ui->tabelaTurmas->removeRow(linha);
}
