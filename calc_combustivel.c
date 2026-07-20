#include <stdio.h>
//Quanto custa encher o tanque de um carro que tem 50 litros de capacidade, está com 20 litros de combustível atualmente e o custo do combustível é de R$5,80/litro?

int main() {

    int CapTanque, VolAtual, LitrosCompl;
    float Combustivel = 5.80, CustoTotal;
//Descobrir quantos litros faltam para encher o tanque
    printf("Qual a capacidade do tanque: ");
    scanf("%d", &CapTanque);
    printf("Quantos litros ha no tanque: ");
    scanf("%d", &VolAtual);

    LitrosCompl = CapTanque-VolAtual;
    printf("Faltam %d litros para completar o tanque.\n", LitrosCompl);
//Pegar o custo de 1 litro e multiplicar pelo resultado do passo 1
    CustoTotal = LitrosCompl*Combustivel;        
    printf("O custo para completar o tanque e: %.2f ", CustoTotal);

    return 0;
}