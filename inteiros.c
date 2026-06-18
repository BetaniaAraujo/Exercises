#include <stdio.h>
//O programa deve ler números inteiros até o utilizador introduzir 0. No final, deve mostrar a soma dos números introduzidos.
                            
int main() {
    int numero = 0, soma = 0;
    //Ler números interiros
    printf("Digite um numero. Use 0 para terminar:\n");
    scanf("%d", &numero);
    //Até que seja digitado 0
//while:    
    while(numero != 0) {
        soma = soma + numero;
        printf("Digite um numero. Use 0 para terminar:\n");
        scanf("%d", &numero);
    }
    //Mostrar a soma dos números
    printf("A soma dos numeros e: %d\n", soma);
//do while:        
    /*do {
        printf("Digite um numero:\n");
        scanf("%d", &numero);
        soma = soma + numero;
    }while(numero != 0);
        
    //Mostrar a soma dos números
    printf("A soma dos numeros e: %d\n", soma);*/
    
    return 0;
}
