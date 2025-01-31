#ifndef PROFESSOR
#define PROFESSOR

#include <QString>
#include <QStringList>
#include <QMap>
#include <QtSql>
#include <QDebug>

using namespace std;

class Professor
{
private:

    QString nome;                // Armazena o nome do professor
    QString id;                  // Armazena o ID do professor
    QString email;               // Armazena o email do professor
    QString telefone;            // Armazena o telefone do professor
    QMap<QString, QStringList> preferenciaDeHorarios; // Armazena as preferências de horários do professor (chave: dias da semana, valor: lista de horários)

public:

    Professor(QString p_id, QString p_nome, QString p_email, QString p_telefone, QMap<QString, QStringList> p_preferenciaDeHorarios);
    ~Professor();

    // Métodos setters para definir os valores dos atributos
    void setNome(QString p_nome);
    void setId(QString p_id);
    void setEmail(QString p_email);
    void setTelefone(QString p_telefone);
    void setPreferenciaDeHorarios(QMap<QString, QStringList> a_preferenciaDeHorarios);

    // Métodos getters para obter os valores dos atributos
    QString getNome();
    QString getId();
    QString getEmail();
    QString getTelefone();
    QMap<QString, QStringList> getPreferenciaDeHorarios();

    // Métodos para adicionar e atualizar os dados do professor no banco de dados
    void adicionarNoBancoDeDados();
    void atualizarBancoDeDados();
};

#endif // PROFESSOR
