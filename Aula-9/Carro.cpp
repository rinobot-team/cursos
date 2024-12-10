#include "Carro.hpp"

// Implementacao do Construtor
// Utilizamos a sintaxe Classe::Metodo para acessar o metodo
Carro::Carro(string marca, int ano) {
    this->marca = marca;
    this->anoFabricacao = ano;
}

// Essa sintaxe tambem eh possivel para construtores
// eh chamada de definicao inline
//Carro::Carro(string marca) : marca(marca), anoFabricacao(ano) {}

void Carro::acelerar(float aceleracao) {
    this->velocidade += aceleracao;
}

void Carro::freiar(float frenagem) {
    this->velocidade -= frenagem;
}

// Chamado de metodo getter
float Carro::getVel() {
    return this->velocidade;
}
