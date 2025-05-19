#include <stdio.h>

int main() {
    // Variáveis das duas cartas
    char estado_carta1[20], codigo_carta1[4], cidade_carta1[20];
    char estado_carta2[20], codigo_carta2[4], cidade_carta2[20];
    int populacao_carta1, pontosTuristicos_carta1;
    int populacao_carta2, pontosTuristicos_carta2;
    float pib_carta1, pib_carta2, area_carta1, area_carta2;
    float densidade_carta1, densidade_carta2;
    float pib_perCapita_carta1, pib_perCapita_carta2;
    float super_poder1, super_poder2;

    printf("\nBem-vindo ao Super Trunfo! \nVamos começar criando suas cartas:\n");

    // Carta 1
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

    // Carta 2
    printf("\nSegunda carta:\n");
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

    // Cálculos
    densidade_carta1 = populacao_carta1 / area_carta1;
    densidade_carta2 = populacao_carta2 / area_carta2;

    pib_perCapita_carta1 = pib_carta1 / populacao_carta1;
    pib_perCapita_carta2 = pib_carta2 / populacao_carta2;

    super_poder1 = populacao_carta1 + area_carta1 + pib_carta1 + pontosTuristicos_carta1 + pib_perCapita_carta1 + (1.0f / densidade_carta1);
    super_poder2 = populacao_carta2 + area_carta2 + pib_carta2 + pontosTuristicos_carta2 + pib_perCapita_carta2 + (1.0f / densidade_carta2);

    // Exibindo cartas
    printf("\n - Carta 1:\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado_carta1, codigo_carta1, cidade_carta1, populacao_carta1, area_carta1, pib_carta1, pontosTuristicos_carta1, densidade_carta1, pib_perCapita_carta1, super_poder1);

    printf("\n - Carta 2:\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado_carta2, codigo_carta2, cidade_carta2, populacao_carta2, area_carta2, pib_carta2, pontosTuristicos_carta2, densidade_carta2, pib_perCapita_carta2, super_poder2);

    // Comparações
    int resultado;

    printf("\nComparação de Cartas:\n\n");

    resultado = populacao_carta1 > populacao_carta2;
    printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = area_carta1 > area_carta2;
    printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pib_carta1 > pib_carta2;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pontosTuristicos_carta1 > pontosTuristicos_carta2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = densidade_carta1 < densidade_carta2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pib_perCapita_carta1 > pib_perCapita_carta2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = super_poder1 > super_poder2;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
}
