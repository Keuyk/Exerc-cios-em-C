#include <iostream>

using namespace std;

int main() {
    // Declaração das variáveis para armazenar as horas e o total
    double horasFuncionalidade1, horasFuncionalidade2, totalHoras;

    // Entrada de dados
    cout << "Digite as horas previstas para a Funcionalidade 1: ";
    cin >> horasFuncionalidade1;

    cout << "Digite as horas previstas para a Funcionalidade 2: ";
    cin >> horasFuncionalidade2;

    // Processamento: cálculo da soma das horas
    totalHoras = horasFuncionalidade1 + horasFuncionalidade2;

    // Saída de dados: apresentação do resultado
    cout << "\n========================================" << endl;
    cout << "Total de horas previstas para o desenvolvimento: " << totalHoras << " hora(s)" << endl;
    cout << "========================================" << endl;

    return 0;
}