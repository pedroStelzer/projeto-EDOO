#include <iostream>
#include "criadordeturma.h"
#include <QString>

using namespace std;

CriadorDeTurma::CriadorDeTurma(int c_quantidadeMinimaDeAlunos, QString c_professor, vector<QString> c_alunos)
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

void CriadorDeTurma::setProfessor(QString c_professor)
{
    professor = c_professor;
};

void CriadorDeTurma::setAlunos(vector<QString> c_alunos)
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

QString CriadorDeTurma::getProfessor()
{
    return professor;
};

vector<QString> CriadorDeTurma::getAlunos()
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

void CriadorDeTurma::criarTurma(QString c_id, QString c_curso, QString c_modulo, QString c_horario, QString c_statusDaTurma, vector<QString> c_matriculas, QString c_professor)
{
    Turma *t = new Turma(c_id, c_curso, c_modulo, c_horario, c_statusDaTurma, c_matriculas, c_professor);
};
