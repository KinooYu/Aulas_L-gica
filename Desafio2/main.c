#include <stdio.h>
#include <stdlib.h> //Biblioteca utilizada para adicionar a função de aleatoriedade utilizada no código
#include<time.h> //Usado para aprimorar a aleatoriedade da função rand para que o numero não seje o mesmo

int main() {
    int num, aleatorio, contador = 1;

    //Iniciando a funcao de aleatoriedade
    srand(time(NULL));/*Utilizado para iniciar a seed do srand com um numero de segundos que vem desde 1 de jan de 1970
                                  assim deixando verdadeiramente aleatorio o numero do rand*/
    aleatorio = rand() % 1000 + 1;

    printf("%d \n", aleatorio);//Só para eu saber qual o numero aleatorio para fins de teste

    while (contador)//Fazendo um contador com o while, enquanto o a condiçao do if não for verdadeira ele vai continuar pedindo um numero a ele
    {
        printf("Digite um numero entre 1 e 1000:");
        scanf("%d", &num);
        if (num == aleatorio){//Vai ser executado ao o numero do usuario ser igual ao num aleatorio
            printf("Acertouuuu!\n");
            break;//parando o loop do while
        }
        else if (num > aleatorio){
            printf("O numero digitado é maior, %dº tentativa  continue tentando!\n", contador);
        }
        else if (contador > 15){
            printf("Vocẽ atingiu o limite de tentativas!\n");
            break;
        }
        else{
            printf("O numero digitado é menor, %dº tentativa continue tentando!\n", contador);
        }
        contador++;
    }

    if(contador <= 15);
    {
        switch (contador) { //Usando o switch para teste, já que não uso muito ele mesmo, interessante como salva algumas linhas doque a versão anterior com IF
            case 1 ... 5:
                printf("Sua classificação foi excelente, você acertou de %dº!!", contador);
                break;
            case 6 ... 7:
                printf("Sua classificação foi bom, você acertou de %dº!!", contador);
                break;
            case 8 ... 12:
                printf("Sua classificação foi normal, você acertou de %dº!!", contador);
                break;
            case 13 ... 14:
                printf("Sua classificação foi ruim, você acertou de %dº!!", contador);
                break;
            case 15:
                printf("Sua classificação foi trágica, você acertou de %dº!!", contador);
                break;
            default:
                printf("Você não acertou nenhum");
                break;
        }
    }
    return 0;
}

