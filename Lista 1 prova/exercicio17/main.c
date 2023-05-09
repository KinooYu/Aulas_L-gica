#include <stdio.h>

int main() {
    float prestacao, valor, tempo, taxa;
    printf("Digite o valor da prestacao: ");
    scanf("%f", &valor);
    printf("Digite o tempo: ");
    scanf("%f", &tempo);
    printf("Digite o valor da taxa: ");
    scanf("%f", &taxa);

    prestacao = valor + (valor * (taxa/100) * tempo);

    printf("O valor da prestacao eh: %.2f", prestacao);

    return 0;
}

