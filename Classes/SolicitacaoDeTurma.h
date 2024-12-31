#ifndef SOLICITACAO_DE_TURMA
#define SOLICITACAO_DE_TURMA

#include <iostream>
#include <vector>
#include "Turma.h"

using namespace std;

class SolicitacaoDeTurma
{
    private:

        string id;
        string curso;
        string modulo;
        string horario;
        vector<Aluno> alunosInscritos;
        Professor professor;
        
    public:

        void setId(string s_id);
        void setCurso(string s_curso);
        void setModulo(string s_modulo);
        void setHorario(string s_horario);
        void setAlunosInscritos(vector<Aluno> s_alunosInscritos);
        void setProfessor(Professor s_professor);
        
        string getId();
        string getCurso();
        string getModulo();
        string getHorario();
        vector<Aluno> getAlunosInscritos();
        Professor getProfessor();

        vector<Aluno> verificarAlunos();
        Professor verificarProfessor();
        string verificarInformacoes();
};

#endif // SOLICITACAO_DE_TURMA