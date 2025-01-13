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
        vector<string> idTurmasLecionando;

    public:

        Professor(string p_nome, string p_id, string p_email, string p_telefone, vector<string> p_idTurmasLecionando);
        ~Professor();

        void setNome(string p_nome);
        void setId(string p_id);
        void setEmail(string p_email);
        void setTelefone(string p_telefone);
        void setIdTurmasLecionando(vector<string> p_idTurmasLecionando);

        string getNome();
        string getId();
        string getEmail();
        string getTelefone();
        vector<string> getIdTurmasLecionando();

        bool confirmarInscricao();
        bool cancelarInscricao();
};

#endif // PROFESSOR