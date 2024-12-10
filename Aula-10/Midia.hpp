#pragma once

#include <iostream>

// Por Midia ser uma classe abstrata ela nao precisa
// de arquivo .cpp, de implementacao
class Midia {
// Componente protected, ou seja, somente a propria classe
// e subclasses tem acesso
protected:
    std::string titulo;

public:
    // Implementacao inline do construtor
    Midia(const std::string titulo) : titulo(titulo) {}
    // A palavra chave virtual simboliza 
    // que o metodo eh abstrato
    virtual void reproduzir() const = 0;
    virtual ~Midia() = default;
};
