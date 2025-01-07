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
        vector<string> matriculas;
        string professor;
        
    public:

        SolicitacaoDeTurma(string s_id, string s_curso, string s_modulo, string s_horario, vector<string> s_matriculas, string s_professor);
        ~SolicitacaoDeTurma();

        void setId(string s_id);
        void setCurso(string s_curso);
        void setModulo(string s_modulo);
        void setHorario(string s_horario);
        void setMatriculas(vector<string> s_matriculas);
        void setProfessor(string s_professor);
        
        string getId();
        string getCurso();
        string getModulo();
        string getHorario();
        vector<string> getMatriculas();
        string getProfessor();

        string verificarInformacoes();
};

#endif // SOLICITACAO_DE_TURMA