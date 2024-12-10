#include <iostream>

int main() {
    // Estrutura If-Else

    int nmr = 0;
    bool condicao = false;

    // Somente se a condicao for valida ele entrara no bloco do if
    // se nao for entrara no bloco do else
    if (condicao == true) {
        nmr++;
    } else {
        nmr--;
    }

    std::cout << "Valor de nmr: " << nmr << std::endl;

    // // Switch-Case
    std::cout << "Menu do Jogo Muito Foda:" << std::endl;
    int escolha = 0;
    switch (escolha) {
    case 1:
        std::cout << "Continuar" << std::endl;
        break;
    case 2:
        std::cout << "Novo Jogo" << std::endl;
        break;
    case 3:
        std::cout << "Configuracoes" << std::endl;
        break;
    default:
        std::cout << "Sair" << std::endl;
        break;
    }

    // // Operador Ternário
    bool cond = true;
    int result = (cond ==  true) ? 10 : -10;
    // O codigo a cima eh equivalente a este if-else
    // Variaveis bool nao precisam exatamente serem comparados com true ou false
    // ja que seu valor ja diz o resultado
    /*
    if (cond) {
        result = 10;
    } else {
        result = -10
    }
    */
    std::cout << "Valor de result: " << result << std::endl;

    // // Laço For
    std::cout << "Iteracoes do for:" << std::endl;
    for(int i = 0; i < 10; i++) {
        std::cout << i << " ";
    }
    // \n eh o caractere que cria uma uma linha nova
    // veremos mais na aula de strings 
    std::cout << "\n";

    // Laço while
    int contador_w = 0;
    while (contador_w > 5) {
        std::cout << "Iteracao do while n" << contador_w << std::endl;
        contador_w++;
    }
    // Inverta o < para > e veja que o codigo nem vai entrar no bloco do while

    // Do-while
    int contador_dw = 0;
    do {
        std::cout << "Iteracao do do-while n" << contador_dw << std::endl;
        contador_dw++;
    } while (contador_dw > 5);
    // Inverta o < para > e veja que vai rodar pelo menos 1 vez

    //Palavras-chave
    for (int i = 1; i <= 10; ++i) {
        // Usa continue para pular numeros pares
        if (i % 2 == 0) {
            continue; // Vai para a proxima iteracaoo, ignorando o codigo abaixo
        }

        std::cout << "Numero impar: " << i << std::endl;

        // Usa break para encerrar o loop ao encontrar o numero 7
        if (i == 7) {
            std::cout << "Numero 7 encontrado. Encerrando o loop." << std::endl;
            break;
        }
    }

    return 0;
}