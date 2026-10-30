# Exercício – Orientação a Objetos

## Objetivo

Complete o programa em Java apresentado, implementando as classes, atributos, métodos e relacionamentos de herança descritos a seguir.

> **Importante:** O arquivo principal (`Main`) não deve ser modificado.

## 1. Classe `Veiculo`

A classe `Veiculo` deve conter os seguintes atributos:

| Atributo | Tipo |
|---|---|
| `ano` | `int` |
| `chassi` | `int` |
| `preco` | `float` |
| `quilometragem` | `float` |
| `semParar` | `float` |

Além dos atributos, deve implementar:
- Método `PagarPedagio()`.
- Construtor que receba, nesta ordem:
  - `int ano`
  - `int chassi`
  - `float preco`
  - `float semParar`

## 2. Classe `Moto`

A classe `Moto` deve herdar da classe `Veiculo` e conter o seguinte atributo:

| Atributo | Tipo |
|---|---|
| `cilindradas` | `int` |

**Métodos e construtor:**
- Implementar o método `PagarPedagio()`, que deve debitar **10** do saldo `semParar`.
- Criar um construtor que receba, nesta ordem:
  - `int ano`
  - `int chassi`
  - `float preco`
  - `float semParar`
  - `int cilindradas`
- Utilizar `super()` para chamar a superclasse e inicializar os atributos em comum.

## 3. Classe `Caminhao`

A classe `Caminhao` deve herdar da classe `Veiculo` e conter os seguintes atributos:

| Atributo | Tipo |
|---|---|
| `capacidadeTotal` | `int` |
| `capacidadeAtual` | `int` |

**Métodos e construtor:**
- Implementar o método `PagarPedagio()`, que deve debitar **40** do saldo `semParar`.
- Criar um construtor que receba, nesta ordem:
  - `int ano`
  - `int chassi`
  - `float preco`
  - `float semParar`
  - `int capacidadeTotal`
- Utilizar `super()` para inicializar os atributos em comum.

**Regra para alteração da capacidade atual:**

O método responsável por alterar `capacidadeAtual` deve receber um valor inteiro que não ultrapasse `capacidadeTotal`.

Caso o valor informado ultrapasse o limite, deverá exibir a mensagem:

```text
Carga excedida!
```

## 4. Classe `Carro`

A classe `Carro` deve herdar da classe `Veiculo` e conter os seguintes atributos:

| Atributo | Tipo |
|---|---|
| `automatico` | `boolean` |
| `frequencia` | `Radio` |
| `amplitude` | `Radio` |

O atributo `automatico` indica se o veículo possui câmbio automático ou não. Já `frequencia` e `amplitude` são objetos da classe `Radio`.

**Métodos e construtor:**
- Implementar o método `PagarPedagio()`, que deve debitar **20** do saldo `semParar`.
- Criar um construtor que receba, nesta ordem:
  - `int ano`
  - `int chassi`
  - `float preco`
  - `float semParar`
  - `boolean automatico`
- Utilizar `super()` para inicializar os atributos em comum.

## 5. Classe `Radio`

A classe `Radio` não possui herança e deve conter os seguintes atributos:

| Atributo | Tipo |
|---|---|
| `estacao` | `String` |
| `canal` | `int` |
| `volume` | `int` |

**Requisitos:**

- No construtor, inicializar:
  - Estação AM com valor **20**.
  - Estação FM com valor **80**.
- Implementar métodos para aumentar e diminuir o volume em incrementos de **10**.
- O volume máximo permitido é **100**.
- O volume mínimo permitido é **0**.

## 6. Requisitos gerais

Todas as classes devem possuir getters e setters para seus respectivos atributos, mesmo que não sejam utilizados no programa principal.

**Pagamento de pedágio:**

O método `PagarPedagio()` de cada classe deve:
1. Verificar se existe saldo suficiente para pagar o pedágio.
2. Caso exista saldo suficiente, debitar o valor correspondente.
3. Imprimir o saldo atualizado no formato:

```text
Dinheiro: $$
```

Onde `$$` representa o valor atual do atributo `semParar`.

Caso não exista saldo suficiente, deverá exibir uma mensagem informando que o veículo não possui dinheiro suficiente para pagar o pedágio. Por exemplo:

```text
Moto sem dinheiro suficiente!
```

### Valores de pedágio

| Classe | Valor |
|---|---:|
| `Moto` | 10 |
| `Carro` | 20 |
| `Caminhao` | 40 |

---

**Conceitos trabalhados:** Classes e objetos, encapsulamento, construtores, herança, sobrescrita de métodos (`@Override`), reutilização de código e validação de atributos.
