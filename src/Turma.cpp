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
    professor = t_professor;
};

Turma::~Turma()
{

};

void Turma::setId(string t_id)
{
    id = t_id;
};

void Turma::setCurso(string t_curso)
{
    curso = t_curso;
};

void Turma::setModulo(string t_modulo)
{
    modulo = t_modulo;
};

void Turma::setHorario(string t_horario)
{
    horario = t_horario;
};

void Turma::setStatusDaTurma(string t_statusDaTurma)
{
    statusDaTurma = t_statusDaTurma;
};

void Turma::setMatriculas(vector<string> t_matriculas)
{
    for(int i = 0; i < t_matriculas.size(); i++)
    {
        matriculas.push_back(t_matriculas[i]);
    };
};

void Turma::setProfessor(string t_professor)
{
    professor = t_professor;
};

string Turma::getId()
{
    return id;
};

string Turma::getCurso()
{
    return curso;
};

string Turma::getModulo()
{
    return modulo;
};

string Turma::getHorario()
{
    return horario;
};

string Turma::getStatusDaTurma()
{
    return statusDaTurma;
};

vector<string> Turma::getMatriculas()
{
    return matriculas;
};

string Turma::getProfessor()
{
    return professor;
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