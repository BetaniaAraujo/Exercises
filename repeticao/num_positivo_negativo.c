
/*Pede ao utilizador um número positivo.Enquanto o número for negativo ou zero, o programa deve voltar a pedir o número.*/

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
        
    printf("---------FIM DE PROGRAMA--------\n");
    
    return 0;
}