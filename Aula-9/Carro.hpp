#pragma once

#include <string>
#include <iostream>
// Utilizando o namespace std, ou standard
// todas as bibliotecas padrao como iostream, string ou stl
// estao sob esse namespace
using namespace std;

class Carro {
// Membros privados, so podem ser acessados pela propria classe
private:
    float velocidade = 0;
    int anoFabricacao;
// Membros publicos, podem se acessados em qualquer regiao do codigo
public:
    string marca;
    
    Carro(string marca, int ano);

    void acelerar(float aceleracao);
    void freiar(float frenagem);

    float getVel();
};
// Blocos de classe sempre tem ; depois da chave que fecha
