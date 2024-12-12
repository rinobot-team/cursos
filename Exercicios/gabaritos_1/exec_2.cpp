#include <iostream>

using namespace std;

bool ehPotenciaDeDois(int num) {
    if(num <= 0) {
        return false;
    }

    while(num > 1) {
        if(num % 2 != 0) {
        return false;
        }
        num = num / 2;
    }
    return true;
}

int main() {
    int n;
    cout << "Insira um número inteiro: ";
    cin >> n;

    if(ehPotenciaDeDois(n)) {
        cout << "É potência." << endl;
    } else {
        cout << "Não é potência." << endl;
    }
    return 0;
}