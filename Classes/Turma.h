#include <iostream>
#include <vector>
#include "Aluno.h"
#include "Instituicao.h"
#include "Professor.h"
#include "SolicitacaoDeTurma.h"
#include "CriadorDeTurma.h"

using namespace std;

class Turma
{
    private:

        string id;
        string curso;
        string modulo;
        string horario;
        string statusDaTurma;
        vector<Aluno> alunosInscritos;
        Professor professor;
        
    public:

        void adicionarAluno();
        void removerAluno();
        void adicionarProfessor();
        void removerProfessor();
        vector<Aluno> verificarAlunos();
        Professor verificarProfessor();
        string verificarStatusDaTurma();
};