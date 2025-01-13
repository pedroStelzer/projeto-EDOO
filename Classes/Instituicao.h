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
        vector<string> idTurmasDisponiveis;
        vector<string> listaDeProfessores;
        
    public:

        Instituicao(string i_id, string i_nome, string i_endereco, string i_telefone, string i_email, vector<string> i_idTurmasDisponiveis, vector<string> i_listaDeProfessores);
        ~Instituicao();

        void setId(string i_id);
        void setNome(string i_nome);
        void setEndereco(string i_endereco);
        void setTelefone(string i_telefone);
        void setEmail(string i_email);
        void setTurmasDisponiveis(vector<string> i_idTurmasDisponiveis);
        void setListaDeProfessores(vector<string> i_listaDeProfessores);

        string getId();
        string getNome();
        string getEndereco();
        string getTelefone();
        string getEmail();
        vector<string> getIdTurmasDisponiveis();
        vector<string> getListaDeProfessores();

        void criarTurma(string i_id, string i_curso, string i_modulo, string i_horario, string i_statusDaTurma, vector<string> i_matriculas, string i_professor);
        void removerTurma();
        vector<Turma> verificarTurmasCriadas();
        void adicionarProfessor(string i_professor);
        void removerProfessor(string i_professor);
};

#endif // INSTITUICAO