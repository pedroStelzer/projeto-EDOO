#include "instituicao.h"

Instituicao::Instituicao(QString i_id, QString i_senha, QString i_nome, QString i_endereco, QString i_telefone, QString i_email)
{
    // Construtor que inicializa os atributos da classe Instituicao
    id = i_id;
    senha = i_senha;
    nome = i_nome;
    endereco = i_endereco;
    telefone = i_telefone;
    email = i_email;
};

Instituicao::~Instituicao()
{

};

// Método setter para o atributo id
void Instituicao::setId(QString i_id)
{
    id = i_id;
};

// Método setter para o atributo senha
void Instituicao::setSenha(QString i_senha)
{
    senha = i_senha;
};

// Método setter para o atributo nome
void Instituicao::setNome(QString i_nome)
{
    nome = i_nome;
};

// Método setter para o atributo endereco
void Instituicao::setEndereco(QString i_endereco)
{
    endereco = i_endereco;
};

// Método setter para o atributo telefone
void Instituicao::setTelefone(QString i_telefone)
{
    telefone = i_telefone;
};

// Método setter para o atributo email
void Instituicao::setEmail(QString i_email)
{
    email = i_email;
};

// Método getter para o atributo id
QString Instituicao::getId()
{
    return id;
};

// Método getter para o atributo senha
QString Instituicao::getSenha()
{
    return senha;
};

// Método getter para o atributo nome
QString Instituicao::getNome()
{
    return nome;
};

// Método getter para o atributo endereço
QString Instituicao::getEndereco()
{
    return endereco;
};

// Método getter para o atributo telefone
QString Instituicao::getTelefone()
{
    return telefone;
};

// Método getter para o atributo email
QString Instituicao::getEmail()
{
    return email;
};

// Método para adicionar o aluno no banco de dados
void Instituicao::adicionarNoBancoDeDados()
{
     // Prepara a consulta SQL para inserir o aluno na tabela "tb_alunos"
    QSqlQuery query;
    query.prepare("insert into tb_instituicao (senha, nome, endereco, telefone, email) values"
                  "('"+this->getSenha()+"', '"+this->getNome()+"', '"+this->getEndereco()+"', '"+this->getTelefone()+"', '"+this->getEmail()+"')");
    query.exec();
};
