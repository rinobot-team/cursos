#include <iostream>

using namespace std;

int main() {
    int maior;

    int entrada;
    cout << "Digite números inteiros: ";
    cin >> entrada;

    maior = entrada;

    while(entrada >= 0) {
        cout << "Digite novamente: ";
        cin >> entrada;

        if(entrada > maior) {
        maior = entrada;
        }
    }

    cout << "A maior entrada foi: " << maior << endl;

    return 0;
}