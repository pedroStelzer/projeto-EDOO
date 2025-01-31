#ifndef ALUNO
#define ALUNO

#include <QString>
#include <QStringList>
#include <QMap>
#include <QtSql>

using namespace std;

// Classe que representa um aluno, armazenando seus dados pessoais e preferências de horários
class Aluno
{
private:
    QString id;  // Identificador único do aluno
    QString nome;  // Nome do aluno
    QString email;  // E-mail do aluno
    QString telefone;  // Telefone do aluno
    QString moduloAtual;  // Módulo atual em que o aluno está matriculado
    QMap<QString, QStringList> preferenciaDeHorarios;  // Preferências de horários do aluno

public:
    // Construtor da classe Aluno
    Aluno(QString a_id, QString a_nome, QString a_email, QString a_telefone, QString a_moduloAtual, QMap<QString, QStringList> a_preferenciaDeHorarios);

    // Destrutor da classe Aluno
    ~Aluno();

    // Métodos setters para definir valores dos atributos
    void setId(QString a_id);
    void setNome(QString a_nome);
    void setEmail(QString a_email);
    void setTelefone(QString a_telefone);
    void setModuloAtual(QString a_moduloAtual);
    void setPreferenciaDeHorarios(QMap<QString, QStringList> a_preferenciaDeHorarios);

    // Métodos getters para obter valores dos atributos
    QString getId();
    QString getNome();
    QString getEmail();
    QString getTelefone();
    QString getModuloAtual();
    QMap<QString, QStringList> getPreferenciaDeHorarios();

    // Função para adicionar os dados do aluno ao banco de dados
    void adicionarNoBancoDeDados();

    // Função para atualizar os dados do aluno no banco de dados
    void atualizarBancoDeDados();
};

#endif // ALUNO
