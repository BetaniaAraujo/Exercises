#include <stdio.h>

int main() {

    int linhas, colunas, soma = 0, SomaDiagonalS = 0, SomaDiagonalP = 0;
    
    printf("Insira do numero de linhas: ");
    scanf("%d", &linhas);
    printf("Insira o numero de colunas: ");
    scanf("%d", &colunas);
    int matriz[linhas][colunas];
    int matriz2[linhas][colunas];
//Lê a e salvar matriz
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Insira os valores: linhas %d colunas %d: ", (i+1), (j+1));
            scanf("%d", &matriz[i][j]);
            matriz2[i][j]=matriz[i][j];
        }
    }
    printf("\nImprimindo Matriz\n");
    for(int i = 0; i < linhas; i++) {
        printf("\n");
        for(int j = 0; j < colunas; j++) {
            printf("%d  ", matriz[i][j]);
        }
    }
    printf("\n\n");
//soma de cada coluna
    int vetor[colunas];
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            vetor[j] += matriz[i][j];
        }
    }
    for(int j = 0; j < colunas; j++) {
        printf("A soma da %d coluna = %d\n", j+1, vetor[j]);
    }
    printf("\nDiagonal Secundaria\n");
//mostra os elementos da diagonal secundária
    if(linhas == colunas) {
        for(int i = 0; i < linhas; i++) {
            for(int j = 0; j < colunas; j++) {
                if(i + j == linhas-1) {
                    printf("%d\n", matriz[i][j]);
            //soma da diagonal secundária
                    SomaDiagonalS += matriz[i][j];
                }
                else {
                    printf("_ ");
                }
            }
            printf("\n");
        }
    }
    printf("\nDiagonal Principal\n");
//mostra os elementos da diagonal principal
    if(linhas == colunas) {
        for(int i = 0; i < linhas; i++) {
            for(int j = 0; j < colunas; j++) {
                if(i == j) {
                    printf("%d\n", matriz[i][j]);
            //soma da diagonal principal
                    SomaDiagonalP += matriz[i][j];
                }
                else {
                    printf("_ ");
                }
            }
            printf("\n");
        }    
    }
    printf("Soma dos elementos da diagonal secunadaria: %d\n", SomaDiagonalS);
    printf("Soma dos elementos da diagonal principal: %d\n", SomaDiagonalP);
    printf("\n");
    if(SomaDiagonalP > SomaDiagonalP) {
        printf("A soma da matriz principal e superior em %d .", (SomaDiagonalP-SomaDiagonalS));
    } else {
        printf("A soma da matriz secundaria e superior em %d .", (SomaDiagonalS-SomaDiagonalP));
        }
    }
    printf("\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Matriz 1 [%d][%d] - %d | Matriz 2 [%d][%d] - %d\n", (i+1), (j+1), matriz[i][j], (i+1), (j+1), matriz2[i][j],);
        }
    }
    printf("\n");


return 0;
}