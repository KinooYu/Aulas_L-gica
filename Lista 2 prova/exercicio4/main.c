#include <stdio.h>

int main() {
    float salariobruto, prestacao, resto;

    printf("Escreva o valor do seu salário bruto: ");
    scanf("%f", &salariobruto);
    printf("Escreva o valor da prestacao: ");
    scanf("%f", &prestacao);

    resto = salariobruto * 0.3;

    if(prestacao <= resto)
    {
        printf("Emprestimo ira ser consedido \n");
    } else{
        printf("O emprestimo não é possivel");
    }
        return 0;
}
