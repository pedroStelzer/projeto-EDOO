#ifndef CRIADORDETURMA
#define CRIADORDETURMA

#include <iostream>
#include <vector>
#include "Turma.h"

using namespace std;

class CriadorDeTurma
{
    private:

        Professor professor;
        vector<Aluno> alunos;
        SolicitacaoDeTurma solicitacaoDeTurma;
        
    public:

        void setProfessor(Professor c_professor);
        void setAlunos(vector<Aluno> c_alunos);
        void setSolicitacaoDeTurma(SolicitacaoDeTurma c_solicitacaoDeTurma);

        Professor getProfessor();
        vector<Aluno> getAlunos();
        SolicitacaoDeTurma getSolicitacaoDeTurma();

        bool verificarCompatibilidade();
        void criarTurma();
};

#endif // CRIADORDETURMA