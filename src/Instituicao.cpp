#include <iostream>
#include "../Classes/Instituicao.h"

Instituicao::Instituicao(string i_id, string i_nome, string i_endereco, string i_telefone, string i_email, vector<string> i_idTurmasDisponiveis, vector<string> i_professores)
{
    id = i_id;
    nome = i_nome;
    endereco = i_endereco;
    telefone = i_telefone;
    email = i_email;
    for(int i = 0; i < i_idTurmasDisponiveis.size(); i++)
    {
        idTurmasDisponiveis.push_back(i_idTurmasDisponiveis[i]);
    };
    for(int i = 0; i < i_professores.size(); i++)
    {
        professores.push_back(i_professores[i]);
    };
};

Instituicao::~Instituicao()
{

};

void Instituicao::setId(string i_id)
{
    id = i_id;
};

void Instituicao::setNome(string i_nome)
{
    nome = i_nome;
};

void Instituicao::setEndereco(string i_endereco)
{
    endereco = i_endereco;
};

void Instituicao::setTelefone(string i_telefone)
{
    telefone = i_telefone;
};

void Instituicao::setEmail(string i_email)
{
    email = i_email;
};

void Instituicao::setTurmasDisponiveis(vector<string> i_idTurmasDisponiveis)
{
    for(int i = 0; i < i_idTurmasDisponiveis.size(); i++)
    {
        idTurmasDisponiveis.push_back(i_idTurmasDisponiveis[i]);
    };
};

void Instituicao::setProfessores(vector<string> i_professores)
{
    for(int i = 0; i < i_professores.size(); i++)
    {
        professores.push_back(i_professores[i]);
    };
};

string Instituicao::getId()
{
    return id;
};

string Instituicao::getNome()
{
    return nome;
};

string Instituicao::getEndereco()
{
    return endereco;
};

string Instituicao::getTelefone()
{
    return telefone;
};

string Instituicao::getEmail()
{
    return email;
};

vector<string> Instituicao::getIdTurmasDisponiveis()
{
    return idTurmasDisponiveis;
};

vector<string> Instituicao::getProfessores()
{
    return professores;
};

void Instituicao::criarTurma()
{

};

void Instituicao::removerTurma()
{

};

void Instituicao::removerSolicitacaoDeTurma()
{

};

vector<Turma> Instituicao::verificarTurmasCriadas()
{

};

void Instituicao::adicionarProfessor()
{
    
};