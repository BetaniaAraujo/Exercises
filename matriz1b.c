#include <stdio.h>

int main() {

    int linhas, colunas, soma = 0, diagonalsec = 0, diagonalprinc = 0;
    
    printf("Insira do numero de linhas: ");
    scanf("%d", &linhas);
    printf("Insira o numero de colunas: ");
    scanf("%d", &colunas);
    int matriz[linhas][colunas];
//Lê a e salvar matriz
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Insira os valores: linhas %d colunas %d: ", (i+1), (j+1));
            scanf("%d", &matriz[i][j]);
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
    for(int j = 0; j < colunas; j++) {
        soma = 0;
        for(int i = 0; i < linhas; i++) {
            soma = soma + matriz[i][j];
        }
        printf("A soma da %d coluna = %d\n", j+1, soma);
    }
    printf("\nDiagonal Secundaria\n");
//mostra os elementos da diagonal secundária
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if(i + j == linhas-1) {
                printf("%d\n", matriz[i][j]);
            //soma da diagonal secundária
                diagonalsec += matriz[i][j];
            }
            else {
                printf(" ");
            }
        }
    }
    printf("\nDiagonal Principal\n");
//mostra os elementos da diagonal principal
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if(i == j) {
                printf("%d\n", matriz[i][j]);
            //soma da diagonal principal
                diagonalprinc += matriz[i][j];
            }
            else {
                printf(" ");
            }
        }
    }
    
    printf("\n");
    printf("Soma dos elementos da diagonal secunadaria: %d\n", diagonalsec);
    printf("Soma dos elementos da diagonal principal: %d\n", diagonalprinc);
    


    return 0;
}