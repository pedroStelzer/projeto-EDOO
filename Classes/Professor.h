#include <iostream>
#include <vector>
#include "Turma.h"

using namespace std;

class Professor
{
    private:

        string nome;
        string id;
        string email;
        string telefone;
        vector<Turma> turmasLecionando;

    public:

        bool confirmarInscricao();
        bool cancelarInscricao();
        vector<Turma> verificarTurmasCriadas();
        vector<SolicitacaoDeTurma> verificarTurmasAbertas();
};