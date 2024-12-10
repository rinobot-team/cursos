#include <iostream>
#include <vector>

using namespace std;

// Como arrays nao passam de ponteiros para o primeiro elemento 
// podemos usar int* para um array de inteiros
float calcula_media_arr(int* array, int size) {
    float media = 0;
    for (int i = 0; i < size; i++) {
        media += array[i];
    }

    return (media / size);
}

float calcula_media_vec(vector<int> vec) {
    float media = 0;
    // Laco de for-each presente em containers
    // permite iterar mesmo sem saber o tamanho do vetor
    // le-se: para cada int num em vec
    for (int num : vec) {
        media += num;  
    }

    return (media / vec.size());
}

int main() {
    // Arrays C-Like
    int nums_size;
    cout << "Insira o tamanho do array c-like: ";
    cin >> nums_size;

    int nums[nums_size];
    cout << "Insira os " << nums_size << " elementos do array: " << endl;
    // Itera pelo array inserindo os dados do terminal
    for (int i =  0; i < nums_size; i++) {
        cin >> nums[i];
    }

    cout << "Media dos valores do array = " << calcula_media_arr(nums, nums_size) << endl;

    // Vector
    vector<int> nums_vec;
    int vec_size;
    cout << "Insira o tamanho do vetor: ";
    cin >> vec_size;
    for(int i = 0; i < vec_size; i++) {
        int input;
        cin >> input;
        nums_vec.push_back(input);
    }

    // Como o vetor eh dinamico podemos adicionar mais elementos, alem do tamanho dado como input
    nums_vec.push_back(7);

    cout << "Tamanho de vec = " << nums_vec.size() << endl;
    cout << "Media dos valores do vetor = " << calcula_media_vec(nums_vec) << endl;

    return 0;
}
