#pragma once

#include<iostream>
#include<string>
#include "Endereco.hpp"

using namespace std;

class Cadastro {
public:
    Cadastro(string nome, string cpf, int anoNascimento, Endereco *endereco);
    ~Cadastro();

    void imprimirDados();

private:
    string nome;
    string cpf;
    int anoNascimento;
    Endereco* endereco;
};
