#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);

    if(n1 > 20)
    {
        n1 =  n1 / 2;
        printf("A metade de seu numero eh: %d", n1);
    }
    else
    {
        printf("%d precisa ser maior ou eh nao ser igual a 20", n1);
    }


    return 0;
}
