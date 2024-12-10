# Aula 10

O código-fonte desta aula está dividido entre diferentes cabeçalhos e arquivos de implementação. Para compilar o código, execute os comandos abaixo na pasta onde o arquivo está localizado:

Windows:

```bash
    gcc main.cpp Filme.cpp Musica.cpp Livro.cpp -o main.exe
    .\main.exe
```

Unix:

```bash
    g++ main.cpp Filme.cpp Musica.cpp Livro.cpp -o main
    ./main
```

Este programa é um exemplo de polimorfismo e herança em que a classe abstrata `Midia` é herdada por `Filme`, `Musica` e `Livro`.  
Além disso também há a implementação de uma interface `IDownloadable` que permite que objetos do tipo `Musica` e `Filme` sejam baixados.  
Perceba que cada classe possui sua própria implementação dos métodos abstratos da classe `Midia` e da interface `IDownloadable`.  

Caso tenha alguma dúvida sobre funcionamento do programada ou sobre a utilização de interfaces de linha de comando, entre em contato com algum gerente.
