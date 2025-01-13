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
        vector<string> matriculas;
        string professor;
        
    public:

        Turma(string t_id, string t_curso, string t_modulo, string t_horario, string t_statusDaTurma, vector<string> t_matriculas, string t_professor);
        ~Turma();

        void setId(string t_id);
        void setCurso(string t_curso);
        void setModulo(string t_modulo);
        void setHorario(string t_horario);
        void setStatusDaTurma(string t_statusDaTurma);
        void setMatriculas(vector<string> t_matriculas);
        void setProfessor(string t_professor);

        string getId();
        string getCurso();
        string getModulo();
        string getHorario();
        string getStatusDaTurma();
        vector<string> getMatriculas();
        string getProfessor();

        void adicionarAluno(string a_id);
        void removerAluno(string a_id);
        void removerProfessor();
};

#endif // TURMA