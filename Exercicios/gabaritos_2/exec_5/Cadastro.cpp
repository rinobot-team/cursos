#include "Cadastro.hpp"

Cadastro::Cadastro(string nome, string cpf, int anoNascimento, Endereco *endereco) {
    this->nome = nome;
    this->cpf = cpf;
    this->anoNascimento = anoNascimento;
    this->endereco = endereco;
}

// Como a variavel endereco eh alocada dinamicamente
// devemos deletar ela no destrutor
Cadastro::~Cadastro() {
    delete endereco;
}

void Cadastro::imprimirDados() {
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Ano de Nascimento: " << anoNascimento << endl;
    cout << "Endereço:" << endl;
    cout << "Rua: " << endereco->rua << endl;
    cout << "Número: " << endereco->numero << endl;
    cout << "Cidade: " << endereco->cidade << endl;
    cout << "Estado: " << endereco->estado << endl;
}