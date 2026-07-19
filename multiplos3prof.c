#include <stdio.h>
// Mostra todos os múltiplos de 3 entre 1 e 100.
int main()
{
    int num1, num2, troca;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);

     if(num2 < num1) {
        troca = num1;
        num1 = num2;
        num2 = troca;
    }
    
    for(int i = num1; i <= num2; i++) {
        if(i % 3 == 0) {
            printf("%d ", i);
        }
    }
    
return 0;
}