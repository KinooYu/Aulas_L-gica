#include <stdio.h>

int main() {
    float numerador, denominador, decimal;
    printf("Digite o numerador: ");
    scanf("%d", &numerador);

    printf("Digite o denominador: ");
    scanf("%d", &denominador);

    decimal = numerador / denominador;

    printf("O resultado eh %.2f", decimal);


    return 0;
}
