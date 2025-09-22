#include <stdio.h>

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
    unsigned long int populacao1; 
    int pontos_turisticos1;
    float area1, pib1;
    float dens_pop1, pib_capita1; 
    float super_poder1;

    //carta 2
    char estado2;
    char codigo_carta2[4];
    char cidade2[50];
    unsigned long int populacao2; 
    int pontos_turisticos2;
    float area2, pib2;
    float dens_pop2, pib_capita2; 
    float super_poder2;

    // Variáveis de controle
    int escolhaAtributo1, escolhaAtributo2;
    const char *atributo1 = "", *atributo2 = "";
    double valor1_attr1 = 0, valor2_attr1 = 0;  //para o atributo1 teremos o valor1 (carta1) e o valor2 (carta2)
    double valor1_attr2 = 0, valor2_attr2 = 0;
    double soma1 = 0, soma2 = 0;

    //Entrada de dados carta 1
    printf("Vamos cadastrar a Primeira Carta\n");

    printf("Digite uma letra de A a H para representar o primeiro estado:\n");
    scanf("%c", &estado1);

    printf("Digite a letra do primeiro estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da primeira cidade (Por enquanto cidades de nome simples):\n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da primeira cidade:\n");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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

    //Calculando super poder

    //carta1
    super_poder1 = ((float) populacao1) + area1 + pib1 + ((float) pontos_turisticos1) + pib_capita1 + (1/ dens_pop1);
    //em populçao deveria ser float ou double? unsigned long é aplicavel para float ou apenas int e double? fazer a soma de float e double daria problema?
    //carta2
    super_poder2 = ((float) populacao2) + area2 + pib2 + ((float) pontos_turisticos2) + pib_capita2 + (1/ dens_pop2);

    
    //Exibindo informações de cada carta

    //Carta1
    printf("Mostrando os dados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", dens_pop1);
    printf("PIB per Capita: %.2f\n", pib_capita1);

    //Carta2
    printf("Mostrando os dados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", dens_pop2);
    printf("PIB per Capita: %.2f\n", pib_capita2);

    //menu para escolher atributo a ser comparado
    //escolhendo atributo 1
    printf("Qual dos atributos abaixo você quer usar primeiro?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolhaAtributo1);

    //escolhendo atributo2
    printf("Qual o segundo atributo (diferente do primeiro)?\n");
    switch (escolhaAtributo1)  //switch para que não apareça a opção ja escolhida para o atributo1
    {
    case 1:
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade demográfica\n");
        break;
    case 2:
        printf("1. População\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade demográfica\n");
        break;
    case 3:
        printf("1. População\n");
        printf("2. Área\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade demográfica\n");
        break;
    case 4:
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("5. Densidade demográfica\n");
        break;
    case 5:
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        break;    
    default:
        printf("Escolha inválida.\n");
        return 1; //encerra o programa pois tivemos um erro na esolha
    }

    printf("Escolha: ");
    scanf("%d", &escolhaAtributo2);

    //definindo o primeiro atributo
    switch (escolhaAtributo1) {
        case 1: 
            atributo1 = "População"; 
            valor1_attr1 = populacao1; 
            valor2_attr1 = populacao2; 
            break;
        case 2: 
            atributo1 = "Área"; 
            valor1_attr1 = area1; 
            valor2_attr1 = area2; 
            break;
        case 3: 
            atributo1 = "PIB"; 
            valor1_attr1 = pib1; 
            valor2_attr1 = pib2; 
            break;
        case 4: 
            atributo1 = "Pontos Turísticos"; 
            valor1_attr1 = pontos_turisticos1; 
            valor2_attr1 = pontos_turisticos2; 
            break;
        case 5: 
            atributo1 = "Densidade Demográfica"; 
            valor1_attr1 = dens_pop1; 
            valor2_attr1 = dens_pop2; 
            break;
    }

    //definindo o segundo atributo
    switch (escolhaAtributo2) {
        case 1: 
            atributo2 = "População"; 
            valor1_attr2 = populacao1; 
            valor2_attr2 = populacao2; 
            break;
        case 2: 
            atributo2 = "Área"; 
            valor1_attr2 = area1; 
            valor2_attr2 = area2; 
            break;
        case 3: 
            atributo2 = "PIB"; 
            valor1_attr2 = pib1; 
            valor2_attr2 = pib2; 
            break;
        case 4: 
            atributo2 = "Pontos Turísticos"; 
            valor1_attr2 = pontos_turisticos1; 
            valor2_attr2 = pontos_turisticos2; 
            break;
        case 5: 
            atributo2 = "Densidade Demográfica"; 
            valor1_attr2 = dens_pop1; 
            valor2_attr2 = dens_pop2; 
            break;
    }

    //comparação individual
    printf("Comparação dos Atributos\n");

    printf("%s -> %s: %.2f | %s: %.2f\n", atributo1, cidade1, valor1_attr1, cidade2, valor2_attr1);
    if (escolhaAtributo1 == 5){
        printf("Vencedor: %s\n", (valor1_attr1 < valor2_attr1) ? cidade1 : cidade2);
    }else {
        printf("Vencedor: %s\n", (valor1_attr1 > valor2_attr1) ? cidade1 : cidade2);
    }
    printf("%s -> %s: %.2f | %s: %.2f\n", atributo2, cidade1, valor1_attr2, cidade2, valor2_attr2);
    if (escolhaAtributo2 == 5){
        printf("Vencedor: %s\n", (valor1_attr2 < valor2_attr2) ? cidade1 : cidade2);
    }else{
        printf("Vencedor: %s\n", (valor1_attr2 > valor2_attr2) ? cidade1 : cidade2);
    }

    //soma final
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    //resultado
    printf("Resultado Final\n");
    printf("Soma dos atributos -> %s: %.2f | %s: %.2f\n", cidade1, soma1, cidade2, soma2);

    if (soma1 > soma2){
        printf("Vencedor da rodada: %s\n", cidade1);
    }else if (soma2 > soma1){
        printf("Vencedor da rodada: %s\n", cidade2);
    }else {
        printf("Empate!\n");
    }

    
    return 0;
}
