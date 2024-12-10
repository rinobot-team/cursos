#pragma once

#include "IDownloadable.hpp"
#include "Midia.hpp"

// Para o compilador a classe Musica herda Midia e IDownloadable
// porem, para nos programadores, dizemos que ela implementa IDownloadable
// por ser uma interface
class Musica : public Midia, public IDownloadable {
public:
    Musica(const std::string titulo);
    void reproduzir() const override;
    void download() const override;
};
