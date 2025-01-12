#include <iostream>
#include "../Classes/Professor.h"

using namespace std;

Professor::Professor(string p_nome, string p_id, string p_email, string p_telefone, vector<string> p_idTurmasLecionando)
{
    nome = p_nome;
    id = p_id;
    email = p_email;
    telefone = p_telefone;
    for(int i = 0; i < p_idTurmasLecionando.size(); i++)
    {
        idTurmasLecionando.push_back(p_idTurmasLecionando[i]);
    };
};

Professor::~Professor()
{

};

void Professor::setNome(string p_nome)
{
    nome = p_nome;
};

void Professor::setId(string p_id)
{
    id = p_id;
};

void Professor::setEmail(string p_email)
{
    email = p_email;
};

void Professor::setTelefone(string p_telefone)
{
    telefone = p_telefone;
};

void Professor::setIdTurmasLecionando(vector<string> p_idTurmasLecionando)
{
    for(int i = 0; i < p_idTurmasLecionando.size(); i++)
    {
        idTurmasLecionando.push_back(p_idTurmasLecionando[i]);
    };
};

string Professor::getNome()
{
    return nome;
};

string Professor::getId()
{
    return id;
};

string Professor::getEmail()
{
    return email;
};

string Professor::getTelefone()
{
    return telefone;
};

vector<string> Professor::getIdTurmasLecionando()
{
    return idTurmasLecionando;
};

bool Professor::confirmarInscricao()
{

};

bool Professor::cancelarInscricao()
{

};