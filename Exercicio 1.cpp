#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    int idade;
    string linguagem;
    int quantidadeProjetos;

    cout << "Digite o seu nome: ";
    getline(cin, nome);

    cout << "Digite a sua idade: ";
    cin >> idade;

    cin.ignore();

    cout << "Digite sua linguagem de programacao preferida: ";
    getline(cin, linguagem);

    cout << "Digite a quantidade de projetos ja desenvolvidos: ";
    cin >> quantidadeProjetos;

    cout << "\n--- Cadastro do Desenvolvedor ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Linguagem Preferida: " << linguagem << endl;
    cout << "Projetos Desenvolvidos: " << quantidadeProjetos << endl;

    return 0;
}