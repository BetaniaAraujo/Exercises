#include <stdio.h>

//Cria um programa que execute as seguintes operaçõessobre vetores, de forma sequencial:

int main() 
{   
    int vet1[10], vet2[8], soma = 0, vet3[10], maior, posmaior;
//1-Leitura e apresentação de valores
//Lê 10 números inteiros para um vetor.
    /*for(int i = 0; i < 10; i++) {
        printf("Digite um numero %dº: ", i + 1);
        scanf("%d", &vet1[i]);
    }
//Mostra todos os valores introduzidos.
    for(int i = 0; i < 10; i++ ) {
        printf(" %d | ", vet1[i]);
    }
    printf("\n");
//2- Soma dos elementos
//Lê 8 números inteiros para um segundo vetor.
    for(int i = 0; i < 8; i++ ) {
        printf("Digite um numero %dº: ", i + 1);
        scanf("%d", &vet2[i]);
//Calcula e apresenta a soma de todos os elementos.    
        soma = soma + vet1[i] + vet2[i];
    }
//Mostra todos os valores introduzidos.
    for(int i = 0; i < 8; i++ ) {
        printf(" %d | ", vet2[i]);
    }printf("\n");
    printf("A soma de todos os elementos e: %d ", soma);*/
//3- Maior e menor valor
//Lê 10 números inteiros para um terceiro vetor.
    for(int i = 0; i < 10; i++ ) {
        printf("Digite um número %dº: ", i + 1);
        scanf("%d", &vet3[i]);
    }
//Mostra todos os valores introduzidos.
    for(int i = 0; i < 10; i++ ) {
        printf(" %d | ", vet3[i]);
    }
    printf("\n");
    maior = vet3[0];
    posmaior = vet3[0];
    for(int i = 0; i < 10; i++) {
        if(vet3[i] > maior) {
            maior = vet3[i];
            posmaior = vet3[i];
        }
    }
    
    
    printf("O maior valor e: %d ", maior);
    printf("A posicao do maior valor e: %d ", posmaior + 1);

return 0;
}