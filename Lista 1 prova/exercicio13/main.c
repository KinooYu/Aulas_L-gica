#include <stdio.h>

    int main() {
        int segundos, horas, minutos, resto;

        printf("Digite o numero de segundos: ");
        scanf("%d", &segundos);

        horas = segundos / 3600;
        resto = segundos % 3600;
        minutos = resto / 60;
        segundos = resto % 60;

        printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos);

        return 0;
    }
