#include <iostream>

// Recebe 2 argumentos, um deles com valor default e retorna o produto (int) 
int multiplica(int nmr1, int nmr2 = 1) {
    return nmr1 * nmr2;
}

// A funcao subtrai possui 2 definicoes (sobrecarga)
// O compilador chama a funcao baseada na quantidade de argumentos passados
int subtrai(int nmr1, int nmr2) {
    return nmr1 - nmr2;
}

int subtrai(int nmr1, int nmr2, int nmr3) {
    return nmr1 - nmr2 - nmr3;
}

int fibonacci(int n) {
    // Caso base, a funcao é chamada recursivamente ate atingir este ponto
    if (n <= 1) {
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Funcao void, nao possui retorno
// Aqui temos so a assinatura da funcao
void print_num(int num);

// Toda funcao deve ser pelo menos declarada antes da int main 
// ou seja, a main normalmente deve ser o ultimo bloco do codigo
int main (int argc, char *argv[]) {
    // Argc: Argument Count, quantidade de Argumentos
    std::cout << "Quantidade de Argumentos: " << argc << std::endl;
    // Argv: Argument Values, valores dos Argumentos
    std::cout << "Argumentos: ";
    for(int i = 0; i < argc; i++) {
        std::cout << argv[i] << ", ";
    }
    std::cout << "\n";

    // Variavel produto recebe o retorno da funcao multiplica
    int produto = multiplica(3, 4);
    std::cout << "Produto: " << produto << std::endl;

    // o retorno sera 2, pois ao nao incluir o segundo argumento a funcao utilizara
    // o valor default
    produto = multiplica(2);
    std::cout << "Quantidade de Argumentos: " << produto << std::endl;

    // Chama a primeira definicao
    int result = subtrai(3, 2);
    std::cout << "Resultado: " << result << std::endl;

    // Chama a segunda definicao
    result = subtrai(5, 2 ,1);
    std::cout << "Resultado: " << result << std::endl;

    // Chamada da funcao recursiva
    int fibo = fibonacci(7);

    // Mesmo com a definicao da funcao depois da main 
    // eh possivel chama-la, ja que a assinatura esta antes
    print_num(fibo);

    return 0;
}

// Definicao da funcao
void print_num(int num) {
    std::cout << "num = " << num << std::endl;
}
