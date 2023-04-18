#include <stdio.h>

int main() {
    float salariominimo, valorDoquilowatts, quillowattsGastos, valorpago, valorDesconto;
    printf("Digte o valor do salario minimo");
    scanf("%f", &salariominimo);
    printf("Digte o valor gasto em quillowatts");
    scanf("%f", &quillowattsGastos);

    valorDoquilowatts = salariominimo / 7 / 100;
    valorpago = quillowattsGastos * valorDoquilowatts;
    valorDesconto = valorpago * 0.9;

    printf("Valor do quilowatt R$ %.2f\n", valorDoquilowatts);
    printf("Valor a ser pago R$ %.2f\n", valorpago);
    printf("Valor com desconto R$ %.2f\n", valorDesconto);


    return 0;
}
