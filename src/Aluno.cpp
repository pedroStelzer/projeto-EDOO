#include <iostream>
#include "../Classes/Aluno.h"

using namespace std;

Aluno::Aluno(string a_nome, string a_matricula, string a_email, string a_telefone, vector<string> a_preferenciaDeHorarios)
{
    nome = a_nome;
    matricula = a_matricula;
    email = a_email;
    telefone = a_telefone;
    for(int i = 0; i < a_preferenciaDeHorarios.size(); i++)
    {
        preferenciaDeHorarios.push_back(a_preferenciaDeHorarios[i]);
    };
};

Aluno::~Aluno()
{

};

void Aluno::setNome(string a_nome)
{
    nome = a_nome;
};

void Aluno::setMatricula(string a_matricula)
{
    matricula = a_matricula;
};

void Aluno::setEmail(string a_email)
{
    email = a_email;
};

void Aluno::setTelefone(string a_telefone)
{
    telefone = a_telefone;
};

void Aluno::setPreferenciaDeHorarios(vector<string> a_preferenciaDeHorarios)
{
    for(int i = 0; i < a_preferenciaDeHorarios.size(); i++)
    {
        preferenciaDeHorarios.push_back(a_preferenciaDeHorarios[i]);
    };
};

string Aluno::getNome()
{
    return nome;
};

string Aluno::getMatricula()
{
    return matricula;
};

string Aluno::getEmail()
{
    return email;
};

string Aluno::getTelefone()
{
    return telefone;
};

vector<string> Aluno::getPreferenciaDeHorarios()
{
    return preferenciaDeHorarios;
};

bool Aluno::confirmarInscricao()
{
    return true;
};

bool Aluno::cancelarInscricao()
{
    return false;
};