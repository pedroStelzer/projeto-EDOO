#include <iostream>
#include <vector>
#include "Turma.h"

using namespace std;

class Aluno
{
    private:

        string nome;
        string matricula;
        string email;
        string telefone;
        vector<string> preferenciaDeHorarios;
        vector<SolicitacaoDeTurma> turmasSolicitadas;
        
    public:

        void solicitarTurma();
        void removerSolicitacao();
        bool confirmarInscricao();
        bool cancelarInscricao();
        vector<Turma> verificarTurmasCriadas();
        vector<SolicitacaoDeTurma> verificarTurmasAbertas();
};