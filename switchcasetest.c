#include <stdio.h>

int main() {
    //Ler números
    int numero1, numero2, total;
    char operacao;
    printf("Digite primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite segundo número: ");
    scanf("%d", &numero2);
    //Escolher uma operação
    printf("Escolha uma operação matemática: ");
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
        printf("Operação inválida!\n");
        return 1;
    }
    printf("Resultado = %d\n", total);
    
    return 0;
    
}