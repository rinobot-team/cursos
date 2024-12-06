#include <iostream>

using namespace std;

bool ehImpar(int num) {
    if(num % 2 != 0) {
        return true;
    } else {
        return false;
    }
}

int main () {
    int num;
    cout << "Digite um inteiro: ";
    cin >> num;

    if(ehImpar(num)) {
        cout << "O número é ímpar." << endl;
    } else {
        cout << "O número é par." << endl;
    }

    return 0;
}