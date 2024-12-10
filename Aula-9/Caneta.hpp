#ifndef CANETA_H
#define CANETA_H //ou #pragma once

#include <iostream>
#include <string>

class Caneta{
    private:
        std::string marca;
        std::string cor;
        int qtdTinta;
    public:
        Caneta();
        Caneta(std::string marca, std::string cor);
        
        void setMarca(std::string marca);
        void setCor(std::string cor);
        std::string getMarca();
        std::string getCor();
        int getQtdTinta();

        void usarCaneta(int tempo);
        void imprimeCaneta();

        ~Caneta();

};

#endif //CANETA_H