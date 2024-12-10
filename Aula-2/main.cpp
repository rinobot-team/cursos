#include <iostream>
#include <bitset>

int main() {
    // Variavel somente declarada, pode conter lixo de memoria
    int var;
    std::cout << "Lixo de Memoria: " << var << std::endl;

    // Variavel inicializada
    int nmr = 0;
    std::cout << "Variavel Inicializada: " << nmr << std::endl;
    // Operando na variavel
    // Soma 1
    nmr++;
    std::cout << "Valor de nmr = " << nmr << std::endl;
    // Multiplica por 3
    nmr = nmr * 3; // nmr *+ 3;
    std::cout << "Valor de nmr = " << nmr << std::endl;
    // Subtrai e atribui
    nmr -= 1;
    std::cout << "Valor de nmr = " << nmr << std::endl;

    // Numero real double constante (nao pode ser alterado)
    const double pi = 3.14159;
    // Numero real float
    float raio = 3.5;
    float area_circulo = pi * raio * raio;
    std::cout << "Area do Circulo = " << area_circulo << std::endl;

    // Caractere inicializado
    char caractere = 'a';
    // Essa variavel contem o caractere que representa 2, nao o valor 2
    char numero_char = '2'; 
    // Operacao relacional de igualdade
    std::cout << "Caracteres sao iguais? " << (caractere == numero_char) << std::endl;

    bool curso_eh_ruim = false;
    bool saudade_dela = true;

    // Operacao de E logico
    // Assim como na matematica ( ) delimitam prioridade de operacao
    std::cout << "&&: " << (curso_eh_ruim && saudade_dela) << std::endl;
    // Operacao de Ou logico
    std::cout << "||: " << (curso_eh_ruim || saudade_dela) << std::endl;

    // O prefixo 0b denota um valor em binario
    int binario = 0b01100100; //0x -> hexadecimal
    // Operacao bitwise de Nao logico (inverte os valores)
    int inverso = ~binario;
    // Para imprimir em formato binario precisamos usar algumas ferramentas diferentes,
    // Mais para frente veremos o topico de bibliotecas e voce vai entender esse codigo melhor
    std::bitset<8> set_binario(binario);
    std::cout << "Original: " << set_binario << std::endl;
    std::bitset<8> set_inverso(inverso);
    std::cout << "Inverso: " << set_inverso << std::endl;

    return 0;
}