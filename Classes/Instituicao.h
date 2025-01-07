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
        vector<string> professores;
        
    public:

        Instituicao(string i_id, string i_nome, string i_endereco, string i_telefone, string i_email);
        ~Instituicao();

        void setId(string i_id);
        void setNome(string i_nome);
        void setEndereco(string i_endereco);
        void setTelefone(string i_telefone);
        void setEmail(string i_email);
        void setTurmasDisponiveis(vector<Turma> i_turmasDisponiveis);
        void setProfessores(vector<string> i_professor);

        string getId();
        string getNome();
        string getEndereco();
        string getTelefone();
        string getEmail();
        vector<Turma> getTurmasDisponiveis();
        vector<string> getProfessores();

        void criarTurma();
        void removerTurma();
        void removerSolicitacaoDeTurma();
        vector<Turma> verificarTurmasCriadas();
        vector<SolicitacaoDeTurma> verificarTurmasAbertas();
        void adicionarProfessor();
};

#endif // INSTITUICAO