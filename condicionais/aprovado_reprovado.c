#include <stdio.h>

int main() {

    int nota = 0;

    printf("Digite uma nota: ");
    scanf("%d", &nota);

    if(nota >= 10) {
        printf("Aprovado!\n");
    } 
    else if (nota >= 8){
        printf("Recurso\n");
    } else {
        printf("Reprovado\n");
    }

    printf("---------FIM DE PROGRAMA--------\n");
    
    return 0;
}