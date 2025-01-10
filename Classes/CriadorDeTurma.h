#ifndef CRIADORDETURMA
#define CRIADORDETURMA

#include <iostream>
#include <vector>
#include "Turma.h"

using namespace std;

class CriadorDeTurma
{
    private:

        string professor;
        vector<string> alunos;
        
    public:

        CriadorDeTurma(string c_professor, vector<string> c_alunos);
        ~CriadorDeTurma();

        void setProfessor(string c_professor);
        void setAlunos(vector<string> c_alunos);

        string getProfessor();
        vector<string> getAlunos();

        bool verificarCompatibilidade();
        void criarTurma();
};

#endif // CRIADORDETURMA