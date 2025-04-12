#include <stdio.h>

int main() {
    /* Criando as cartas: */

    /* Carta 1 */
    char estado_carta1[20], codigo_carta1[4], cidade_carta1[20], estado_carta2[20], codigo_carta2[4], cidade_carta2[20];
    int populacao_carta1, pontosTuristicos_carta1, populacao_carta2, pontosTuristicos_carta2;
    float pib_carta1, pib_carta2, area_carta1, area_carta2, densidade_carta1, densidade_carta2, pib_perCapita_carta1, pib_perCapita_carta2;

    printf("\nBem-vindo ao Super Trunfo! \nVamos começar criando suas cartas:\n");
    
    // Leitura da primeira carta
    printf("Digite uma letra, de A a H, para o Estado da primeira carta: ");
    scanf("%s", estado_carta1);
    printf("Dê um código, com a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo_carta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_carta1);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao_carta1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_carta1);
    printf("Digite o número de Pontos Turísticos da cidade: ");
    scanf("%d", &pontosTuristicos_carta1);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area_carta1);

    /* Carta 2 */
    printf("Segunda carta:\n");
    printf("Digite uma letra, de A a H, para o Estado da segunda carta: ");
    scanf("%s", estado_carta2);
    printf("Dê um código para a carta: ");
    scanf("%s", codigo_carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_carta2);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao_carta2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_carta2);
    printf("Digite o número de Pontos Turísticos da cidade: ");
    scanf("%d", &pontosTuristicos_carta2);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area_carta2);

    //Calculando a densidade populacional de cada carta
    densidade_carta1 = populacao_carta1/area_carta1;
    densidade_carta2 = populacao_carta2/area_carta2;
 
    //Calculando o PIB per capita de cada carta
    pib_perCapita_carta1 = pib_carta1/populacao_carta1;
    pib_perCapita_carta2 = pib_carta2/populacao_carta2;

    /* Exibindo as cartas: */

    /* Carta 1 */
    printf("\nPrimeira carta:\n");
    printf("Estado: %s\n", estado_carta1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2f\n", pib_carta1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_carta1);
    printf("A densidade populacional referente a carta 1 é: %.2f\n", densidade_carta1);
    printf("O PIB per capita da carta 1 é: %.2f\n", pib_perCapita_carta1);

    /* Carta 2 */
    printf("\nSegunda carta:\n");
    printf("Estado: %s\n", estado_carta2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2f\n", pib_carta2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_carta2);
    printf("A densidade populacional referente a carta 2 é: %.2f\n", densidade_carta2);
    printf("O PIB per capita da carta 2 é: %.2f\n", pib_perCapita_carta2);

    return 0;
}
