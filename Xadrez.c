#include <stdio.h>

int main() {

    int peca, casas, i, direcao;
    int vertical, horizontal;

    printf("Escolha a peça:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    scanf("%d", &peca);

    // CAVALO
    if (peca == 4) {

        printf("\nMovimento vertical:\n");
        printf("1 - Cima\n");
        printf("2 - Baixo\n");
        scanf("%d", &vertical);

        printf("\nMovimento horizontal:\n");
        printf("1 - Direita\n");
        printf("2 - Esquerda\n");
        scanf("%d", &horizontal);
    }

    // OUTRAS PEÇAS
    else {

        printf("\nQuantas casas deseja mover? ");
        scanf("%d", &casas);

        printf("\nEscolha a direção:\n");

        // BISPO e RAINHA
        if (peca == 2 || peca == 3) {

            printf("1 - Cima Direita\n");
            printf("2 - Cima Esquerda\n");
            printf("3 - Baixo Direita\n");
            printf("4 - Baixo Esquerda\n");
        }

        // TORRE
        else {

            printf("1 - Direita\n");
            printf("2 - Esquerda\n");
            printf("3 - Cima\n");
            printf("4 - Baixo\n");
        }

        scanf("%d", &direcao);
    }

    switch (peca) {

        // TORRE
        case 1:

            printf("\nMovimento da Torre:\n");

            for (i = 0; i < casas; i++) {

                if (direcao == 1) {
                    printf("Direita\n");
                }
                else if (direcao == 2) {
                    printf("Esquerda\n");
                }
                else if (direcao == 3) {
                    printf("Cima\n");
                }
                else if (direcao == 4) {
                    printf("Baixo\n");
                }
                else {
                    printf("Direção inválida!\n");
                    break;
                }
            }

            break;

        // BISPO
        case 2:

            printf("\nMovimento do Bispo:\n");

            for (i = 0; i < casas; i++) {

                if (direcao == 1) {
                    printf("Cima Direita\n");
                }
                else if (direcao == 2) {
                    printf("Cima Esquerda\n");
                }
                else if (direcao == 3) {
                    printf("Baixo Direita\n");
                }
                else if (direcao == 4) {
                    printf("Baixo Esquerda\n");
                }
                else {
                    printf("Direção inválida!\n");
                    break;
                }
            }

            break;

        // RAINHA
        case 3:

            printf("\nMovimento da Rainha:\n");

            for (i = 0; i < casas; i++) {

                if (direcao == 1) {
                    printf("Cima Direita\n");
                }
                else if (direcao == 2) {
                    printf("Cima Esquerda\n");
                }
                else if (direcao == 3) {
                    printf("Baixo Direita\n");
                }
                else if (direcao == 4) {
                    printf("Baixo Esquerda\n");
                }
                else {
                    printf("Direção inválida!\n");
                    break;
                }
            }

            break;

        // CAVALO
        case 4:

            printf("\nMovimento do Cavalo:\n");

            // duas casas verticais
            for (i = 0; i < 2; i++) {

                if (vertical == 1) {
                    printf("Cima\n");
                }
                else if (vertical == 2) {
                    printf("Baixo\n");
                }
                else {
                    printf("Movimento vertical inválido!\n");
                    break;
                }
            }

            // uma casa horizontal
            if (horizontal == 1) {
                printf("Direita\n");
            }
            else if (horizontal == 2) {
                printf("Esquerda\n");
            }
            else {
                printf("Movimento horizontal inválido!\n");
            }

            break;

        default:
            printf("Peça inválida!\n");
    }

    return 0;
}
