#include <iostream>
#include <string>

using namespace std;

struct Veiculo {
    string marca;
    string modelo;
    string placa;
    int anoFabricacao;
    string cor;
    float quilometragem;
};

int main() {
    Veiculo veiculo;

    cout << "Informe a marca do veículo: ";
    cin >> veiculo.marca;

    cout << "Informe o modelo do veículo: ";
    cin >> veiculo.modelo;

    cout << "Informe a placa do veículo: ";
    cin >> veiculo.placa;

    cout << "Informe o ano de fabricação do veículo: ";
    cin >> veiculo.anoFabricacao;

    cout << "Informe a cor do veículo: ";
    cin >> veiculo.cor;

    cout << "Informe a quilometragem do veículo: ";
    cin >> veiculo.quilometragem;

    cout << "Informações do veículo:" << endl;
    cout << "Marca: " << veiculo.marca << endl;
    cout << "Modelo: " << veiculo.modelo << endl;
    cout << "Placa: " << veiculo.placa << endl;
    cout << "Ano de Fabricação: " << veiculo.anoFabricacao << endl;
    cout << "Cor: " << veiculo.cor << endl;
    cout << "Quilometragem: " << veiculo.quilometragem << " km" << endl;

    return 0;
}