# Aula 10

O código-fonte desta aula está dividido entre diferentes cabeçalhos e arquivos de implementação seguindo uma estrutura comum de projeto em C++. Para compilar o código, execute os seguintes comandos no terminal, dentro da pasta da aula:

## Primeira compilação (configuração do CMake)

```bash
    mkdir -p build # cria a pasta build
    cd build # entra na pasta build
    cmake .. # configura o projeto
    make # compila o projeto
```

## Compilações futuras

```bash
    cd build # entra na pasta build
    make # compila o projeto
```

## Execução

Windows:

```bash
    .\build\main.exe # executa o programa
```

Unix:

```bash
    ./build/main # executa o programa
```

Este programa possui uma estrutura mais parecida com um projeto de C++ real, com arquivos de cabeçalho e de implementação separados em pastas diferentes. O código foi organizado da seguinte forma:

```bash
Aula-11/
├── CMakeLists.txt
├── include/
│   ├── Queue.hpp
│   └── Stack.hpp
├── src/
│   ├── main.cpp
│   ├── Queue.cpp
│   └── Stack.cpp
└── build/ (gerada pelo CMake)
```

Caso tenha alguma dúvida sobre funcionamento do programada ou sobre a utilização de interfaces de linha de comando, entre em contato com algum gerente.
