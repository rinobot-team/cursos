#include "Algebra.hpp"

// Aqui implementamos como em qualquer outra classe
// o modificador 'static' so eh necessario na definicao
// nao na implementacao
double Algebra::adiciona(double num_1, double num_2) {
    return num_1 + num_2;
}

double Algebra::multiplica(double num_1, double num_2) {
    return num_1 * num_2;
}

double Algebra::potencia(double base, int expoente) {
    double resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}
