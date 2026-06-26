#include <stdio.h>

//Cria um programa que execute as seguintes operaçõessobre vetores, de forma sequencial:

int main() 
{   
    int vet1[10], vet2[8], soma = 0, vet3[10], maior, posmaior, menor, posmenor, vet4[6], notaspos = 0;
    float media;
//1-Leitura e apresentação de valores
//Lê 10 números inteiros para um vetor.
    /*for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ", (i + 1));
        scanf("%d", &vet1[i]);
    }
//Mostra todos os valores introduzidos.
    for(int i = 0; i < 10; i++) {
        printf(" %d | ", vet1[i]);
    }
    printf("\n");
//2- Soma dos elementos
//Lê 8 números inteiros para um segundo vetor.
    for(int i = 0; i < 8; i++ ) {
        printf("Digite um numero: ", i + 1);
        scanf("%d", &vet2[i]);
//Calcula e apresenta a soma de todos os elementos.    
        soma = soma + vet1[i] + vet2[i];
    }
//Mostra todos os valores introduzidos.
    for(int i = 0; i < 8; i++ ) {
        printf(" %d | ", vet2[i]);
    }printf("\n");
    printf("A soma de todos os elementos e: %d ", soma);
//3- Maior e menor valor
//Lê 10 números inteiros para um terceiro vetor.
    for(int i = 0; i < 10; i++ ) {
        printf("Digite um numero: ", i + 1);
        scanf("%d", &vet3[i]);
    }
//Mostra todos os valores introduzidos no vetor.
    for(int i = 0; i < 10; i++ ) {
        printf(" %d | ", vet3[i]);
    }
//Determina: o maior valor, o menor valor, a posição onde aparece o maior, o menor valor, a posição onde aparece o menor.
    printf("\n");
    maior = vet3[0];
    posmaior = 0;
    menor = vet3[0];
    posmenor = 0;
    for(int i = 0; i < 10; i++) {
        if(vet3[i] > maior) {
            maior = vet3[i];
            posmaior = i;
        } 
        else if(vet3[i] < menor) {
            menor = vet3[i];
            posmenor = i;
        }  
    }
//Apresenta: o maior valor, o menor valor, a posição onde aparece o maior, a posição onde aparece o menor. 
    printf("O maior valor e: %d. ", maior);
    printf("A posicao do maior valor e: %d.\n", posmaior + 1);
    printf("O menor valor e: %d. ", menor);
    printf("A posicao do menor valor e: %d. ", posmenor + 1);
    printf("\n");*/
//4- Média e notas positivas
//Lê 6 notas (valores reais ou inteiros) para um vetor.
    for (int i = 0; i < 6; i++) {
        printf("Digite uma nota: ");
        scanf("%d", &vet4[i]);
    }
//Mostra todos os valores introduzidos no vetor.
    for(int i = 0; i < 6; i++ ) {
        printf(" %d | ", vet4[i]);
    }
    printf("\n"); 
//Calcula e apresenta a média das notas. Indica também quantas notas são positivas (≥ 10).
    for(int i = 0; i < 6; i++) {
        soma = soma + vet4[i];
       if(vet4[i] >= 10) {
            notaspos++;   
       } 
    }
    media = soma / 6;
    
    printf("A media das notas e: %.2f", media);
    printf("E %d notas positivas foram inseridas", notaspos);
    
    printf("\n");

return 0;
}