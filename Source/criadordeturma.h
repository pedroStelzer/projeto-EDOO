#ifndef CRIADORDETURMA
#define CRIADORDETURMA

#include <iostream>
#include <vector>
#include "turma.h"
#include <QString>

using namespace std;

class CriadorDeTurma
{
private:

    int quantidadeMinimaDeAlunos;
    QString professor;
    vector<QString> alunos;

public:

    CriadorDeTurma(int c_quantidadeMinimaDeAlunos, QString c_professor, vector<QString> c_alunos);
    ~CriadorDeTurma();

    void setQuantidadeMinimaDeAlunos(int c_quantidadeMinimaDeAlunos);
    void setProfessor(QString c_professor);
    void setAlunos(vector<QString> c_alunos);

    int getQuantidadeMinimaDeAlunos();
    QString getProfessor();
    vector<QString> getAlunos();

    bool verificarCompatibilidade();
    void criarTurma(QString c_id, QString c_curso, QString c_modulo, QString c_horario, QString c_statusDaTurma, vector<QString> c_matriculas, QString c_professor);
};

#endif // CRIADORDETURMA
