#include <stdio.h>

int main()
{
    int populaçao1, populaçao2, numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float area1, area2, pib1, pib2;
    char estado1[3], estado2[3];
    char codigo_da_carta1[50], codigo_da_carta2[50];
    char nome_da_cidade1[50], nome_da_cidade2[50];

    // Entrada para a primeira carta
    printf("---- Carta 1 --- \n");
    printf("Digite a letra do seu Estado: \n");
    scanf("%2s", estado1);
    getchar();

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_da_carta1);
    getchar();

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nome_da_cidade1);
    getchar();

    printf("Qual é a população da Cidade: \n");
    scanf("%d", &populaçao1);
    getchar();

    printf("Qual é a area da Cidade: \n");
    scanf("%f", &area1);
    getchar();

    printf("Qual é o PIB da Cidade: \n");
    scanf("%f", &pib1);
    getchar();

    printf("Qual é o Número de Pontos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    getchar();

    // Entrada para a segunda carta
    printf("---- Carta 2 --- \n");
    printf("Digite a letra do seu Estado: \n");
    scanf("%2s", estado2);
    getchar();

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_da_carta2);
    getchar();

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nome_da_cidade2);
    getchar();

    printf("Qual é a população da Cidade: \n");
    scanf("%d", &populaçao2);
    getchar();

    printf("Qual é a Area da Cidade: \n");
    scanf("%f", &area2);
    getchar();

    printf("Qual é o PIB da Cidade: \n");
    scanf("%f", &pib2);
    getchar();

    printf("Qual é o  Número de Pontos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    getchar();

    printf("\n--- Carta1 ---\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo_da_carta1);
    printf("Nome da Cidade: %s \n", nome_da_cidade1);
    printf("População: %d \n", populaçao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos1);

    printf("\n--- Carta2 ---\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo_da_carta2);
    printf("Nome da Cidade: %s \n", nome_da_cidade2);
    printf("População: %d \n", populaçao2);
    printf("Área: %f km² \n", area2);
    printf("PIB %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos2);

    return 0;
}

