#include "cadastroturma.h"
#include "ui_cadastroturma.h"

// Construtor da classe CadastroTurma
CadastroTurma::CadastroTurma(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CadastroTurma)
{
    ui->setupUi(this);

    // =========================== GERAR TABELA DE ALUNOS =========================== //

    // Definir colunas da tabela de alunos
    int colunaIdAlunos = 0;
    int colunaNomeAlunos = 1;
    int colunaModuloAlunos = 2;
    int colunasSemanasAlunos = 3;

    // Cabeçalhos da tabela de alunos
    QStringList cabecalhosAlunos = {"ID", "Alunos", "Módulo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};

    // Consulta SQL para pegar dados dos alunos
    QSqlQuery queryAlunos;
    queryAlunos.prepare("select id_aluno, nome, modulo, segunda, terca, quarta, quinta, sexta, sabado from tb_alunos");
    queryAlunos.exec();

    // Configuração inicial da tabela
    ui->tabelaSelecionaAlunos->setRowCount(0);
    ui->tabelaSelecionaAlunos->setColumnCount(cabecalhosAlunos.size());

    // Preenche a tabela de alunos com os dados
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

    // Ajustar colunas de dias da semana
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
    connect(ui->tabelaSelecionaAlunos, &QTableWidget::itemSelectionChanged, this, &CadastroTurma::atualizarListaDeSelecionadosAlunos);


    // =========================== GERAR TABELA DE PROFESSORES =========================== //

    // Definir colunas da tabela de professores
    int colunaIdProfessores = 0;
    int colunaNomeProfessores = 1;
    int colunasSemanasProfessores = 2;

    // Cabeçalhos da tabela de professores
    QStringList cabecalhosProfessores = {"ID", "Professores", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};

    // Consulta SQL para pegar dados dos professores
    QSqlQuery queryProfessores;
    queryProfessores.prepare("select id_professor, nome, segunda, terca, quarta, quinta, sexta, sabado from tb_professores");
    queryProfessores.exec();

    // Configuração inicial da tabela
    ui->tabelaSelecionaProfessores->setRowCount(0);
    ui->tabelaSelecionaProfessores->setColumnCount(cabecalhosProfessores.size());

    // Preenche a tabela de professores com os dados
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

    // Ajustar larguras das colunas
    ui->tabelaSelecionaProfessores->setColumnWidth(colunaNomeProfessores, 100);

    // Ajustar colunas de dias da semana
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
    connect(ui->tabelaSelecionaProfessores, &QTableWidget::itemSelectionChanged, this, &CadastroTurma::atualizarListaDeSelecionadosProfessores);
}

// Destruidor da classe CadastroTurma
CadastroTurma::~CadastroTurma()
{
    delete ui;
}

// Função para obter os IDs dos alunos selecionados
QStringList CadastroTurma::getIdsAlunosSelecionados()
{
    return idsAlunosSelecionados;
};

// Função para obter os IDs dos professores selecionados
QStringList CadastroTurma::getIdsProfessoresSelecionados()
{
    return idsProfessoresSelecionados;
};

// Slot chamado quando o botão de selecionar horários da turma é clicado
void CadastroTurma::on_botaoSelecionarHorarios_clicked()
{
    horariosTurma = new HorariosTurma(this); // Cria uma instância de HorariosTurma
    horariosTurma->exec(); // Exibe a janela de horários
}

// Slot chamado quando o botão de cadastrar a turma é clicado
void CadastroTurma::on_botaoCadastrar_clicked()
{
    QMap<QString, QStringList> horariosSelecionados;
    QStringList idAlunos, idProfessor;
    QString curso, modulo, statusDaTurma;

    // Coleta as informações fornecidas pelo usuário
    curso = ui->cursoLineEdit->text();
    modulo = ui->moduloLineEdit->text();
    statusDaTurma = ui->statusDaTurmaLineEdit->text();

    // Obtém os IDs selecionados de alunos e professore
    idAlunos = this->getIdsAlunosSelecionados();
    idProfessor = this->getIdsProfessoresSelecionados();

    // Obtém os horários selecionados
    horariosSelecionados = horariosTurma->getHorariosSelecionados();

     // Cria uma instância de Turma com os dados fornecidos
    Turma turma("0", curso, modulo, statusDaTurma, idProfessor, idAlunos, horariosSelecionados);

    turma.adicionarNoBancoDeDados(); // Adiciona a turma no banco de dados

    this->close(); // Fecha a janela de cadastro
}

// Slot chamado quando o botão de cancelar cadastro é clicado
void CadastroTurma::on_botaoCancelar_clicked()
{
    this->close(); // Fecha a janela de cadastro
}

// Atualiza a lista de IDs de alunos selecionados
void CadastroTurma::atualizarListaDeSelecionadosAlunos()
{
    idsAlunosSelecionados.clear(); // Limpa a lista de IDs selecionados

    QList<QTableWidgetItem *> itensSelecionados = ui->tabelaSelecionaAlunos->selectedItems(); // Obtém os itens selecionados

    QSet<QString> idsUnicos; // Usar um conjunto para evitar IDs duplicados

    for (QTableWidgetItem *item : itensSelecionados)
    {
        int row = item->row(); // Pega a linha do item selecionado
        QString id = ui->tabelaSelecionaAlunos->item(row, 0)->text(); // ID está na primeira coluna (0)
        idsUnicos.insert(id); // Insere o ID no conjunto
    }

    idsAlunosSelecionados = QStringList(idsUnicos.begin(), idsUnicos.end()); // Atualiza a lista com os IDs únicos
}

// Atualiza a lista de IDs de professores selecionados
void CadastroTurma::atualizarListaDeSelecionadosProfessores()
{
    idsProfessoresSelecionados.clear(); // Limpa a lista de IDs selecionados

    QList<QTableWidgetItem *> itensSelecionados = ui->tabelaSelecionaProfessores->selectedItems(); // Obtém os itens selecionados

    QSet<QString> idsUnicos; // Usar um conjunto para evitar IDs duplicados

    for (QTableWidgetItem *item : itensSelecionados)
    {
        int row = item->row(); // Pega a linha do item selecionado
        QString id = ui->tabelaSelecionaProfessores->item(row, 0)->text(); // ID está na primeira coluna (0)
        idsUnicos.insert(id); // Insere o ID no conjunto
    }

    idsProfessoresSelecionados = QStringList(idsUnicos.begin(), idsUnicos.end()); // Atualiza a lista com os IDs únicos
}
