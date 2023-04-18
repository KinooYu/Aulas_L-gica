#include <stdio.h>

int main() {
    float valor, desconto, resultado;
    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Digite o desconto: ");
    scanf("%f", &desconto);

    resultado = valor - (desconto / 100);

    printf("O valor com desconto vai ser: %.3f", resultado);

    return 0;
}
