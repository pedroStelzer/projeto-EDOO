#include <iostream>
/*#include "../Classes/Aluno.h"
#include "../Classes/CriadorDeTurma.h"
#include "../Classes/Instituicao.h"
#include "../Classes/Professor.h"
#include "../Classes/SolicitacaoDeTurma.h"
#include "../Classes/Turma.h"*/

using namespace std;

int main()
{
    char entradaDoUsuario;

    cout << "Sistema de Marcacao de Turmas\n" << endl;

    cout << "Digite o numero que corresponda ao seu tipo de usuario:\n1. Aluno\n2. Professor\n3. Administrador" << endl;

    cin >> entradaDoUsuario;

    if(entradaDoUsuario == '1')
    {
        string nome;
        string matricula;
        string email;
        string telefone;

        cout << "Faca seu cadastro\n" << endl;

        cout << "Nome: ";
        cin >> nome;

        cout << "Email: ";
        cin >> email;
        
        cout << "Telefone: ";
        cin >> telefone;
        
    }
    else if(entradaDoUsuario == '2')
    {   
        string nome;
        string matricula;
        string email;
        string telefone;

        cout << "Faca seu cadastro:\n" << endl;

        cout << "Nome: ";
        cin >> nome;

        cout << "Email: ";
        cin >> email;
        
        cout << "Telefone: ";
        cin >> telefone;
    }
    else if(entradaDoUsuario == '3')
    {   
        string nome;
        string endereco;
        string telefone;
        string email;

        cout << "Faca o cadastro da sua instituicao:\n" << endl;

        cout << "Nome: ";
        cin >> nome;

        cout << "Endereco: ";
        cin >> endereco;

        cout << "Email: ";
        cin >> email;
        
        cout << "Telefone: ";
        cin >> telefone;
    }

    return 0;
}

