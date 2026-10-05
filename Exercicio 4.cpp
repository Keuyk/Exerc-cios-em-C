#include <iostream>

using namespace std;

int main() {
    int senha;

    // Entrada de dados
    cout << "Digite a senha: ";
    cin >> senha;

    // Verificação utilizando o operador de igualdade (==)
    if (senha == 2026) {
        cout << "Acesso permitido" << endl;
    } else {
        cout << "Acesso negado." << endl;
    }

    return 0;
}