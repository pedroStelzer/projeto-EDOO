#include <iostream>
#include "../Classes/CriadorDeTurma.h"

using namespace std;

CriadorDeTurma::CriadorDeTurma(string c_professor, vector<string> c_alunos)
{
    professor = c_professor;
    for(int i = 0; i < c_alunos.size(); i++)
    {
        alunos.push_back(c_alunos[i]);
    };
};

CriadorDeTurma::~CriadorDeTurma()
{

};

void CriadorDeTurma::setProfessor(string c_professor)
{
    professor = c_professor;
};

void CriadorDeTurma::setAlunos(vector<string> c_alunos)
{
    for(int i = 0; i < c_alunos.size(); i++)
    {
        alunos.push_back(c_alunos[i]);
    };
};

string CriadorDeTurma::getProfessor()
{
    return professor;
};

vector<string> CriadorDeTurma::getAlunos()
{
    return alunos;
};

bool CriadorDeTurma::verificarCompatibilidade()
{

};

void CriadorDeTurma::criarTurma()
{

};