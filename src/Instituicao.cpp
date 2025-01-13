#include <iostream>
#include "../Classes/Instituicao.h"

Instituicao::Instituicao(string i_id, string i_nome, string i_endereco, string i_telefone, string i_email, vector<string> i_idTurmasDisponiveis, vector<string> i_listaDeProfessores)
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
    for(int i = 0; i < i_listaDeProfessores.size(); i++)
    {
        listaDeProfessores.push_back(i_listaDeProfessores[i]);
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

void Instituicao::setListaDeProfessores(vector<string> i_listaDeProfessores)
{
    for(int i = 0; i < i_listaDeProfessores.size(); i++)
    {
        listaDeProfessores.push_back(i_listaDeProfessores[i]);
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

vector<string> Instituicao::getListaDeProfessores()
{
    return listaDeProfessores;
};

void Instituicao::criarTurma(string i_id, string i_curso, string i_modulo, string i_horario, string i_statusDaTurma, vector<string> i_matriculas, string i_professor)
{
    Turma *t = new Turma(i_id, i_curso, i_modulo, i_horario, i_statusDaTurma, i_matriculas, i_professor);
};

void Instituicao::removerTurma()
{

};

vector<Turma> Instituicao::verificarTurmasCriadas()
{

};

void Instituicao::adicionarProfessor(string i_professsor)
{
    listaDeProfessores.push_back(i_professsor);
};

void Instituicao::removerProfessor(string i_professor)
{
    bool encontrou = false;
    for(int i = 0; i < listaDeProfessores.size(); i++)
    {
        if(listaDeProfessores[i] == i_professor || encontrou)
        {
            listaDeProfessores[i] = listaDeProfessores[i+1];
            encontrou = true;
        }
    }

    listaDeProfessores.resize(listaDeProfessores.size()-1);
};