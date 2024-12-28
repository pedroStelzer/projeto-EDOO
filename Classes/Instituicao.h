#include <iostream>
#include <vector>
#include "Turma.h"

using namespace std;

class Instituicao
{
    private:

        string id;
        string nome;
        string endereco;
        string telefone;
        string email;
        vector<Turma> turmasDisponiveis;
        vector<Professor> professores;
        
    public:

        void criarTurma();
        void removerTurma();
        void removerSolicitacaoDeTurma();
        vector<Turma> verificarTurmasCriadas();
        vector<SolicitacaoDeTurma> verificarTurmasAbertas();
        void adicionarProfessor();
};