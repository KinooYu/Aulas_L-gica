#include <stdio.h>

int main() {
    int primeiro_n, antecessor_n, sucessor_n;
    printf("Digite um numero para saber o sucessor e o antecessor dele: ");
    scanf("%d", &primeiro_n);
    antecessor_n = primeiro_n - 1;
    sucessor_n = primeiro_n + 1;
    printf("O antecessor de: %d\n", primeiro_n);
    printf(" eh: %d\n", antecessor_n);
    printf(" e o sucessor do mesmo eh: %d\n", sucessor_n);
    return 0;
}
