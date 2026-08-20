#include <stdio.h>

struct Pessoa {
    int idade;
    float altura, peso;
};
int main() {
    struct Pessoa p;
    float imc;

    printf("Insira a idade: ");
    scanf("%d", &p.idade);
    printf("Insira a altura: ");
    scanf("%f", &p.altura);
    printf("Insira o peso: ");
    scanf("%f", &p.peso);
    printf('\n');
    imc = p.peso / (p.altura * p.altura);
//imc = peso / pow(altura.2)
    printf("O IMC e %.2f.\n", imc);
    printf("Peso = %.2f Kgs.\n", p.peso);
    printf("Altura = %.2f cms.\n", p.altura);
    printf("Idade: %d anos.\n", p.idade);
    printf("\n");
    if(imc <= 18.5) {
        printf("Abaixo do peso.");
    }
    else if( imc <= 24.9) {
        printf("Levemente acima do peso.");
    }
    else {
        printf("Obesidade alto grau.");
    }

return 0;
}