#include <stdio.h>
// Mostra todos os múltiplos de 3 entre 1 e 100.
int main()
{
    int numero;

    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
    
}


