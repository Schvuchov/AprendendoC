#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaPC;
    srand(time(0)); //inicializa gerador de numeros aleatorios

    printf("*** Jogo de Jokenpô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaPC = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    
    case 2:
        printf("Jogador: Papel - ");
        break;
    
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

    switch (escolhaPC)
    {
    case 1:
        printf("PC: Pedra\n");
        break;
    
    case 2:
        printf("PC: Papel\n");
        break;
    
    case 3:
        printf("PC: Tesoura\n");
        break;

    }

    if( escolhaPC == escolhaJogador){
        printf("Jogo empatou!\n");
    }else if((escolhaJogador == 1) && (escolhaPC == 3) || 
            (escolhaJogador == 2) && (escolhaPC == 1) || 
            (escolhaJogador == 3) && (escolhaPC == 2)){
        printf("Parabéns, você ganhou!\n");
    }else {
        printf("Você perdeu!\n");
    }

    return 0;
}