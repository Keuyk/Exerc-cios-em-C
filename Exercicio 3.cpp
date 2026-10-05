#include <iostream>

using namespace std;

int main() {
    int idade;

    // Entrada de dados
    cout << "Digite a idade do candidato: ";
    cin >> idade;

    // Estrutura condicional (if / else)
    if (idade >= 18) {
        cout << "Pode participar do processo seletivo" << endl;
    } else {
        cout << "Não pode participar do processo seletivo" << endl;
    }

    return 0;
}