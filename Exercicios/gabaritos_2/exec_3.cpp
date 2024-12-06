#include <iostream>

using namespace std;

void redimensionarVetor(float*& vetor, int& tam, int novoTam) {
    if (novoTam <= tam) {
        return;
    }

    float* novoVetor = new float[novoTam];

    for (int i = 0; i < tam; i++) {
        novoVetor[i] = vetor[i];
    }

    for (int i = tam; i < novoTam; i++) {
        novoVetor[i] = 0.0f;
    }

    // Libera a memória do vetor original
    delete[] vetor;

    vetor = novoVetor;
    tam = novoTam;
}

int main() {
    int tamanho, novoTamanho;

    cout << "Digite o tamanho inicial do vetor: ";
    cin >> tamanho;

    //Aloca o vetor dinamicamente
    float* vetor = new float[tamanho];

    cout << "Insira o conteúdo do vetor: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }

    cout << "Digite o novo tamanho desejado: ";
    cin >> novoTamanho;

    redimensionarVetor(vetor, tamanho, novoTamanho);

    cout << "Vetor redimensionado:" << std::endl;
    for (int i = 0; i < novoTamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << std::endl;

    // Libera a memória alocada para o vetor
    delete[] vetor;

    return 0;
}