#include <iostream>

using namespace std;

void pontTroca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int valor1, valor2;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor: ";
    cin >> valor2;
    
    // Passagem por referência
    pontTroca(&valor1, &valor2);

    cout << "Depois da troca:" << endl;
    cout << "Primeiro valor: " << valor1 << endl;
    cout << "Segundo valor: " << valor2 << endl;

    return 0;
}