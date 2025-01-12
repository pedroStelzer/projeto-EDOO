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
        
    public:

        Aluno(string a_nome, string a_matricula, string a_email, string a_telefon, vector<string> a_preferenciaDeHorarios);
        ~Aluno();

        void setNome(string a_nome);
        void setMatricula(string a_matricula);
        void setEmail(string a_email);
        void setTelefone(string a_telefone);
        void setPreferenciaDeHorarios(vector<string> a_preferenciaDeHorarios);

        string getNome();
        string getMatricula();
        string getEmail();
        string getTelefone();
        vector<string> getPreferenciaDeHorarios();

        bool confirmarInscricao();
        bool cancelarInscricao();
};

#endif // ALUNO