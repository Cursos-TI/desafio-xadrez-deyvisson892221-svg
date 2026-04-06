// === DESAFIO XADREZ MESTRE
// === ALUNO: Deivisson Marques

#include <stdio.h>

// FUNÇÃO RECURSIVA DA TORRE
// A função recebe o número de casas que a torre deve andar
// e chama ela mesma até chegar em 0
void moverTorre(int casas) {

    if (casas == 0) {
        return; // condição de parada da recursividade
    }

    printf("Direita\n"); // imprime o movimento
    moverTorre(casas - 1); // chama a função novamente diminuindo 1 casa
}

// FUNÇÃO RECURSIVA DA RAINHA
void moverRainha(int casas) {

    if (casas == 0) {
        return; // para quando não houver mais casas
    }

    printf("Esquerda\n"); // movimento da rainha
    moverRainha(casas - 1); // chamada recursiva
}

// FUNÇÃO RECURSIVA DO BISPO
// ========================================
// Aqui usamos recursividade + loops aninhados
// loop externo = movimento vertical
// loop interno = movimento horizontal
void moverBispo(int casas) {

    if (casas == 0) {
        return; // condição de parada
    }

    // loops aninhados para representar a diagonal
    for (int vertical = 1; vertical <= 1; vertical++) {

        for (int horizontal = 1; horizontal <= 1; horizontal++) {

            printf("Cima direita\n");

        }
    }

    moverBispo(casas - 1); // chamada recursiva
}


// PROGRAMA PRINCIPAL
int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);


    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);


    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);


    // MOVIMENTO DO CAVALO COM LOOPS ANINHADOS
    // cavalo vai andar 2 casas para cima
    // e 1 casa para direita (formando o L)

    printf("\nMovimento do Cavalo:\n");

    for (int vertical = 1; vertical <= 2; vertical++) {

        printf("Cima\n");

        for (int horizontal = 1; horizontal <= 1; horizontal++) {

            if (vertical == 2) { // só executa na segunda subida
                printf("Direita\n");
                break;
            }

        }
    }

    return 0;
}