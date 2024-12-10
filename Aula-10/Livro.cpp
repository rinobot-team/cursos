#include "Livro.hpp"
#include "Midia.hpp"
#include <iostream>
#include <ostream>

// Como Livro eh subclasse de Midia chamamos
// o construtor de Midia para construir Livro
Livro::Livro(const std::string titulo) : Midia(titulo) {}

// Aqui fazemos a sobrescricao do metodo abstrato da classe pai Midia
void Livro::reproduzir() const {
    std::cout << "Abrindo o livro " << this->titulo << std::endl;
}

// Implementacao do metodo download da interface IDownladable
void Livro::download() const {
    std::cout << "Fazendo o download do ebook " << this->titulo << std::endl;
}
