#include "Filme.hpp"
#include "Midia.hpp"
#include <iostream>
#include <ostream>

// Como Filme eh subclasse de Midia chamamos
// o construtor de Midia para construir Filme
Filme::Filme(const std::string titulo) : Midia(titulo) {}

// Aqui fazemos a sobrescricao do metodo abstrato da classe pai Midia
void Filme::reproduzir() const {
    std::cout << "Iniciando o filme " << this->titulo << std::endl;
}

// Implementacao do metodo download da interface IDownladable
void Filme::download() const {
    std::cout << "Fazendo o download do filme " << this->titulo << std::endl;
}
