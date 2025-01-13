#ifndef CRIADORDETURMA
#define CRIADORDETURMA

#include <iostream>
#include <vector>
#include "Turma.h"

using namespace std;

class CriadorDeTurma
{
    private:

        int quantidadeMinimaDeAlunos;
        string professor;
        vector<string> alunos;
        
    public:

        CriadorDeTurma(int c_quantidadeMinimaDeAlunos, string c_professor, vector<string> c_alunos);
        ~CriadorDeTurma();

        void setQuantidadeMinimaDeAlunos(int c_quantidadeMinimaDeAlunos);
        void setProfessor(string c_professor);
        void setAlunos(vector<string> c_alunos);

        int getQuantidadeMinimaDeAlunos();
        string getProfessor();
        vector<string> getAlunos();

        bool verificarCompatibilidade();
        void criarTurma(string c_id, string c_curso, string c_modulo, string c_horario, string c_statusDaTurma, vector<string> c_matriculas, string c_professor);
};

#endif // CRIADORDETURMA