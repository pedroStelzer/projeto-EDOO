#include <iostream>
#include "../Classes/Turma.h"

using namespace std;

Turma::Turma(string t_id, string t_curso, string t_modulo, string t_horario, string t_statusDaTurma, vector<string> t_matriculas, string t_professor)
{
    id = t_id;
    curso = t_curso;
    modulo = t_modulo;
    horario = t_horario;
    statusDaTurma = t_statusDaTurma;
    for(int i = 0; i < t_matriculas.size(); i++)
    {
        matriculas.push_back(t_matriculas[i]);
    };
};

Turma::~Turma()
{

};

void Turma::setId(string t_id)
{

};

void Turma::setCurso(string t_curso)
{

};

void Turma::setModulo(string t_modulo)
{

};

void Turma::setHorario(string t_horario)
{

};

void Turma::setStatusDaTurma(string t_statusDaTurma)
{

};

void Turma::setMatriculas(vector<string> t_matriculas)
{

};

void Turma::setProfessor(string t_professor)
{

};

string Turma::getId()
{

};

string Turma::getCurso()
{

};

string Turma::getModulo()
{

};

string Turma::getHorario()
{

};

string Turma::getStatusDaTurma()
{

};

vector<string> Turma::getMatriculas()
{

};

string Turma::getProfessor()
{

};

void Turma::adicionarAluno()
{

};

void Turma::removerAluno()
{

};

void Turma::adicionarProfessor()
{

};

void Turma::removerProfessor()
{

};