#include <iostream>
#include <vector>

#define MAX_TAM 100

int* alocaDinamicamente(int tam){
    int *vet = new int[tam];
    for(int i = 0; i < tam; ++i){
        *(vet + i) = 10; // vet[i]
    }
    return vet;
}
void imprimeVetor(int* vet, int tam){
    for(int i = 0; i < tam; ++i){
        std::cout << *(vet + i) << " ";
    }
}
void swap(int* x, int* y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int vet[MAX_TAM];
    std::cout << "Insira o numero de elementos do vetor: ";
    int tam;
    std::cin >> tam;
    for(int i = 0; i < tam; ++i){
        std::cin >> *(vet + i);
    }
    std::cout << std::endl;
    for(int i = 0; i < tam; ++i){
        std::cout << *(vet + i) << " ";
    }
    std::cout << std::endl;
    for(int i = 0; i < MAX_TAM; ++i){
        std::cout << *(vet + i) << " ";
    }

    std::cout << "Insira o tamanho do vetor: ";
    int n;
    std::cin >> n;
    int *vet = alocaDinamicamente(n);
    imprimeVetor(vet, n);
    vet[0] = 2;
    *(vet + 1) = 2;
    std::cout << std::endl; 
    imprimeVetor(vet, n);
    swap(vet, (vet + 3));
    std::cout << std::endl;
    imprimeVetor(vet, n);

    int x = 10;
    int &ref_x = x;
    std::cout << x << std::endl;
    ref_x = 9;
    std::cout << ref_x << std::endl;

    std::vector<float> vet(10);
    for(int x : vet){
        x = 0;
    }
    for(int x : vet){
        std::cout << x << " ";
    }

    std::cout << "\nFDP...\n";
    return 0;
}