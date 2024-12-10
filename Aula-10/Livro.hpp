#pragma once

#include "IDownloadable.hpp"
#include "Midia.hpp"

// Para o compilador a classe Livro herda Midia e IDownloadable
// porem, para nos programadores, dizemos que ela implementa IDownloadable
// por ser uma interface
class Livro : public Midia, public IDownloadable {
public:
    Livro(const std::string titulo);
    void reproduzir() const override;
    void download() const override;
};
