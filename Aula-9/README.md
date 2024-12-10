# Aula 9

O código-fonte desta aula é o arquivo `main.cpp`, o arquivo `Carro.cpp` e o arquivo `Algebra.cpp`. Para compilar o código, execute os comandos abaixo na pasta onde o arquivo está localizado:

Windows:

```bash
    gcc main.cpp Carro.cpp Algebra.cpp -o main.exe
    .\main.exe
```

Unix:

```bash
    g++ main.cpp Carro.cpp Algebra.cpp -o main
    ./main
```

Este exemplo possui duas classes, `Carro` e `Algebra`. A classe `Carro` possui um método `acelerar` e um método `freiar`. A classe `Algebra` possui os métodos estáticos `adiciona`, `multiplica` e `potencia`.
O código irá imprimir as diferentes mensagens contidas no código no terminal.  
O programa também espera entradas via terminal, já que este conteúdo já foi visto, experimente diferentes entradas e modifique o código como desejar.  

Caso tenha alguma dúvida sobre funcionamento do programada ou sobre a utilização de interfaces de linha de comando, entre em contato com algum gerente.
