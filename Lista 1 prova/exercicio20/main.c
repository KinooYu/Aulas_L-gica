#include <stdio.h>

int main() {
    float gastos, gorjeta, total;

    // Ler valor dos gastos
    printf("Digite o valor dos gastos: R$");
    scanf("%f", &gastos);

    // Calcular gorjeta
    gorjeta = 0.1 * gastos;

    // Calcular total da conta
    total = gastos + gorjeta;

    // Exibir resultado
    printf("Valor inicial: R$%.2f\n", gastos);
    printf("Gorjeta (10%%): R$%.2f\n", gorjeta);
    printf("Total da conta: R$%.2f\n", total);

    return 0;
}
