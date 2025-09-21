#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroPC, resultado;
    char tipoComparacao;

    //gerar numero aleatorio
    srand(time(0));
    numeroPC = rand() % 100 + 1; //numero entre 1 e 100

    //inicio do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("VocÊ deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Escolha um número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior!\n");
        resultado = numeroJogador > numeroPC ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor!\n");
        resultado = numeroJogador < numeroPC ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual!\n");
        resultado = numeroJogador == numeroPC ? 1 : 0;
        break;
    
    default:
        printf("Escolha inválida");
        break;
    }

    printf("O número do computador é: %d e o seu é: %d\n", numeroPC, numeroJogador);

    if (resultado == 1){
        printf("Você venceu!\n");
    }else {
        printf("Você perdeu!\n");
    }
}