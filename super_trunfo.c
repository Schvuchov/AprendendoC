#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    /*
    declarando as variaves 
    Estado tipo: char
    Código da Carta tipo: char[]
    Nome da Cidade tipo: char[]
    População tipo: int
    Área tipo: float
    PIB tipo: float
    Número de Pontos Turísticos tipo: int
    */

    //carta 1
    char estado1;
    char codigo_carta1[4];
    char cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    float dens_pop1, pib_capita1; 

    //carta 2
    char estado2;
    char codigo_carta2[4];
    char cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float dens_pop2, pib_capita2; 

    //Entrada de dados carta 1
    printf("Vamos cadastrar a Primeira Carta\n");

    printf("Digite uma letra de A a H para representar o primeiro estado:\n");
    scanf("%c", &estado1);

    printf("Digite a letra do primeiro estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da primeira cidade (Por enquanto cidades de nome simples):\n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da primeira cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da primeira cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade:\n");
    scanf("%d", &pontos_turisticos1);

    //Entrada de dados carta 2
    printf("Agora vamos cadastrar a Segunda Carta\n");

    printf("Digite uma letra de A a H para representar o segundo estado:\n");
    scanf(" %c", &estado2);
    // add espaço pois esta parte estava sendo pulada, respondida por um espaço

    printf("Digite a letra do segundo estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da segunda cidade (Por enquanto cidades de nome simples):\n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da segunda cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da segunda cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontos_turisticos2);

    //Calculando a densidade populacional e o pib per capita

    //carta 1
    dens_pop1 = populacao1 / area1;
    pib_capita1 = pib1 / populacao1;

    //carta 2
    dens_pop2 = populacao2 / area2;
    pib_capita2 = pib2 / populacao2;

    //Exibindo informações de cada carta

    //Carta1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", dens_pop1);
    printf("PIB per Capita: %.2f\n", pib_capita1);

    //Carta2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", dens_pop2);
    printf("PIB per Capita: %.2f\n", pib_capita2);

    return 0;
}
