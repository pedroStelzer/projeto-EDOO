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

        bool verificarCompatibilidade();
        void criarTurma();
};