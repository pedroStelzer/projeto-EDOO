#ifndef CRIADORDETURMA
#define CRIADORDETURMA

#include <iostream>
#include <vector>
#include "Turma.h"

using namespace std;

class CriadorDeTurma
{
    private:

        string professor;
        vector<string> alunos;
        SolicitacaoDeTurma solicitacaoDeTurma;
        
    public:

        CriadorDeTurma(string c_professor, vector<string> c_alunos, SolicitacaoDeTurma c_solicitacaoDeTurma);
        ~CriadorDeTurma();

        void setProfessor(string c_professor);
        void setAlunos(vector<string> c_alunos);
        void setSolicitacaoDeTurma(SolicitacaoDeTurma c_solicitacaoDeTurma);

        string getProfessor();
        vector<string> getAlunos();
        SolicitacaoDeTurma getSolicitacaoDeTurma();

        bool verificarCompatibilidade();
        void criarTurma();
};

#endif // CRIADORDETURMA