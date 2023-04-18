#include <stdio.h>
int main() {
    int numero;
    float resto;

    printf("Digite um numero:\n ");
    scanf("%f", &numero);

    resto = numero % 3;

    if (resto == 0) {
        printf("O numero (%d) eh multiplo de 3.\n", numero);
    } else {
        printf("O numero (%d) nao eh multiplo de 3.\n", numero);
    }

    return 0;
}