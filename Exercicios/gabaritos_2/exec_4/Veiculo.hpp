#include <string>

class Veiculo {
private:
    std::string marca;
    std::string modelo;
    std::string placa;
    int anoFabricacao;
    std::string cor;
    float quilometragem;

public:
    Veiculo();
    // Como o destrutor nao vai desalocar nada, neste caso, ele poderia ser omitido
    ~Veiculo();
    // Exemplo de Encapsulamento
    // Getters
    std::string getMarca() const;
    std::string getModelo() const;
    std::string getPlaca() const; 
    int getAnoFabricacao() const;
    std::string getCor() const;
    float getQuilometragem() const;

    // Setters
    void setMarca(const std::string& m);
    void setModelo(const std::string& m);
    void setPlaca(const std::string& p);
    void setAnoFabricacao(int ano);
    void setCor(const std::string& c);
    void setQuilometragem(float km);
};
