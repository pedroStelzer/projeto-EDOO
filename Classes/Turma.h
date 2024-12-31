#ifndef TURMA
#define TURMA

#include <iostream>
#include <vector>
#include "Aluno.h"
#include "Instituicao.h"
#include "Professor.h"
#include "SolicitacaoDeTurma.h"
#include "CriadorDeTurma.h"

using namespace std;

class Turma
{
    private:

        string id;
        string curso;
        string modulo;
        string horario;
        string statusDaTurma;
        vector<Aluno> alunosInscritos;
        Professor professor;
        
    public:

        void setId(string t_id);
        void setCurso(string t_curso);
        void setModulo(string t_modulo);
        void setHorario(string t_horario);
        void setStatusDaTurma(string t_statusDaTurma);
        void setAlunosInscritos(vector<Aluno> t_alunosInscritos);
        void setProfessor(Professor t_professor);

        string getId();
        string getCurso();
        string getModulo();
        string getHorario();
        string getStatusDaTurma();
        vector<Aluno> getAlunosInscritos();
        Professor getProfessor();

        void adicionarAluno();
        void removerAluno();
        void adicionarProfessor();
        void removerProfessor();
        vector<Aluno> verificarAlunos();
        Professor verificarProfessor();
        string verificarStatusDaTurma();
};

#endif // TURMA