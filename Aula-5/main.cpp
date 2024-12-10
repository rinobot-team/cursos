#include <iostream>
#include <string>
#include <ctime>

int main(){
    std::cout << "Insira seu nominho: ";
    std::string nome;
    std::cin >> nome;
    std::cout << "Seu nominho é: " << nome << "\n";

    nome[0] = 'D';
    std::cout << "Seu nominho é: " << nome << "\n";

    srand(time(0));
    int n = rand() % 110;
    std::cout << n << "\n";


    return 0;
}