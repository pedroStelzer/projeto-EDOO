#include "telalogin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // Cria uma instância da aplicação Qt, passando os argumentos da linha de comando

    TelaLogin w; // Cria um objeto da classe TelaLogin
    w.showMaximized(); // Exibe a janela principal maximizada (ocupa toda a tela)
    return a.exec(); // Inicia o loop de eventos da aplicação, mantendo a aplicação em execução até que o usuário a feche
}
