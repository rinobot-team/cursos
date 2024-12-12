#pragma once

#include <string>

using namespace std;

class Endereco {
public:
    // Como eh uma classe sem logica, so um agrupamento de dados,
    // podemos definir o construtor no header mesmo
    // Aqui temos uma sobrecarga, um construtor que ja recebe todas
    // as propriedades e um que instancia a classe vazia
    Endereco() {}
    Endereco(string r, int n, string c, string e) : rua(r), numero(n), cidade(c), estado(e) {}
    ~Endereco() {};
    string rua;
    int numero;
    string cidade;
    string estado;
};
