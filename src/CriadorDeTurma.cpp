#include <iostream>
#include "../Classes/CriadorDeTurma.h"

using namespace std;

CriadorDeTurma::CriadorDeTurma(int c_quantidadeMinimaDeAlunos, string c_professor, vector<string> c_alunos)
{
    quantidadeMinimaDeAlunos = c_quantidadeMinimaDeAlunos;
    professor = c_professor;
    for(int i = 0; i < c_alunos.size(); i++)
    {
        alunos.push_back(c_alunos[i]);
    };
};

CriadorDeTurma::~CriadorDeTurma()
{

};

void CriadorDeTurma::setQuantidadeMinimaDeAlunos(int c_quantidadeMinimaDeAlunos)
{
    quantidadeMinimaDeAlunos = c_quantidadeMinimaDeAlunos;
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

int CriadorDeTurma::getQuantidadeMinimaDeAlunos()
{
    return quantidadeMinimaDeAlunos;
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
    /*if(true)
    {
        return true;
    }
    else
    {
        return false;
    }*/
};

void CriadorDeTurma::criarTurma(string c_id, string c_curso, string c_modulo, string c_horario, string c_statusDaTurma, vector<string> c_matriculas, string c_professor)
{
    Turma *t = new Turma(c_id, c_curso, c_modulo, c_horario, c_statusDaTurma, c_matriculas, c_professor);
};