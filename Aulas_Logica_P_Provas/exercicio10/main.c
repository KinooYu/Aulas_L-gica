#include <stdio.h>

int main() {
    float raio, perimetro, area;
#define PI 3.14159

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;
    area = PI * raio * raio;

    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);

    return 0;
}
