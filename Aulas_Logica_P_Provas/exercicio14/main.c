#include <stdio.h>

int main() {
    float qntdaulas,valorHaula,descontoinss,salarioliquido,salariobruto;

   printf("Insira a quantidade de aulas dadas: ");
   scanf("%f", &qntdaulas);
   printf("Insira o valor da hora de aula: ");
   scanf("%f", &valorHaula);
   printf("Insira o desconto do INSS: ");
   scanf("%f", &descontoinss);

   salariobruto = qntdaulas * valorHaula;
   salarioliquido = salariobruto - (salariobruto * descontoinss / 100);

    printf("O valor do salario liquido vai ser: %.2f", salarioliquido);


    return 0;
}
