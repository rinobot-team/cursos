#include "Caneta.hpp"

Caneta::Caneta(){};
Caneta::Caneta(std::string marca, std::string cor){
    this->marca = marca;
    this->cor = "Preto";
    this->qtdTinta = 100;
};

void Caneta::setMarca(std::string marca){
    this->marca = marca;
}

void Caneta::setCor(std::string cor){
    this->cor = cor;
}

std::string Caneta::getMarca(){
    return this->marca;
}

std::string Caneta::getCor(){
    return this->cor;
}

int Caneta::getQtdTinta(){return this->qtdTinta;}

void Caneta::usarCaneta(int tempo){
    for(int i = 0; i < tempo; ++i){
        this->qtdTinta -= 2;
    }
    if(this->qtdTinta < 0){this->qtdTinta = 0;}
}

void Caneta::imprimeCaneta(){
    std::cout << "\nMarca: " << this->marca;
    std::cout << "\nCor: " << this->cor;
    std::cout << "\nTinta restante: " << this->qtdTinta << "\n";
}

Caneta::~Caneta(){
    std::cout << std::endl << "Objeto destruido...\n";
};
