#include <stdio.h>
// Lê um número inteiro e mostra a sua tabuada de 1 até 10.
int main()
{
    int numero;
    // Ler número
    printf("Digite um numero:");
    scanf("%d", &numero);
    // Mostrar a tabuada do número digitado
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, (numero * i));
    }
        printf("FIM DO PROGRAMA");

    return 0;
}