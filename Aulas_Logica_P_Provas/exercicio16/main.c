#include <stdio.h>

int main() {
    float tempo,velocidade,distancia,litros;
    printf("Digite o tempo gasto: ");
    scanf("%f", &tempo);
    printf("Digite a velocidade media: ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("A distancia percorrida foi de: %.2f km\n E litros foi de: %.2f L", distancia, litros);

    return 0;
}
