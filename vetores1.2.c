#include <stdio.h>

//Cria um programa que execute as seguintes operaçõessobre vetores, de forma sequencial:

int main() 
{   //o usuário irá indicar o tamanho do vetor
    int tamanho, soma = 0, maior=vetor[0], posicaoMaior, posicaoMenor;

    do {
        printf("Insira o tamanho: ");
        scanf("%d", &tamanho);
    }
    while(tamanho <= 0);
    int vetor[tamanho];
    
    for(int i = 0; i < tamanho; i++) {
        printf("Insira o %dº numero: ", (i+1));
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
        }
    int maior = vetor[0], menor = vetor[0];    
        for(int i = 0; i < tamanho; i++) {
            printf("Posicao %d: %d \n ", (i+1), vetor[i]);
            if(vetor[i] > maior) {
                maior = vetor[i];
                posicaoMaior = i;
            }
            if(vetor[i] < menor) {
                menor = vetor[i];
                posicaoMenor = i;
        }
    }
    printf("A soma dos elementos é: %d"; soma)
    printf("O maior valor é %d e está na posicao %d.\n", maior, (posicaoMaior+1));
    printf("O menor valor é %d e está na posicao %d.\n", menor, (posicaoMenor+1));

return 0;
}

    /*if(i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        }
        else {
            if(vetor[i] > maior) {
                maior = vetor[i];
                posicaoMaior = i;
            }
        }
        if(vetor[i] < menor) {
                menor = vetor[i];
                posicaoMenor = i;
        }*/