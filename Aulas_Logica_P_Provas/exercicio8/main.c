#include <stdio.h>

int main() {
    float n1, n2, media;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    media = (n1+n2)/3;
    printf("A media eh: %f", media);
    return 0;
}
