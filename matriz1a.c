#include <stdio.h>

int main() {

    int linhas, colunas, soma = 0;
    printf("Insira o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Insira o numero de colunas: ");
    scanf("%d", &colunas);
    int matriz[linhas][colunas];
//Lê uma matriz 3×3 de números inteiros.
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {            
            printf("Insira dados da posicao: linha %d coluna %d: ", (i+1), (j+1));
            scanf("%d", &matriz[i][j]);
            soma = soma + matriz[i][j]; //Calcula e apresenta a soma de todos os seus elementos. 
        }
    }
    printf("\nImprimindo a matriz\n");
 //Mostra a matriz no ecrã em formato de tabela.   
    for(int i = 0; i < linhas; i++){
        printf("\n");
        for(int j = 0; j < colunas; j++) {            
            printf("linha %d | coluna %d = %d ", i, j, matriz[i][j]);   
        }
    }
    printf("\n\n");
    printf("Soma dos %d os elementos e de: %d", (linhas * colunas), soma);

    return 0;
}