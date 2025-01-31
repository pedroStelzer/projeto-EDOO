#include "turma.h"

using namespace std;

// Construtor da classe Turma
Turma::Turma(QString t_id, QString t_curso, QString t_modulo, QString t_statusDaTurma, QStringList t_idProfessor, QStringList t_idAlunos, QMap<QString, QStringList> t_horariosDeAula)
{
    id = t_id;
    curso = t_curso;
    modulo = t_modulo;
    statusDaTurma = t_statusDaTurma;
    idProfessor = t_idProfessor;
    idAlunos = t_idAlunos;
    horariosDeAula = t_horariosDeAula;
};

Turma::~Turma()
{

};

// Métodos de setter para cada atributo da classe Turma
void Turma::setId(QString t_id)
{
    id = t_id;
};

void Turma::setCurso(QString t_curso)
{
    curso = t_curso;
};

void Turma::setModulo(QString t_modulo)
{
    modulo = t_modulo;
};

void Turma::setStatusDaTurma(QString t_statusDaTurma)
{
    statusDaTurma = t_statusDaTurma;
};

void Turma::setIdProfessor(QStringList t_idProfessor)
{
    idProfessor = t_idProfessor;
};

void Turma::setIdAlunos(QStringList t_idAlunos)
{
    idAlunos = t_idAlunos;
};

void Turma::setHorariosDeAula(QMap<QString, QStringList> t_horariosDeAula)
{
    horariosDeAula = t_horariosDeAula;
};

// Métodos de getter para cada atributo da classe Turma
QString Turma::getId()
{
    return id;
};

QString Turma::getCurso()
{
    return curso;
};

QString Turma::getModulo()
{
    return modulo;
};

QString Turma::getStatusDaTurma()
{
    return statusDaTurma;
};

QStringList Turma::getIdProfessor()
{
    return idProfessor;
};

QStringList Turma::getIdAlunos()
{
    return idAlunos;
};

QMap<QString, QStringList> Turma::getHorariosDeAula()
{
    return horariosDeAula;
};


// Método para adicionar a turma ao banco de dados
void Turma::adicionarNoBancoDeDados()
{

    // Converte os horários de cada dia da semana em uma string
    QString segunda = getHorariosDeAula()["Segunda"].join(", ");
    QString terca = getHorariosDeAula()["Terça"].join(", ");
    QString quarta = getHorariosDeAula()["Quarta"].join(", ");
    QString quinta = getHorariosDeAula()["Quinta"].join(", ");
    QString sexta = getHorariosDeAula()["Sexta"].join(", ");
    QString sabado = getHorariosDeAula()["Sábado"].join(", ");

    // Converte as listas de IDs de alunos e professores em strings
    QString idsAlunos = getIdAlunos().join(", ");
    QString idsProfessor = getIdProfessor().join(", ");

    // Prepara a consulta SQL para inserir os dados da turma no banco de dados
    QSqlQuery query;
    query.prepare("insert into tb_turmas (ids_aluno, ids_professor, curso, modulo, status_da_turma, segunda, terca, quarta, quinta, sexta, sabado) values"
                  "('"+idsAlunos+"', '"+idsProfessor+"', '"+this->getCurso()+"', '"+this->getModulo()+"', '"+this->getStatusDaTurma()+"','"+segunda+"', '"+terca+"', '"+quarta+"', '"+quinta+"', '"+sexta+"', '"+sabado+"')");
    query.exec();
};

// Método para atualizar os dados de uma turma no banco de dados
void Turma::atualizarBancoDeDados()
{
    // Converte os horários de cada dia da semana em uma string
    QString segunda = getHorariosDeAula()["Segunda"].join(", ");
    QString terca = getHorariosDeAula()["Terça"].join(", ");
    QString quarta = getHorariosDeAula()["Quarta"].join(", ");
    QString quinta = getHorariosDeAula()["Quinta"].join(", ");
    QString sexta = getHorariosDeAula()["Sexta"].join(", ");
    QString sabado = getHorariosDeAula()["Sábado"].join(", ");

    // Converte as listas de IDs de alunos e professores em strings
    QString idsAlunos = getIdAlunos().join(", ");
    QString idsProfessor = getIdProfessor().join(", ");

     // Prepara a consulta SQL para atualizar os dados da turma no banco de dados
    QSqlQuery query;
    query.prepare("update tb_turmas set ids_aluno = '"+idsAlunos+"', ids_professor = '"+idsProfessor+"', curso = '"+this->getCurso()+"', modulo = '"+this->getModulo()+"', status_da_turma = '"+this->getStatusDaTurma()+"', segunda = '"+ segunda +"', terca = '"+ terca +"', quarta = '"+ quarta +"', quinta = '"+ quinta +"', sexta = '"+ sexta +"', sabado = '"+ sabado +"' where id_turma = "+getId());
    query.exec();
}
