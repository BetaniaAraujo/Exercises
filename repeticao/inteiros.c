
/*O programa deve ler números inteiros até o utilizador introduzir 0. No final, deve mostrar a soma dos números introduzidos.*/

#include <stdio.h>
                            
int main() {
    int numero = 0, soma = 0;
    //com while: 
    //Ler números inteiros
    printf("Digite um numero. Use 0 para terminar: ");
    scanf("%d", &numero);
    //Até que seja digitado 0   
    while(numero != 0) {
        soma = soma + numero;
        printf("Digite um numero. Use 0 para terminar:\n");
        scanf("%d", &numero);
    }
    //Mostrar a soma dos números
    printf("A soma dos numeros e: %d\n", soma);

    //com do|while:        
    /*do {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma = soma + numero;
    }while(numero != 0);
        
    //Mostrar a soma dos números
    printf("A soma dos numeros e: %d\n", soma);*/



    printf("---------FIM DE PROGRAMA--------\n");
    
    return 0;
}
