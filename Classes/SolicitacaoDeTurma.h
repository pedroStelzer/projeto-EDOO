#include <iostream>
#include <vector>
#include "Turma.h"

using namespace std;

class SolicitacaoDeTurma
{
    private:

        string id;
        string curso;
        string modulo;
        string horario;
        vector<Aluno> alunosInscritos;
        Professor professor;
        
    public:

        vector<Aluno> verificarAlunos();
        Professor verificarProfessor();
        string verificarInformacoes();
};