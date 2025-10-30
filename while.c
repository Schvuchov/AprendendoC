#include <stdio.h>

int main(){

    int i = 0;

    while (i<=10){
        if(i % 2 != 0){
            printf("O número %d é ímpar! \n", i);
        }
        i++;
    }


    int numero;

    do {
        printf("Digite um numero par para sair do programa.");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d  é par", numero);
        }else {
            printf("%d  é ímpar", numero);
        }
    } while (numero % 2 != 0);

    return 0;
}