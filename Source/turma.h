#ifndef TURMA
#define TURMA

#include <iostream>
#include "aluno.h"
#include <QString>
#include <QStringList>
#include <QMap>

using namespace std;

class Turma
{
    private:

    QString id;                            // ID único da turma
    QString curso;                         // Nome do curso da turma
    QString modulo;                        // Módulo do curso (ex: 1º módulo, 2º módulo)
    QString statusDaTurma;                // Status da turma (ex: Ativa, Cancelada)
    QStringList idAlunos;                 // Lista de IDs dos alunos associados a esta turma
    QStringList idProfessor;              // Lista de IDs dos professores responsáveis pela turma
    QMap<QString, QStringList> horariosDeAula; // Dicionário que contém os horários das aulas, com chave sendo o dia e valor a lista de horários

    public:

        Turma(QString t_id, QString t_curso, QString t_modulo, QString t_statusDaTurma, QStringList t_idProfessor, QStringList t_idAlunos, QMap<QString, QStringList> t_horariosDeAula);
        ~Turma();

        // Métodos setters para atualizar os valores dos atributos
        void setId(QString t_id);
        void setCurso(QString t_curso);
        void setModulo(QString t_modulo);
        void setStatusDaTurma(QString t_statusDaTurma);
        void setIdProfessor(QStringList t_idProfessor);
        void setIdAlunos(QStringList t_idAlunos);
        void setHorariosDeAula(QMap<QString, QStringList> t_horariosDeAula);

        // Métodos getters para obter os valores dos atributos
        QString getId();
        QString getCurso();
        QString getModulo();
        QString getStatusDaTurma();
        QStringList getIdProfessor();
        QStringList getIdAlunos();
        QMap<QString, QStringList> getHorariosDeAula();

        // Métodos para adicionar ou atualizar informações no banco de dados
        void adicionarNoBancoDeDados();
        void atualizarBancoDeDados();

};

#endif // TURMA
