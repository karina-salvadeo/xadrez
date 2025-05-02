# xadrez

# Simulador de Movimentos de Peças de Xadrez em C

Este projeto simula os movimentos de quatro peças do xadrez — **Torre**, **Bispo**, **Rainha** e **Cavalo** — utilizando estruturas de repetição, recursividade e loops aninhados.

## Funcionalidades

- Estruturas de repetição (`for`, `while`, `do-while`)
- Funções recursivas
- Loops aninhados
- Impressão detalhada dos movimentos

Cada peça simula um movimento específico e imprime a direção de cada casa percorrida.

---

## Como Compilar e Executar

### Requisitos

- Um compilador de C (ex: GCC).
- Sistema operacional: Linux, macOS, ou Windows (com compilador adequado).

### Passos

1. **Compilar o código**:

   Se você está usando o GCC, abra o terminal ou prompt de comando e execute o seguinte comando para compilar o código:

   ```
   gcc -o xadrez_simulador xadrez_simulador.c
   ```

2. **Executar o programa**:

   Após a compilação, execute o programa com o seguinte comando:

   ```
   ./xadrez_simulador
   ```

Você verá a saída com os movimentos simulados de cada peça no console.

---

## Exemplos de Execução

### Torre
- **Movimento simulado:** 5 casas para a **direita**
- **Saída esperada:**
  ```
  Movimento da Torre:
  Direita
  Direita
  Direita
  Direita
  Direita
  ```

### Bispo
- **Movimento simulado:** 5 casas na diagonal **cima, direita**
- **Saída esperada:**
  ```
  Movimento do Bispo:
  Cima, Direita
  Cima, Direita
  Cima, Direita
  Cima, Direita
  Cima, Direita
  ```

### Rainha
- **Movimento simulado:** 8 casas para a **esquerda**
- **Saída esperada:**
  ```
  Movimento da Rainha:
  Esquerda
  Esquerda
  Esquerda
  Esquerda
  Esquerda
  Esquerda
  Esquerda
  Esquerda
  ```

### Cavalo
- **Movimento simulado:** 2 casas para **cima**, 1 casa para a **direita**, formando um "L"
- **Saída esperada:**
  ```
  Movimento do Cavalo:
  Cima
  Direita
  Cima
  Direita
  ```
