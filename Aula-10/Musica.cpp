#include "Musica.hpp"
#include "Midia.hpp"
#include <iostream>
#include <ostream>

// Como Musica eh subclasse de Midia chamamos
// o construtor de Midia para construir Musica
Musica::Musica(const std::string titulo) : Midia(titulo) {}

// Aqui fazemos a sobrescricao do metodo abstrato da classe pai Midia
void Musica::reproduzir() const {
    std::cout << "Tocando a musica " << this->titulo << std::endl;
}

// Implementacao do metodo download da interface IDownladable
void Musica::download() const {
    std::cout << "Fazendo o download da musica " << this->titulo << std::endl;
}

