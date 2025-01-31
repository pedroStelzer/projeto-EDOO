#include "professor.h"

using namespace std;

Professor::Professor(QString p_id, QString p_nome, QString p_email, QString p_telefone, QMap<QString, QStringList> p_preferenciaDeHorarios)
{
    // Construtor que inicializa os atributos da classe Professor
    id = p_id;
    nome = p_nome;
    email = p_email;
    telefone = p_telefone;
    preferenciaDeHorarios = p_preferenciaDeHorarios;
};

Professor::~Professor()
{

};

// Método setter para o atributo id
void Professor::setId(QString p_id)
{
    id = p_id;
};

// Método setter para o atributo nome
void Professor::setNome(QString p_nome)
{
    nome = p_nome;
};

// Método setter para o atributo email
void Professor::setEmail(QString p_email)
{
    email = p_email;
};

// Método setter para o atributo telefone
void Professor::setTelefone(QString p_telefone)
{
    telefone = p_telefone;
};

// Método setter para o atributo preferenciaDeHorarios
void Professor::setPreferenciaDeHorarios(QMap<QString, QStringList> a_preferenciaDeHorarios)
{
    preferenciaDeHorarios = a_preferenciaDeHorarios;
};

// Método getter para o atributo id
QString Professor::getId()
{
    return id;
};

// Método getter para o atributo nome
QString Professor::getNome()
{
    return nome;
};

// Método getter para o atributo email
QString Professor::getEmail()
{
    return email;
};

// Método getter para o atributo telefone
QString Professor::getTelefone()
{
    return telefone;
};

// Método getter para o atributo preferenciaDeHorarios
QMap<QString, QStringList> Professor::getPreferenciaDeHorarios()
{
    return preferenciaDeHorarios;
};

// Método para adicionar o professor no banco de dados
void Professor::adicionarNoBancoDeDados()
{
    // Recupera as preferências de horários para cada dia da semana
    QString segunda = getPreferenciaDeHorarios()["Segunda"].join(", ");
    QString terca = getPreferenciaDeHorarios()["Terça"].join(", ");
    QString quarta = getPreferenciaDeHorarios()["Quarta"].join(", ");
    QString quinta = getPreferenciaDeHorarios()["Quinta"].join(", ");
    QString sexta = getPreferenciaDeHorarios()["Sexta"].join(", ");
    QString sabado = getPreferenciaDeHorarios()["Sábado"].join(", ");

     // Prepara a consulta SQL para inserir o profeesor na tabela "tb_professores"
    QSqlQuery query;
    query.prepare("insert into tb_professores (nome, email, telefone, segunda, terca, quarta, quinta, sexta, sabado) values"
                  "('"+this->getNome()+"', '"+this->getEmail()+"', '"+this->getTelefone()+"', '"+segunda+"', '"+terca+"', '"+quarta+"', '"+quinta+"', '"+sexta+"', '"+sabado+"')");
    query.exec();
};

// Método para atualizar as informações do professor no banco de dados
void Professor::atualizarBancoDeDados()
{

    // Recupera as preferências de horários para cada dia da semana
    QString segunda = getPreferenciaDeHorarios()["Segunda"].join(", ");
    QString terca = getPreferenciaDeHorarios()["Terça"].join(", ");
    QString quarta = getPreferenciaDeHorarios()["Quarta"].join(", ");
    QString quinta = getPreferenciaDeHorarios()["Quinta"].join(", ");
    QString sexta = getPreferenciaDeHorarios()["Sexta"].join(", ");
    QString sabado = getPreferenciaDeHorarios()["Sábado"].join(", ");

    // Prepara a consulta SQL para atualizar as informações do professor na tabela "tb_professores"
    QSqlQuery query;
    query.prepare("update tb_professores set nome = '"+ this->getNome() +"', telefone = '"+ this->getTelefone() +"', email = '"+ this->getEmail() +"', segunda = '"+ segunda +"', terca = '"+ terca +"', quarta = '"+ quarta +"', quinta = '"+ quinta +"', sexta = '"+ sexta +"', sabado = '"+ sabado +"' where id_professor = "+this->getId());
    query.exec();
};
