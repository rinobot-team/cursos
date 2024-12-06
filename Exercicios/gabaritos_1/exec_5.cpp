#include <iostream>
#include <vector>

using namespace std;

void removeMaior(vector<int>& vetor) {
    if (vetor.empty()) {
        cout << "O vetor está vazio." << endl;
        return;
    }

    int maior = vetor[0];

    for (int i = 1; i < vetor.size(); i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    for (int i = 0; i < vetor.size(); ) {
        if (vetor[i] == maior) {
            vetor.erase(vetor.begin() + i);
        } else {
            i++;
        }
    }
}

int main() {
    vector<int> vetor = {1, 2, 3, 20, 4, 5, 6, 20};
    removeMaior(vetor);

    cout << "Números menores: ";
    for (int num : vetor) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}