#include <stdio.h>

// Desafio Xadrez - Introdução à programação de computadores (Tema 3)
// Karina Salvadeo Pereira (Engenharia de software)

int main() {
    // Movimentos da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    // Lógica recursiva para o movimento da Torre
    int casasTorre = 5;
    while (casasTorre > 0) {
        printf("Direita\n");
        casasTorre--;
    }
    printf("\n");

    // Movimentos do Bispo: 5 casas na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    // Lógica recursiva para o movimento do Bispo
    int casasBispo = 5;
    while (casasBispo > 0) {
        printf("Cima, Direita\n");
        casasBispo--;
    }
    printf("\n");

    // Movimentos da Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    // Lógica recursiva para o movimento da Rainha
    int casasRainha = 8;
    while (casasRainha > 0) {
        printf("Esquerda\n");
        casasRainha--;
    }
    printf("\n");

    // Movimentos do Cavalo: 2 casas para cima e 1 casa para a direita
    printf("Movimento do Cavalo:\n");
    // Lógica para o movimento do Cavalo utilizando loops complexos
    for (int i = 0; i < 2; i++) { // Movimentos verticais (2 casas para cima)
        for (int j = 0; j < 1; j++) { // Movimento horizontal (1 casa para a direita)
            if (i == 0) {
                printf("Cima\n");
            } else {
                printf("Cima\n");
            }
            if (j == 0) {
                printf("Direita\n");
            }
        }
    }
    printf("\n");

    return 0;
}
