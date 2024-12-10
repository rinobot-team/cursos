#include <iostream>

int contagem(int tempoInicio, int tempoFinal){
    return tempoFinal - tempoInicio;
}

void contador(int temp1, int temp2){
    //int num = contagem(temp1, temp2);
    for(int i = 0; i < contagem(temp1, temp2); ++i){
        std::cout << "N:" << i << " ";
    }
}

void imprimeNumero(int tam){
    if(tam < 0) return;
    else{
        imprimeNumero(tam - 1);
        std::cout << "TAM:" << tam << "\n";
    }
}

int main(){

    contador(50, 139);
    imprimeNumero(15);


    std::cout << "\nFIM DO PROGRAMA...\n";
    return 0;
}