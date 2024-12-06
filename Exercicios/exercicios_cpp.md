# Exercícios C++

Este repositório contém exercícios de C++ para serem resolvidos. Os exercícios estão descritos aqui e possuem gabarito nas pastas `gabaritos_1` e `gabaritos_2`.

## Lista 1

### Exercício 1: Par ou ímpar

Crie uma função que retorne true caso um inteiro seja ímpar e false caso contrário.

### Exercício 2: 2.2.2.2.2

Crie uma função que retorne true caso um inteiro seja uma potência de 2

### Exercício 3: Inverso Inteiro

Crie uma função que retorne o “inverso” de um número inteiro. Por exemplo, o inverso de 123 é 321.

### Exercício 4: E até o papa poeta é

Crie uma função que retorne true caso uma string seja um palíndromo e false caso contrário. Pode desconsiderar espaços e pontuações.

### Exercício 5: Remove maiores

Crie uma função que remova o(s) maior(es) elemento(s) de um vetor de inteiros. Caso haja mais de um maior elemento, remova todos.

### Exercício 6: Três iguais

Crie uma função que recebe 3 ponteiros (para inteiros) e troca o valor de todos para serem igual ao valor maior deles.

## Lista 2

### Exercício 1: Maior dos maiores

Faça um programa que receba inputs de números inteiros. Ele deve encerrar somente se receber um número negativo. Após o encerramento ele deve imprimir o maior número que recebeu.

### Exercício 2: Troca com ponteiros

Desenvolva uma função `pontTroca(int *a, int *b)` que troque o valor de duas variáveis utilizando ponteiros. Faça um programa principal que receba os 2 valores do usuário, chame a função e depois imprima o resultado das operações.

### Exercício 3: Expansão de domínio

Faça uma função que recebe um vetor C-Like de tamanho `tam` e mude para `novoTam`. Caso novoTam seja maior que tam, expanda o vetor para o novo tamanho, caso contrário encerre o programa e imprima erro no terminal. O novo vetor maior deve ter os elementos do antigo nas mesmas posições e o resto dos elementos = 0.0.
Faça um programa principal que receba o primeiro tamanho, aloque o vetor dinamicamente, receba o segundo tamanho, chame a função anterior e depois imprima os resultados.

### Exercício 4: Katiau

Crie uma classe para representar um veículo. Ela deve conter os seguintes dados: marca, modelo, placa, ano de fabricação, cor e quilometragem. Depois, crie um programa principal que receba essas informações do usuário, instancie uma classe com os dados inseridos e depois imprima no terminal.

### Exercício 5: Cadastrando usuários

Crie uma classe Endereço que possua rua, número, cidade, estado.
Depois crie uma classe Cadastro que possua os campos nome, cpf, ano de nascimento e endereço (a classe anterior). Faça um programa principal que instancie essa classe, receba os dados do terminal e imprima todos.

## Desafio

### Incorretor Ortográfico

Fazer um programa que emula um terminal aberto esperando o input que reescreve o que o usuário digitar só que de forma levemente incorreta.

Não se preocupe com a forma do programa ou a maneira que ele vai se comportar de fato, faça do jeito que você achar interessante ou que gostaria de ver funcionando.
O que é considerado “levemente incorreto” também é por sua conta!

Exemplo:

```text
Pessoa: oi tudo bem?
Computador: oi thdo ben?
```

O desafio não tem um gabarito, então se vira ai! Boa sorte!
