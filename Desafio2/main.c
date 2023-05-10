#include <stdio.h>
#include <stdlib.h> //Biblioteca utilizada para adicionar a função de aleatoriedade utilizada no código
#include<time.h> //Usado para aprimorar a aleatoriedade da função rand para que o numero não seje o mesmo

int main() {
    int num, aleatorio, contador = 1, min = 0, max = 1000;
    int entrada_valida = 0; // adicionando a variável para verificar a entrada

    //Iniciando a funcao de aleatoriedade
    srand(time(NULL));
    aleatorio = rand() % 1000 + 1;

    while (entrada_valida == 0) {
        printf("Digite um numero entre 1 e 1000: ");
        if (scanf("%d", &num) != 1 || num > 1000) {
            printf("Por favor digite um numero válido entre 1 e 1000!\n");
            entrada_valida = 1;
        } else if (num == aleatorio) {
            printf("Acertouuuu!\n");
            break; //parando o loop do while
        } else if (num > aleatorio) {
            printf("O numero digitado é maior, %dº tentativa continue tentando!\n", contador);
            max = num;
            printf("O numero está entre %d e %d\n", min, max);
        } else {
            printf("O numero digitado é menor, %dº tentativa continue tentando!\n", contador);
            min = num;
            printf("O numero está entre %d e %d\n", min, max);
        }
        contador++;
    }
    if (entrada_valida == 0) { // adicionando uma verificação para executar o switch-case somente se a entrada for válida
        switch (contador) {
            case 1 ... 5:
                printf("Sua classificação foi excelente, você acertou de %dº!!\n", contador);
                break;
            case 6 ... 7:
                printf("Sua classificação foi bom, você acertou de %dº!!\n", contador);
                break;
            case 8 ... 12:
                printf("Sua classificação foi normal, você acertou de %dº!!\n", contador);
                break;
            case 13 ... 14:
                printf("Sua classificação foi ruim, você acertou de %dº!!\n", contador);
                break;
            default:
                printf("Sua classificação foi trágica, você acertou de %dº!!\n", contador);
                break;
        }
    }
    return 0;
}