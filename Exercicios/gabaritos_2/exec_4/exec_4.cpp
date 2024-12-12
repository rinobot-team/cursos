#include <iostream>
#include <string>
#include "Veiculo.hpp"

using namespace std;

int main() {
    Veiculo veiculo;

    std::string inputStr;
    int inputInt;
    float inputFloat;
    
    cout << "Informe a marca do veículo: ";
    cin >> inputStr;
    veiculo.setMarca(inputStr);

    cout << "Informe o modelo do veículo: ";
    cin >> inputStr;
    veiculo.setModelo(inputStr);

    cout << "Informe a placa do veículo: ";
    cin >> inputStr;
    veiculo.setPlaca(inputStr);

    cout << "Informe o ano de fabricação do veículo: ";
    cin >> inputInt;
    veiculo.setAnoFabricacao(inputInt);

    cout << "Informe a cor do veículo: ";
    cin >> inputStr;
    veiculo.setCor(inputStr);

    cout << "Informe a quilometragem do veículo: ";
    cin >> inputFloat;
    veiculo.setQuilometragem(inputFloat);

    cout << "Informações do veículo:" << endl;
    cout << "Marca: " << veiculo.getMarca() << endl;
    cout << "Modelo: " << veiculo.getModelo() << endl;
    cout << "Placa: " << veiculo.getPlaca() << endl;
    cout << "Ano de Fabricação: " << veiculo.getAnoFabricacao() << endl;
    cout << "Cor: " << veiculo.getCor() << endl;
    cout << "Quilometragem: " << veiculo.getQuilometragem() << " km" << endl;

    return 0;
}
