#include <stdio.h>

int main() {

    //Dizer se números PAR/ÍMPAR/NEUTRO
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if(numero == 0) {
        printf("Neutro");
    }
    else if(numero % 2 == 0){
        printf("Par");
    }
    else {
        printf("Ímpar");
    }

    printf("---------FIM DE PROGRAMA--------\n");
    
    return 0;
    
}