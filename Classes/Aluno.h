#ifndef ALUNO
#define ALUNO

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

        Aluno(string a_nome, string a_matricula, string a_email, string a_telefone);
        ~Aluno();

        void setNome(string a_nome);
        void setMatricula(string a_matricula);
        void setEmail(string a_email);
        void setTelefone(string a_telefone);
        void setPreferenciaDeHorarios(vector<string> a_preferenciaDeHorarios);
        void setTurmasSolicitadas(vector<SolicitacaoDeTurma> a_turmasSolicitadas);

        string getNome();
        string getMatricula();
        string getEmail();
        string getTelefone();
        vector<string> getPreferenciaDeHorarios();
        vector<SolicitacaoDeTurma> getTurmasSolicitadas();

        void solicitarTurma();
        void removerSolicitacao();
        bool confirmarInscricao();
        bool cancelarInscricao();
        vector<Turma> verificarTurmasCriadas();
        vector<SolicitacaoDeTurma> verificarTurmasAbertas();
};

#endif // ALUNO