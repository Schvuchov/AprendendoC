#include <stdio.h>

void recursivo(int numero){
    if(numero>0){
        printf("%d \n", numero);
        recursivo(numero - 1);
    }
}

int main(){
    int qtd = 10;

    printf("contagem regressiva...\n");
    recursivo(qtd);

    return 0;
}