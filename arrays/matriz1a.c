/*Leitura e apresentação de uma matriz 3×3
• Lê uma matriz 3×3 de números inteiros.
• Mostra a matriz no ecrã em formato de tabela.*/

#include <stdio.h>

int main() {

    int linhas, colunas, soma = 0, maior = 0, posLinhaMaior = 0, posColMaior = 0, somaDiagonal = 0, par = 0;

    printf("Insira o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Insira o numero de colunas: ");
    scanf("%d", &colunas);
    int matriz[linhas][colunas];
//Lê uma matriz num × num de números inteiros.
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {            
            printf("Insira dados da posição: linha %d coluna %d: ", (i+1), (j+1));
            scanf("%d", &matriz[i][j]);
            soma = soma + matriz[i][j]; //Calcula a soma de todos os seus elementos.
            if(matriz[i][j] %2 == 0) {
                par += 1;
            }
        }
    }
    printf("\nImprimindo a matriz\n");
 //Mostra a matriz no ecrã em formato de tabela.   
    for(int i = 0; i < linhas; i++){
        printf("\n");
        for(int j = 0; j < colunas; j++) {            
            printf("linha [%d] coluna [%d] = %d | ", i, j, matriz[i][j]);
        }
    }
    printf("\n\n");
    printf("Soma dos %d elementos e de: %d \n", (linhas * colunas), soma); //apresenta a soma de todos os seus elementos.

    /*for(int i = 0; i < linhas; i++){
        printf("\n");
        for(int j = 0; j < colunas; j++) {            
            printf("linha %d | coluna %d = %d ", i, j, matriz[i][j]);   
        }
    }*/
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            /*printf("%d ", matriz[i][j]);*/
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                posLinhaMaior = i;
                posColMaior = j;   
            }          
        }
        printf("\n");
    }
    /*printf("Soma = %d\n", soma);*/
    printf("O maior valor existente na matriz e: %d , que esta na linha %d e coluna %d. \n", maior, (posLinhaMaior + 1), (posColMaior + 1));
    printf("Existem %d números pares nessa matriz. \n", par);
    
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if(i == j) {
                printf("%d\n", matriz[i][j]);
                somaDiagonal += matriz[i][j];
            }
            else {
                printf(" ");
            }       
        }
    }
    printf("Soma diagonal = %d\n", somaDiagonal);       
    return 0;
}