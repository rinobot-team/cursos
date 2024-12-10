#include "Carro.hpp"
#include "Algebra.hpp"

// Declaramos a utilizacao do nosso namespace std
// entao nao eh preciso utilizar std::cout por exemplo
using namespace std;

int main () {
    // Embora seja possível instanciar classes dessa forma nao eh aconselhado
    // pois classes sao tipos muito grandes e eh melhor trabalhar com elas na forma
    // de ponteiros
    Carro carro_1 = Carro("Porshe", 2022);

    // Essa forma eh mais adequada, pois utiliza um ponteiro para o endereco da 
    // variavel do tipo carro, ao inves de passar ela como um todo
    Carro* carro_2 = new Carro("Subaru", 2024);

    // Membros de classes instanciadas podem ser acessados desta forma
    carro_1.acelerar(5);
    carro_1.freiar(2);
    cout << "Carro: " << carro_1.marca << " | " << carro_1.getVel() << " km/h" << endl;
    
    // Ja utilizando ponteiros de classes temos que utilizar a setinha de ponteiros
    carro_2->acelerar(7);
    carro_2->freiar(1);
    cout << "Carro: " << carro_2->marca << " | " << carro_2->getVel() << " km/h" << endl;
    // A classe carro_2 foi instanciada dentro da funcao main, entao assim que sair de escopo
    // (sairmos do corpo da funcao main) seu destructor sera automaticamente chamado e a memoria
    // ocupada pela classe desalocada

    double n1, n2;
    cout << "Digite dois numeros: ";
    cin >> n1;
    cin >> n2;

    // Acessando o metodo estatico, ou seja,
    // nao eh preciso instanciar uma variavel do tipo Algebra
    double soma = Algebra::adiciona(n1, n2);
    double prod = Algebra::multiplica(n1, n2);
    double pot = Algebra::potencia(n1, (int) n2); // Aqui fazemos casting da variavel n2 para int

    cout << "Operacoes: " << soma;
    cout << " | " << prod;
    cout << " | " << pot << endl;
    return 0;
}
