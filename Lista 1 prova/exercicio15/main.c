#include <stdio.h>

int main() {
    float pi = 3.14,raio,altura, volume;
    printf("Insira o valor de raio: ");
    scanf("%f", &raio);
    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    volume = pi * (raio * raio) * altura;

    printf("O valor do volume eh: %.2f", volume);




    return 0;
}
