#include <iostream>
#include <string>

using namespace std;

bool ehPalindromo(string str) {
    for(int i = 0; i < str.length() / 2; i++) {
        if(str[i] != str[str.length() - 1 - i]) {
        return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Insira a frase: ";
    getline(cin, input);

    if(ehPalindromo(input)) {
        cout << "É palíndromo." << endl;
    } else {
        cout << "Não é palíndromo." << endl;
    }

    return 0;
}