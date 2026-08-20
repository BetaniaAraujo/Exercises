
/*Lê um número inteiro e mostra a sua tabuada de 1 até 10.*/

#include <stdio.h>

int main()
{
    int numero;
    //Pede o número ao usuário
    printf("Digite um numero: ");
    //Guarda o número introduzido
    scanf("%d", &numero);
    //"Crie i começando em 1; enquanto i for menor ou igual a 10; aumente i de 1 em 1."
    for (int i = 1; i <= 10; i++)
    { //Mostra a tabuada do número digitado
        printf("%d x %d = %d\n", numero, i, (numero * i));
    }
    
    printf("---------FIM DE PROGRAMA--------\n");

    return 0;
}