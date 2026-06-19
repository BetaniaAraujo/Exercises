#include <stdio.h>

//Cria um programa que execute as seguintes operaçõessobre vetores, de forma sequencial:

int main() 
{   
    int num1[10], num2[8], soma = 0;
    //1-Leitura e apresentação de valores
    //Lê 10 números inteiros para um vetor.
    /*for(int i = 0; i < 10; i++ ) {
        printf("Digite um numero: ");
        scanf("%d", &num1[i]);
    }//Mostra todos os valores introduzidos.
    for(int i = 0; i < 10; i++ ) {
        printf(" %d | ", num1[i]);
    }
    printf("\n");*/
    //2- Soma dos elementos
    //Lê 8 números inteiros para um segundo vetor.
    for(int i = 0; i < 8; i++ ) {
        printf("Digite um numero: ");
        scanf("%d", &num2[i]);
        soma = soma + num2[i];
    }


return 0;
}