#include <stdio.h>

//criando funções recursivas

//torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

//bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical > 0 && horizontal > 0) {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 1; j++) {
                printf("Cima, Direita\n");
                break; 
            }
        }
        moverBispo(vertical - 1, horizontal - 1); 
    }
}

//rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

//cavalo
void moverCavalo() {
    int cavaloCima = 2;
    int cavaloDireita = 1;

    for (int i = 1, j = 0; i <= cavaloCima || j <= cavaloDireita; i++) {
        if (i <= cavaloCima) {
            printf("Cima\n");
            if (i == cavaloCima) continue; 
        }

        if (i >= cavaloCima && j <= cavaloDireita) {
            printf("Direita\n");
            break;
        }
    }
}

int main(){

    //quantas casas cada peça vai andar
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    //torre
    printf("A torre se movimenta...\n");
    moverTorre(torre);

    //bispo
    printf("O bispo se movimenta...\n");
    moverBispo(bispo, bispo);

    //rainha
    printf("A rainha se movimenta...\n");
    moverRainha(rainha);

    //cavalo
    printf("O cavalo se movimenta...\n");
    moverCavalo();

    return 0;
}