#ifndef INSTITUICAO_H
#define INSTITUICAO_H

#include <QString>
#include <vector>
#include <QtSql/QSqlQuery>

#include <QDebug>
#include <QMessageBox>

using namespace std;

class Instituicao
{
private:

    QString id;                 // Armazena o ID da instituição
    QString senha;              // Armazena a senha da instituição
    QString nome;               // Armazena o nome da instituição
    QString endereco;           // Armazena o endereço da instituição
    QString telefone;           // Armazena o telefone da instituição
    QString email;              // Armazena o email da instituição

public:

    Instituicao(QString i_id, QString i_senha, QString i_nome, QString i_endereco, QString i_telefone, QString i_email);
    ~Instituicao();

    // Métodos setters para definir os valores dos atributos
    void setId(QString i_id);
    void setSenha(QString i_senha);
    void setNome(QString i_nome);
    void setEndereco(QString i_endereco);
    void setTelefone(QString i_telefone);
    void setEmail(QString i_email);

    // Métodos getters para obter os valores dos atributos
    QString getId();
    QString getSenha();
    QString getNome();
    QString getEndereco();
    QString getTelefone();
    QString getEmail();

    void adicionarNoBancoDeDados(); // Método para adicionar a instituição no banco de dados
};

#endif // INSTITUICAO_H
