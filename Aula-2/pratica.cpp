#include <iostream>
#include <vector>

int main(){
    //atribuicao padrao
    int a1 = 10;
    int a2 = 10.7;

    std::cout << "_a1:" << a1 << "\n";
    std::cout << "_a2:" << a2 << "\n";

    //atribuicao forte de tipo
    int a3{10};
    std::cout << "_a3:" << a3 << "\n";
    
    // int a4{10.7};
    // std::cout << "_a4:" << a4 << "\n";

    std::cout << "_vi-a1:" << a1 << "\n";
    ++a1;
    std::cout << "_vat-a1:" << a1 << "\n";
    
    std::cout << "_vi-a2:" << a2 << "\n";
    -a2;
    std::cout << "_vat-a2:" << -a2 << "\n";
    std::cout << "_vat-a2:" << a2 << "\n";
    a2 = -a2;
    std::cout << "_vat-a2:" << a2 << "\n";

    const int a5 = 10;
    std::cout << "_vi-a5:" << a5 << "\n";
    
    bool sim = 1;
    bool nao = 0;
    bool simOuNao = (!sim || nao);

    std::cout << "_simOuNao:" << simOuNao << "\n";

    std::vector<int> vet(10);
    std::cout << vet[0] << "\n";
    std::cout << vet[1] << "\n";
    std::cout << vet[2] << "\n";

    return 0;
}