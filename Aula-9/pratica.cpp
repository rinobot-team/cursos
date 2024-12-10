#include "Caneta.hpp"

int main(){
    Caneta *c1 = new Caneta;
    Caneta c2("BIC", "Preto");
    c1->imprimeCaneta();
    c2.imprimeCaneta();

    c1->setMarca("TILIBRA");
    c1->setCor("Verda");
    c1->usarCaneta(20);

    c2.usarCaneta(2);

    c1->imprimeCaneta();
    c2.imprimeCaneta();

    delete c1;

    std::cout << "\nFDP...\n";
    return 0;
}

//pesquise sobre ENUNS e UNIONS e STRUCTS;