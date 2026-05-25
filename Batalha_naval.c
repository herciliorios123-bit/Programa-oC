#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){ // Definindo a matriz e posição dos navios
    int linha, coluna;
    int tabuleiro[10][10] = {0};

    int navioHorizontal[3] = {3,3,3}; // Delimitando tamnho dos navios
    int navioVertical[3] = {3,3,3};

    srand(time(0)); // Gerando aleatoriedade utilizando rand

    int linhaH = rand() % 10; // Gera um número aleatório que é dividido por 10 para não utrapassar o limite

    // Máximo 7 porque o navio ocupa 3 posições
    int colunaH = rand() % 8;

     for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // NAVIO VERTICAL
    
    int linhaV;
    int colunaV;
    int valido = 0;

    while (valido == 0)
    {
        linhaV = rand() % 8;
        colunaV = rand() % 10;

        valido = 1;

        // Verifica sobreposição
        for (int i = 0; i < 3; i++)
        {
            if (tabuleiro[linhaV + i][colunaV] == 3)
            {
                valido = 0;
            }
        }
    }

    // Posiciona navio vertical
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

printf("Digite as coordenadas que voce quer atirar \n");
scanf("%d %d", &linha, &coluna); 

linha--; // Isso é pra não dar confusão pois o código conta uma linha 0
coluna--; // Então eu tiro um número para o usuario não ficar confuso

if (tabuleiro[linha][coluna] == 3)
{
    printf("Acerto \n");
} else {
    printf("Agua \n");
}

//MOSTRAR TABULEIRO
 for (int linha = 0; linha < 10; linha++) 
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            printf("%d ", tabuleiro[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}
