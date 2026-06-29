#include <stdio.h>

int main() {

    int linhas, colunas, soma = 0, maior = 0, poslinhamaior = 0, poscolmaior = 0, somadiagonal = 0, par;
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
            printf("linha %d | coluna %d = %d ", i, j, matriz[i][j]);   
        }
    }
    printf("\n\n");
    printf("Soma dos %d os elementos e de: %d", (linhas * colunas), soma); //apresenta a soma de todos os seus elementos.

    for(int i = 0; i < linhas; i++){
        printf("\n");
        for(int j = 0; j < colunas; j++) {            
            printf("linha %d | coluna %d = %d ", i, j, matriz[i][j]);   
        }
    }
    maior = matriz[0][0];
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
            if(matriz[i][j] > maior) {
             maior = matriz[i][j];
             poslinhamaior = i;
             poscolmaior = j;   
            }          
            printf("O maior valor existente na matriz é: %d, que esta na linha %d e coluna %d ", matriz, poslinhamaior+1, poscolmaior+1);
            printf("Existem %d numeros pares nessa matriz. ", par);
        }
    }
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
            if(i == j) {
             printf("%d", matriz[i][j]);
             somadiagonal += matriz[i][j];
            }
            else {
                printf(" ");
            }
            printf("\n");       
        }
    }       
    return 0;
}