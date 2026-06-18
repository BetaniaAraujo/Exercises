#include <stdio.h>

int main() {
int numero;
    //Pedir um número
    
    printf("Digite um número positivo:\n");
    scanf("%d", &numero);
    //Enquanto número negativo ou 0
    while(numero < 1) {
        printf("Digite um número positivo:\n");
        scanf("%d", &numero);       
    }

    printf("O número digitado foi: %d\n", numero);
        
    
    return 0;
}