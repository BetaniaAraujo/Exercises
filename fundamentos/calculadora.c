#include <stdio.h>

int main() {
    //Ler números
    int numero1, numero2, total;
    char operacao;
    printf("Digite 1º numero: ");
    scanf("%d", &numero1);
    printf("Digite 2º numero: ");
    scanf("%d", &numero2);
    //Escolher uma operação
    printf("Escolha uma operação matematica: ");
    scanf(" %c", &operacao);
    //Calcular os números
    switch (operacao)
    { 
        case '+':
        total = numero1 + numero2;
        break;
    case '-':
        total = numero1 - numero2;
        break;
    case '*':
        total = numero1 * numero2;
        break;
    case '/':
        total = numero1 / numero2;
        break;
    default:
        printf("Operacao invalida!\n");
        return 1;
    }
    printf("Resultado = %d\n", total);

    printf("---------FIM DE PROGRAMA--------\n");
    
    return 0;
    
}