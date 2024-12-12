#include "Veiculo.hpp"
#include <string>

// Construtor inicializa a quilometragem como 0
Veiculo::Veiculo(): quilometragem(0.0) {}

// Destrutor nao precisa fazer nada
Veiculo::~Veiculo() {}

std::string Veiculo::getMarca() const { return marca; }

std::string Veiculo::getModelo() const { return modelo; }

std::string Veiculo::getPlaca() const { return placa; }

int Veiculo::getAnoFabricacao() const { return anoFabricacao; }

std::string Veiculo::getCor() const { return cor; }

float Veiculo::getQuilometragem() const { return quilometragem; }

void Veiculo::setMarca(const std::string& m) { marca = m; }
void Veiculo::setModelo(const std::string& m) { modelo = m; }
void Veiculo::setPlaca(const std::string& p) { placa = p; }
void Veiculo::setAnoFabricacao(int ano) { anoFabricacao = ano; }
void Veiculo::setCor(const std::string& c) { cor = c; }
void Veiculo::setQuilometragem(float km) { quilometragem = km; }
