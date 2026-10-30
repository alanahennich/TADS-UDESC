# Exercício – Coleções

## Objetivo

Desenvolver um programa em Java utilizando blocos independentes de código (`switch case`), implementando operações de ordenação, construção e manipulação de matrizes.

O programa deve executar a operação correspondente à opção numérica informada como entrada, seguindo os requisitos descritos abaixo.

## 1. Ordenação

- Ler um número inteiro positivo `n`.
- Ler uma sequência de `n` números inteiros.
- Ordenar os números em ordem crescente.
- Imprimir os números ordenados, separados por um espaço simples.

## 2. Construção de Matriz

- Ler dois números inteiros positivos:
  - `n`: quantidade de linhas.
  - `m`: quantidade de colunas.
- Ler `n × m` números inteiros.
- Armazenar os valores em uma matriz de dimensão `n × m`.
- Imprimir a matriz no formato convencional:
  - Os elementos de uma mesma linha devem ser separados por espaços.
  - Ao finalizar cada linha, realizar uma quebra de linha.

## 3. Determinante da Matriz

- Ler um número inteiro positivo `n`.
- Ler `n²` números inteiros.
- Armazenar os valores em uma matriz quadrada de dimensão `n × n`.
- Calcular o determinante da matriz.
- Imprimir o resultado.

## 4. Soma de Matrizes

- Realizar a leitura de duas matrizes de mesmas dimensões:
  - Matriz `A` de dimensão `n × m`.
  - Matriz `B` de dimensão `n × m`.
- Somar os elementos correspondentes das duas matrizes.
- Armazenar o resultado em uma terceira matriz `C`, também de dimensão `n × m`.
- Imprimir a matriz resultante `C`.

A operação deve seguir a seguinte regra:

```text
C[i][j] = A[i][j] + B[i][j]
```

## 5. Multiplicação de Matrizes

- Ler dois números inteiros positivos `m` e `n`.
- Realizar a leitura das seguintes matrizes:
  - Matriz `A` de dimensão `n × m`.
  - Matriz `B` de dimensão `m × n`.
- Multiplicar as matrizes `A` e `B`.
- Armazenar o resultado em uma terceira matriz `C`.
- Imprimir a matriz resultante.

A matriz resultante `C` terá dimensão `n × n`.

## Observações e regras gerais

- Todas as impressões devem finalizar com quebra de linha.
- O código deve priorizar a utilização de tipos orientados a objetos (*Wrapper Classes*), utilizando `Integer` em vez de `int`.
- Em algumas situações, a utilização de tipos primitivos é permitida, como dentro de laços de repetição, por exemplo.
- O não cumprimento da exigência de utilização de tipos orientados a objetos resultará em descontos na nota final, mesmo que o sistema de avaliação automática atribua nota 10 (dez).
- Caso seja informada uma opção fora do intervalo permitido (`1` a `5`) no `switch case`, o programa deve simplesmente encerrar a execução.

---

**Conceitos trabalhados:** Ordenação, matrizes bidimensionais, manipulação de vetores e matrizes, determinantes, soma e multiplicação de matrizes, estruturas de repetição, estruturas de seleção (`switch case`) e *Wrapper Classes* (`Integer`).
