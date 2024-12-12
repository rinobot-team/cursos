#include <iostream>

using namespace std;

int inverteInt(int num) {
    int invertido = 0;

    while(num != 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

int main() {
    int num;
    cout << "Digite o inteiro: ";
    cin >> num;

    cout << "O inverso é: " << inverteInt(num) << endl;

    return 0;
}