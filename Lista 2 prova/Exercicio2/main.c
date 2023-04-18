#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    switch(numero > 0) {
        case 1:
            printf("O numero digitado eh positivo.");
            break;
        case 0:
            switch(numero < 0) {
                case 1:
                    printf("O numero digitado eh negativo.");
                    break;
                case 0:
                    printf("O numero digitado eh nulo.");
                    break;
            }
            break;
    }

    return 0;
}
