#include <iostream>

using namespace std;

int main() {
    double usoCpu;

    // Entrada de dados
    cout << "Uso da CPU: ";
    cin >> usoCpu;

    // Classificação do status usando if, else if e else
    if (usoCpu < 50.0) {
        cout << "Status: Uso normal" << endl;
    } else if (usoCpu <= 80.0) {
        cout << "Status: Atenção" << endl;
    } else {
        cout << "Status: Uso crítico" << endl;
    }

    return 0;
}