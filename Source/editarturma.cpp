#include "editarturma.h"
#include "ui_editarturma.h"

static QString idTurma; // Variável estática para armazenar o ID da turma

EditarTurma::EditarTurma(QWidget *parent, QString id_turma)
    : QDialog(parent)
    , ui(new Ui::EditarTurma)
{
    ui->setupUi(this);

    idTurma = id_turma;

    // =========================== GERAR TABELA DE ALUNOS =========================== //

    // Realiza uma consulta SQL para buscar os dados da turma no banco de dados
    QSqlQuery query;
    query.prepare("select * from tb_turmas where id_turma =" + idTurma);
    query.exec();

    query.first(); // Move para o primeiro resultado da consulta

    // Preenche os campos de texto na interface com os dados da turma
    ui->cursoLineEdit->setText(query.value(3).toString());
    ui->moduloLineEdit->setText(query.value(4).toString());
    ui->statusDaTurmaLineEdit->setText(query.value(5).toString());

    // Definir a coluna onde ficará o ID (fora da exibição)
    int colunaIdAlunos = 0;
    int colunaNomeAlunos = 1;
    int colunaModuloAlunos = 2;
    int colunasSemanasAlunos = 3;

    QStringList cabecalhosAlunos = {"ID", "Alunos", "Módulo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};

    // Consulta SQL para obter os dados dos alunos
    QSqlQuery queryAlunos;
    queryAlunos.prepare("select id_aluno, nome, modulo, segunda, terca, quarta, quinta, sexta, sabado from tb_alunos");
    queryAlunos.exec();

    // Configuração inicial da tabela
    ui->tabelaSelecionaAlunos->setRowCount(0);
    ui->tabelaSelecionaAlunos->setColumnCount(cabecalhosAlunos.size());

    // Preenche a tabela de alunos com os dados da consulta SQL
    int i = 0;
    while (queryAlunos.next())
    {
        ui->tabelaSelecionaAlunos->insertRow(i);

        for (int j = 0; j < cabecalhosAlunos.size(); j++)
        {
            ui->tabelaSelecionaAlunos->setItem(i, j, new QTableWidgetItem(queryAlunos.value(j).toString()));
        }

        ui->tabelaSelecionaAlunos->setRowHeight(i, 20);
        i++;
    }

    // Ajustar larguras das colunas
    ui->tabelaSelecionaAlunos->setColumnWidth(colunaNomeAlunos, 100);
    ui->tabelaSelecionaAlunos->setColumnWidth(colunaModuloAlunos, 70);

    // Ajuste das colunas para os dias da semana
    for (int i = 0; i < cabecalhosAlunos.size() - 3; i++)
    {
        ui->tabelaSelecionaAlunos->setColumnWidth(colunasSemanasAlunos + i, 100);
    }

    // Ocultar a coluna de ID para não ser visível ao usuário
    ui->tabelaSelecionaAlunos->setColumnHidden(colunaIdAlunos, true);

    // Configurações visuais da tabela
    ui->tabelaSelecionaAlunos->setWordWrap(true); // Ativa a quebra de linha automática nas células da tabela
    ui->tabelaSelecionaAlunos->resizeRowsToContents(); // Ajusta a altura das linhas para se adaptarem ao conteúdo
    ui->tabelaSelecionaAlunos->setHorizontalHeaderLabels(cabecalhosAlunos);
    ui->tabelaSelecionaAlunos->setEditTriggers(QAbstractItemView::NoEditTriggers); // Impede edição direta na tabela
    ui->tabelaSelecionaAlunos->setSelectionBehavior(QAbstractItemView::SelectRows); // Seleciona linhas inteiras
    ui->tabelaSelecionaAlunos->setSelectionMode(QAbstractItemView::MultiSelection); // Permite múltiplas seleções
    ui->tabelaSelecionaAlunos->verticalHeader()->setVisible(false); // Oculta o cabeçalho vertical
    ui->tabelaSelecionaAlunos->setStyleSheet("QTableView {selection-background-color:blue;}"); // Define cor da seleção

    // Conectar a seleção da tabela ao slot para capturar os IDs selecionados
    connect(ui->tabelaSelecionaAlunos, &QTableWidget::itemSelectionChanged, this, &EditarTurma::atualizarListaDeSelecionadosAlunos);


    // =========================== GERAR TABELA DE PROFESSORES =========================== //

    // Definir a coluna onde ficará o ID (fora da exibição) para a tabela de professores
    int colunaIdProfessores = 0;
    int colunaNomeProfessores = 1;
    int colunasSemanasProfessores = 2;

    QStringList cabecalhosProfessores = {"ID", "Professores", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};

    // Consulta SQL para obter os dados dos professores
    QSqlQuery queryProfessores;
    queryProfessores.prepare("select id_professor, nome, segunda, terca, quarta, quinta, sexta, sabado from tb_professores");
    queryProfessores.exec();

    // Configuração inicial da tabela
    ui->tabelaSelecionaProfessores->setRowCount(0);
    ui->tabelaSelecionaProfessores->setColumnCount(cabecalhosProfessores.size());

    // Preenche a tabela de alunos com os dados da consulta SQL
    i = 0;
    while(queryProfessores.next())
    {
        ui->tabelaSelecionaProfessores->insertRow(i);

        for(int j = 0; j < cabecalhosProfessores.size(); j++)
        {
            ui->tabelaSelecionaProfessores->setItem(i, j, new QTableWidgetItem(queryProfessores.value(j).toString()));
        }

        ui->tabelaSelecionaProfessores->setRowHeight(i, 20);

        i++;
    }

    // Ajuste de largura das colunas para os dados de professores
    ui->tabelaSelecionaProfessores->setColumnWidth(colunaNomeProfessores, 100);

    // Ajuste das colunas para os dias da semana
    for(int i = 0; i < cabecalhosProfessores.size()-1; i++)
    {
        ui->tabelaSelecionaProfessores->setColumnWidth(colunasSemanasProfessores + i, 100);
    }

    // Ocultar a coluna de ID para não ser visível ao usuário
    ui->tabelaSelecionaProfessores->setColumnHidden(colunaIdProfessores, true);

    // Configurações visuais da tabela
    ui->tabelaSelecionaProfessores->setWordWrap(true); // Ativa a quebra de linha automática nas células da tabela
    ui->tabelaSelecionaProfessores->resizeRowsToContents(); // Ajusta a altura das linhas para se adaptarem ao conteúdo
    ui->tabelaSelecionaProfessores->setHorizontalHeaderLabels(cabecalhosProfessores);
    ui->tabelaSelecionaProfessores->setEditTriggers(QAbstractItemView::NoEditTriggers); // Impede edição direta na tabela
    ui->tabelaSelecionaProfessores->setSelectionBehavior(QAbstractItemView::SelectRows); // Seleciona linhas inteiras
    ui->tabelaSelecionaProfessores->setSelectionMode(QAbstractItemView::MultiSelection); // Permite múltiplas seleções
    ui->tabelaSelecionaProfessores->verticalHeader()->setVisible(false); // Oculta o cabeçalho vertical
    ui->tabelaSelecionaProfessores->setStyleSheet("QTableView {selection-background-color:blue}"); // Define cor da seleção

    // Conectar a seleção da tabela ao slot para capturar os IDs selecionados
    connect(ui->tabelaSelecionaProfessores, &QTableWidget::itemSelectionChanged, this, &EditarTurma::atualizarListaDeSelecionadosProfessores);
}

EditarTurma::~EditarTurma()
{
    delete ui;
}

// Função que retorna o ID da turma
QString getIdTurma()
{
    return idTurma;
}

// Métodos para retornar as listas de IDs de alunos e professores selecionados
QStringList EditarTurma::getIdsAlunosSelecionados()
{
    return idsAlunosSelecionados;
};

QStringList EditarTurma::getIdsProfessoresSelecionados()
{
    return idsProfessoresSelecionados;
};

// Método que abre a tela de edição de horários da turma
void EditarTurma::on_botaoEditarHorarios_clicked()
{
    horariosTurma = new HorariosTurma(this); // Cria um novo objeto de edição de horários
    horariosTurma->exec(); // Exibe a tela de edição de horários
}

// Método que confirma as alterações feitas na turma
void EditarTurma::on_botaoConfirmar_clicked()
{
    QMap<QString, QStringList> horariosSelecionados;
    QStringList idAlunos, idProfessor;
    QString curso, modulo, statusDaTurma;

     // Obtém os dados inseridos pelo usuário na interface
    curso = ui->cursoLineEdit->text();
    modulo = ui->moduloLineEdit->text();
    statusDaTurma = ui->statusDaTurmaLineEdit->text();

    idAlunos = this->getIdsAlunosSelecionados();
    idProfessor = this->getIdsProfessoresSelecionados();

    horariosSelecionados = horariosTurma->getHorariosSelecionados();

    // Cria um objeto Turma com as novas informações
    Turma turma(idTurma, curso, modulo, statusDaTurma, idProfessor, idAlunos, horariosSelecionados);

    turma.atualizarBancoDeDados(); // Atualiza os dados da turma no banco de dados

    this->close(); // Fecha a janela de edição de turma
}

// Método que cancela a edição da turma
void EditarTurma::on_botaoCancelar_clicked()
{
    this->close(); // Fecha a janela de edição
}

// Método que atualiza a lista de alunos selecionados com base na seleção da tabela
void EditarTurma::atualizarListaDeSelecionadosAlunos()
{
    idsAlunosSelecionados.clear(); // Limpa a lista de alunos selecionados

    QList<QTableWidgetItem *> itensSelecionados = ui->tabelaSelecionaAlunos->selectedItems();

    QSet<QString> idsUnicos; // Usar um conjunto para evitar IDs duplicados

    for (QTableWidgetItem *item : itensSelecionados)
    {
        int row = item->row(); // Pega a linha do item selecionado
        QString id = ui->tabelaSelecionaAlunos->item(row, 0)->text(); // ID está na primeira coluna (0)
        idsUnicos.insert(id);
    }

    // Converte o conjunto de IDs únicos para uma lista
    idsAlunosSelecionados = QStringList(idsUnicos.begin(), idsUnicos.end());
}

// Método que atualiza a lista de professores selecionados com base na seleção da tabela
void EditarTurma::atualizarListaDeSelecionadosProfessores()
{
    idsProfessoresSelecionados.clear(); // Limpa a lista de professores selecionados

    QList<QTableWidgetItem *> itensSelecionados = ui->tabelaSelecionaProfessores->selectedItems();

    QSet<QString> idsUnicos; // Usar um conjunto para evitar IDs duplicados

    for (QTableWidgetItem *item : itensSelecionados)
    {
        int row = item->row(); // Pega a linha do item selecionado
        QString id = ui->tabelaSelecionaProfessores->item(row, 0)->text(); // ID está na primeira coluna (0)
        idsUnicos.insert(id);
    }

    idsProfessoresSelecionados = QStringList(idsUnicos.begin(), idsUnicos.end()); // Converte o conjunto de IDs únicos para uma lista
}
