#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "sergio";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %e\n", altura);
    printf("A opção é: %c\n", opcao);

    /*
    %d inteiro em formato decimal
    %i equivalente a %d
    %f n de ponto flutuante no formato padrao
    %e n de ponto flutuante no not cientifica
    %c unico caract
    %s uma cadeia de caract (string)
    */

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
    
    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c", opcao);

    char frase[50];
    printf("Digite a frase: ");
    fgets(frase, 50, stdin);
    frase[strcspn(frase, "\n")] = 0;
    printf("A frase digitada: %s\n", frase);
}