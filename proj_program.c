#include <stdio.h>
//Quanto devemos cobrar em um projeto de programação se trabalhamos 8h por dia, demoramos 15 dias para fazer o projeto e cobramos R$100/h?

int main() {

    int HorasTrab, DiasTrab, HorasTotais, ValorHora;
    float CustoProjeto;
    
//Descobrir quantas horas de trabalho vamos usar no projeto
    printf("Horas Trabalhadas: ");
    scanf("%d", &HorasTrab);
    printf("Dias Trabalhados: ");
    scanf("%d", &DiasTrab);
    printf("Valor cobrado por hora: ");
    scanf("%d", &ValorHora);

    HorasTotais = HorasTrab*DiasTrab;
    printf("Total de horas decicadas ao projeto: %d horas.\n", HorasTotais);
//Pegar o custo de uma hora de trabalho e multiplicar pelo total de horas dedicadas
    CustoProjeto = ValorHora*HorasTotais;
    printf("O custo total para este projeto sera de: %.2f euros.", CustoProjeto);


    return 0;
}