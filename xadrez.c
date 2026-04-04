#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {

    printf("movimentando cavalo em L...\n");

    // CAVALO USANDO FOR ANINHADO COM WHILE
    // ====================================
    for (int i = 1; i <= 2; i++) {
    
    int passo = 1;

    while (passo <= 1) {
    printf("baixo\n");        // IMPRIME A DIREÇÃO PARA BAIXO
         passo++;
    }
    }
    printf("esquerda\n");     // IMPRIME A DIREÇÃO PARA ESQUERDA


    // TORRE USANDO FOR
    // ================
    // TORRE VAI ANDAR 5 CASAS PARA A DIREITA

    int t;

    printf("\nmovimentando torre para a direita\n");
    for(t = 1; t <= 5; t++) {
        printf("direita\n"); // IMPRIME A DIREÇÃO A CADA CASA
    }

    // BISPO USANDO WHILE
    //===================
    // BISPO VAI ANDAR 5 CASAS PARA DIAGONAL (CIMA + DIREITA)
    int j = 1;

    printf("\nmovimentando bispo na diagonal (cima + direita)\n");

    while (j <= 5) {
    printf("cima direita\n");   // IMPRIME A DIREÇÃO A CADA CASA
        j++;
    }

    //RAINHA USANDO DO WHILE
    //======================
    // RAINHA VAI ANDAR 8 CASAS PARA ESQUERDA
    int k =1;

    printf("\nmovimentando rainha para esquerda\n");
    do {
    printf("esquerda\n"); // IMPRIME A DIREÇÃO A CADA CASA
        k++;
    } while ( k <= 8);

    
    return 0;
    }

    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
