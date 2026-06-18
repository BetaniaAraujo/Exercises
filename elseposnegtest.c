#include <stdio.h>

int main() {
    //Dizer se números POSITIVOS/NEGATIVOS/NEUTRO
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
    
    return 0;
    
}
