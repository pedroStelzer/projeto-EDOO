#include "aluno.h"

using namespace std;

Aluno::Aluno(QString a_id, QString a_nome, QString a_email, QString a_telefone, QString a_moduloAtual, QMap<QString, QStringList> a_preferenciaDeHorarios)
{
    // Construtor que inicializa os atributos da classe Aluno
    id = a_id;
    nome = a_nome;
    email = a_email;
    telefone = a_telefone;
    moduloAtual = a_moduloAtual;
    preferenciaDeHorarios = a_preferenciaDeHorarios;
};

Aluno::~Aluno()
{

};

// Método setter para o atributo id
void Aluno::setId(QString a_id)
{
    id = a_id;
};

// Método setter para o atributo nome
void Aluno::setNome(QString a_nome)
{
    nome = a_nome;
};

// Método setter para o atributo email
void Aluno::setEmail(QString a_email)
{
    email = a_email;
};

// Método setter para o atributo telefone
void Aluno::setTelefone(QString a_telefone)
{
    telefone = a_telefone;
};

// Método setter para o atributo moduloAtual
void Aluno::setModuloAtual(QString a_moduloAtual)
{
    moduloAtual = a_moduloAtual;
}

// Método setter para o atributo preferenciaDeHorarios (Dicionário de horários)
void Aluno::setPreferenciaDeHorarios(QMap<QString, QStringList> a_preferenciaDeHorarios)
{
    preferenciaDeHorarios = a_preferenciaDeHorarios;
};

// Método getter para o atributo id
QString Aluno::getId()
{
    return id;
};

// Método getter para o atributo nome
QString Aluno::getNome()
{
    return nome;
};

// Método getter para o atributo email
QString Aluno::getEmail()
{
    return email;
};

// Método getter para o atributo telefone
QString Aluno::getTelefone()
{
    return telefone;
};

// Método getter para o atributo moduloAtual
QString Aluno::getModuloAtual()
{
    return moduloAtual;
};

// Método getter para o atributo preferenciaDeHorarios (Dicionário de horários)
QMap<QString, QStringList> Aluno::getPreferenciaDeHorarios()
{
    return preferenciaDeHorarios;
};

// Método para adicionar o aluno no banco de dados
void Aluno::adicionarNoBancoDeDados()
{
    // Recupera as preferências de horários para cada dia da semana
    QString segunda = getPreferenciaDeHorarios()["Segunda"].join(", ");
    QString terca = getPreferenciaDeHorarios()["Terça"].join(", ");
    QString quarta = getPreferenciaDeHorarios()["Quarta"].join(", ");
    QString quinta = getPreferenciaDeHorarios()["Quinta"].join(", ");
    QString sexta = getPreferenciaDeHorarios()["Sexta"].join(", ");
    QString sabado = getPreferenciaDeHorarios()["Sábado"].join(", ");

    // Prepara a consulta SQL para inserir o aluno na tabela "tb_alunos"
    QSqlQuery query;
    query.prepare("insert into tb_alunos (nome, telefone, email, modulo, segunda, terca, quarta, quinta, sexta, sabado) values"
                  "('"+this->getNome()+"', '"+this->getTelefone()+"', '"+this->getEmail()+"', '"+this->getModuloAtual()+"', '"+segunda+"', '"+terca+"', '"+quarta+"', '"+quinta+"', '"+sexta+"', '"+sabado+"')");
    query.exec(); // Executa a consulta no banco de dados
};

// Método para atualizar as informações do aluno no banco de dados
void Aluno::atualizarBancoDeDados()
{
    // Recupera as preferências de horários para cada dia da semana
    QString segunda = getPreferenciaDeHorarios()["Segunda"].join(", ");
    QString terca = getPreferenciaDeHorarios()["Terça"].join(", ");
    QString quarta = getPreferenciaDeHorarios()["Quarta"].join(", ");
    QString quinta = getPreferenciaDeHorarios()["Quinta"].join(", ");
    QString sexta = getPreferenciaDeHorarios()["Sexta"].join(", ");
    QString sabado = getPreferenciaDeHorarios()["Sábado"].join(", ");

    // Prepara a consulta SQL para atualizar as informações do aluno na tabela "tb_alunos"
    QSqlQuery query;
    query.prepare("update tb_alunos set nome = '"+ this->getNome() +"', telefone = '"+ this->getTelefone() +"', email = '"+ this->getEmail() +"', modulo = '"+ this->getModuloAtual() +"', segunda = '"+ segunda +"', terca = '"+ terca +"', quarta = '"+ quarta +"', quinta = '"+ quinta +"', sexta = '"+ sexta +"', sabado = '"+ sabado +"' where id_aluno = "+this->getId());
    query.exec(); // Executa a consulta de atualização no banco de dados
}
