#ifndef PROFESSOR
#define PROFESSOR

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

        void setNome(string p_nome);
        void setId(string p_id);
        void setEmail(string p_email);
        void setTelefone(string p_telefone);
        void setTurmasLecionando(vector<Turma> p_turmasLecionando);

        string getNome();
        string getId();
        string getEmail();
        string getTelefone();
        vector<Turma> getTurmasLecionando();

        bool confirmarInscricao();
        bool cancelarInscricao();
        vector<Turma> verificarTurmasCriadas();
        vector<SolicitacaoDeTurma> verificarTurmasAbertas();
};

#endif // PROFESSOR