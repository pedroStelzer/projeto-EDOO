#include "horariosalunos.h"
#include "ui_horariosalunos.h"

// Construtor da classe HorariosAlunos
HorariosAlunos::HorariosAlunos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HorariosAlunos)
{
    ui->setupUi(this);

    // Criação de um layout do tipo grid (tabela) para organizar os botões e rótulos
    QGridLayout *layout = new QGridLayout(this);

    // Listas de dias e horários
    QStringList dias = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};
    QStringList horarios = {"08:00", "09:00", "10:00", "11:00", "12:00", "13:00", "14:00", "15:00", "16:00", "17:00", "18:00"};

    // Adicionar os dias como cabeçalho da primeira linha
    for (int i = 0; i < dias.size(); ++i) {
        QLabel *label = new QLabel(dias[i]); // Cria um rótulo (QLabel) para cada dia
        label->setFixedHeight(30); // Define a altura do rótulo
        label->setAlignment(Qt::AlignCenter); // Centralizar o texto
        layout->addWidget(label, 0, i + 1); // Adiciona o rótulo ao layout na primeira linha
    }

    // Criação dos botões para os horários
    for (int i = 0; i < dias.size(); ++i) { // Itera pelos dias
        for (int j = 0; j < horarios.size(); ++j) { // Itera pelos horários
            QPushButton *botao = new QPushButton(horarios[j]); // Cria um botão para cada horário
            botao->setCheckable(true); // Botão alterna entre selecionado e não selecionado

            // Conecte o botão à lógica de seleção
            connect(botao, &QPushButton::toggled, this, [this, botao, dias, horarios, i, j](bool checked) {
                QString dia = dias[i];        // Dia correspondente ao botão
                QString horario = horarios[j]; // Horário correspondente ao botão

                // Modificar o estilo do botão
                botao->setStyleSheet(checked ? "background-color: green; color: white;" : "");

                // Atualizar o dicionário de horários
                QStringList listaHorarios = horariosSelecionados.value(dia); // Obter lista atual (ou vazia)
                if (checked) {
                    if (!listaHorarios.contains(horario)) {
                        listaHorarios.append(horario); // Adicionar horário
                    }
                } else {
                    listaHorarios.removeAll(horario); // Remover horário
                }
                horariosSelecionados[dia] = listaHorarios; // Atualizar o dicionário
            });

            // Adiciona o botão de horário ao layout na posição correta
            layout->addWidget(botao, j + 1, i + 1);
        }
    }

    // Criar o botão Confirmar
    QPushButton *botaoConfirmar = new QPushButton("Confirmar");

    botaoConfirmar->setFixedSize(100, 20); // Modifica a largura

    // Conectar o botão Confirmar a uma função que será chamada quando o botão for pressionado
    connect(botaoConfirmar, &QPushButton::clicked, this, &HorariosAlunos::onConfirmarClicked);

    // Adicionar o botão ao layout, posicionando-o embaixo dos botões de horários
    layout->addWidget(botaoConfirmar, horarios.size() + 1, 0, 1, dias.size());

    // Aplicar layout à janela principal
    this->setLayout(layout);
}

// Destruidor da classe
HorariosAlunos::~HorariosAlunos()
{
    delete ui;
}

// Método para obter os horários selecionados
QMap<QString, QStringList> HorariosAlunos::getHorariosSelecionados()
{
    return horariosSelecionados;
};

// Função chamada quando o botão Confirmar é pressionado
void HorariosAlunos::onConfirmarClicked()
{
    this->close(); // Fecha a janela
}
