#include <stdio.h>

int main() {
    float idade, peso, gotas;
    printf("Digite sua idade:");
    scanf("%f", &idade);
    printf("Digite seu peso:");
    scanf("%f", &peso);

    if(idade <= 12 && peso >= 5 && peso <= 9){
        gotas = (125 * 20) / 500;
        printf("Voce devera tomar: %.2f gotas", gotas);
    }
    else if (idade <= 12 && peso >= 9.1 && peso <= 16){
        gotas = 250 * 20 / 500;
        printf("Voce devera tomar: %.2f gotas", gotas);
    }
    else if (idade <= 12 && peso >= 16.1 && peso <= 24){
        gotas = 375 * 20 / 500;
        printf("Voce devera tomar: %.2f gotas", gotas);
    }
    else if (idade <= 12 && peso >= 24.1 && peso <= 30){
        gotas = 500 * 20 / 500;
        printf("Voce devera tomar: %.2f gotas", gotas);
    }
    else if (idade <= 12 && peso >= 30){
        gotas = 750 * 20 / 500;
        printf("Voce devera tomar: %.2f gotas", gotas);
    }
    else if (idade > 12 && peso >= 60){
        gotas = 1000 * 20 / 500;
        printf("Voce devera tomar: %.2f gotas", gotas);
    }
    else if (idade > 12 && peso < 60){
        gotas = 875 * 20 / 500;
        printf("Voce devera tomar: %.2f gotas", gotas);
    }

    return 0;
}
