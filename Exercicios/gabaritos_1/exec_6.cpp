#include <iostream>

using namespace std;

void mudaParaMax(int* a, int* b, int* c) {
    int maxVal = *a;
    if (*b > maxVal) {
        maxVal = *b;
    }
    if (*c > maxVal) {
        maxVal = *c;
    }
    *a = maxVal;
    *b = maxVal;
    *c = maxVal;
}

int main (int argc, char *argv[]) {
    int x, y, z;
    cout << "Insira os valores de x, y, z: ";
    cin >> x;
    cin >> y;
    cin >> z;

    mudaParaMax(&x, &y, &z);

    cout << "Valores atualizados: x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}