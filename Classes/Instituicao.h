#ifndef INSTITUICAO
#define INSTITUICAO

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

        void setId(string i_id);
        void setNome(string i_nome);
        void setEndereco(string i_endereco);
        void setTelefone(string i_telefone);
        void setEmail(string i_email);
        void setTurmasDisponiveis(vector<Turma> i_turmasDisponiveis);
        void setProfessores(vector<Professor> i_professor);

        string getId();
        string getNome();
        string getEndereco();
        string getTelefone();
        string getEmail();
        vector<Turma> getTurmasDisponiveis();
        vector<Professor> getProfessores();

        void criarTurma();
        void removerTurma();
        void removerSolicitacaoDeTurma();
        vector<Turma> verificarTurmasCriadas();
        vector<SolicitacaoDeTurma> verificarTurmasAbertas();
        void adicionarProfessor();
};

#endif // INSTITUICAO