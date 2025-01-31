#ifndef TELALOGIN_H
#define TELALOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QFileInfo>
#include "cadastro.h"
#include "telaprincipal.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class TelaLogin : public QMainWindow
{
    Q_OBJECT

public:
    TelaLogin(QWidget *parent = nullptr);
    ~TelaLogin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:

    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE"); // Banco de dados SQLite configurado para ser utilizado na aplicação
    Ui::MainWindow *ui;
    Cadastro *cadastro; // Ponteiro para a tela de cadastro de usuário
    TelaPrincipal *telaPrincipal; // Ponteiro para a tela principal após login
};
#endif // TELALOGIN_H
