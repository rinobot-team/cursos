#include <iostream>
#include <string>
#include "Endereco.hpp"
#include "Cadastro.hpp"

using namespace std;

int main() {
    string nome, cpf;
    int anoNascimento;
    Endereco *endereco = new Endereco();

    cout << "Informe o nome: ";
    getline(cin, nome);

    cout << "Informe o CPF: ";
    getline(cin, cpf);

    cout << "Informe o ano de nascimento: ";
    cin >> anoNascimento;
    cin.ignore(); // Limpa o caractere de nova linha no buffer

    cout << "Informe o endereço:" << endl;
    cout << "Rua: ";
    getline(cin, endereco->rua);

    cout << "Número: ";
    cin >> endereco->numero;
    cin.ignore();

    cout << "Cidade: ";
    getline(cin, endereco->cidade);

    cout << "Estado: ";
    getline(cin, endereco->estado);

    Cadastro* cadastro = new Cadastro(nome, cpf, anoNascimento, endereco);

    cout << "\n";
    cout << "<--Dados do Cadastro:-->" << endl;
    cadastro->imprimirDados();

    return 0;
}
