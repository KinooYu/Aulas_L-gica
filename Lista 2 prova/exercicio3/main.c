#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero para saber se ele eh multiplo de 3: ");
    scanf("%d", &n);

    if(n % 3 == 0)
    {
        printf("O numero %d eh multiplo de 3", n);
    }
    else
    {
        printf("O numero %d nao eh multiplo de 3", n);
    }
    return 0;
}
