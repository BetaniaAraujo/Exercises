#include <stdio.h>

int main() 
{
    // Write C code here
    int notas[5] = {10, 15, 8, 21, 12};
    int soma = 0, flag = 0;
    bool flag1 = false
    
    for(int i = 0; i < 5; i++) {
        printf("%d\n", notas[i]);
        soma += notas[i];
        /*if(notas[i] > soma);
            flag1 = 1;*/
    }
    /*if(flag == 1) {
        printf("Deu erro media ");
    }
    while(num != 0 && flag == false) {
        printf("Insira um numero: ");
        scanf("%d", &num);
        if(num < 0) {
            flag = 1;
        }*/
        
    }
    
    printf("Media: %.1f\n", (float)soma / 5);

    return 0;
}