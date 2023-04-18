#include <stdio.h>

int main() {
    float saldo, resultado;
    printf("Entre com o valor do saldo: ");
    scanf("%f", &saldo);

    resultado = saldo + (3.5 / 100.0);

    printf("O novo saldo vai ser de: %.3f", resultado);

    return 0;
}
