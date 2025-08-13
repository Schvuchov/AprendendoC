#include <stdio.h>

int main(){
    float temp, umid;
    unsigned int estoque, estoque_min = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temp);
    printf("Entre com a umidade: \n");
    scanf("%f", &umid);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if( temp > 30){
       printf("temperatura esta alta.\n"); 
    }else{
        printf("temperatura esta dentro dos parâmetros.\n");
    }

    if( temp > 50){
       printf("umidade esta alta.\n"); 
    }else{
        printf("umidade esta dentro dos parâmetros.\n");
    }

    if( estoque < estoque_min){
        printf("Estoque menor que o mínimo\n");
    }else{
        printf("Estoque normal");
    }
}