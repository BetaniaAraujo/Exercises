/*Dizer se números POSITIVOS/NEGATIVOS/NEUTRO*/

#include <stdio.h>

int main() {
    
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if(numero > 0) {
        printf("Positivo");
    }
    else if (numero < 0){
        printf("Negativo"); 
    } else{
        printf("0");
    }
    
    printf("---------FIM DE PROGRAMA--------\n");
    
    return 0;
    
}
