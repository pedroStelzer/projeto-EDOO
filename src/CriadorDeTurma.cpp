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

};

void CriadorDeTurma::setAlunos(vector<string> c_alunos)
{

};

string CriadorDeTurma::getProfessor()
{

};

vector<string> CriadorDeTurma::getAlunos()
{

};

bool CriadorDeTurma::verificarCompatibilidade()
{

};

void CriadorDeTurma::criarTurma()
{

};