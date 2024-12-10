#pragma once

#include "IDownloadable.hpp"
#include "Midia.hpp"

// Para o compilador a classe Filme herda Midia e IDownloadable
// porem, para nos programadores, dizemos que ela implementa IDownloadable
// por ser uma interface
class Filme : public Midia, public IDownloadable {
public:
    Filme(const std::string titulo);
    void reproduzir() const override;
    void download() const override;
};
