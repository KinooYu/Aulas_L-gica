#include <stdio.h>

int main() {
    float numero_real, terca_parte;
    printf("Digite o numero real: ");
    scanf("%f", &numero_real);

    terca_parte = numero_real / 3.0;
    printf("A terca parte de %.2f eh %.2f", numero_real, terca_parte);
    return 0;
}
