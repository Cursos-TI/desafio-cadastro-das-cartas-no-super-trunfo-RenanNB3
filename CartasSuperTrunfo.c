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

    /* Cálculos */  
    densidade_carta1 = populacao_carta1 / area_carta1;
    densidade_carta2 = populacao_carta2 / area_carta2;

    pib_perCapita_carta1 = pib_carta1 / populacao_carta1;
    pib_perCapita_carta2 = pib_carta2 / populacao_carta2;

    super_poder1 = populacao_carta1 + area_carta1 + pib_carta1 + pontosTuristicos_carta1 + pib_perCapita_carta1 + (1.0f / densidade_carta1);
    super_poder2 = populacao_carta2 + area_carta2 + pib_carta2 + pontosTuristicos_carta2 + pib_perCapita_carta2 + (1.0f / densidade_carta2);

    /* Exibindo cartas */ 

    printf("\n### Carta 1: ###\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado_carta1, codigo_carta1, cidade_carta1, populacao_carta1, area_carta1, pib_carta1, pontosTuristicos_carta1, densidade_carta1, pib_perCapita_carta1, super_poder1);

    printf("\n### Carta 2: \n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado_carta2, codigo_carta2, cidade_carta2, populacao_carta2, area_carta2, pib_carta2, pontosTuristicos_carta2, densidade_carta2, pib_perCapita_carta2, super_poder2);

    /* Comparações Simples - primeiro trabalho */ 
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

    /* Comparações utilizando if e else */ 

    //printf("\nComparando a população de cada carta:\n");
    //printf("\nCarta 1 - %s : %d", cidade_carta1, populacao_carta1);
    //printf("\nCarta 1 - %s : %d", cidade_carta2, populacao_carta2);

    //if (populacao_carta1 > populacao_carta2)
    //{
    // printf("\nResultado: Carta 1 venceu!\n");
    //}else{
    // printf("\nResultado: Carta 2 venceu!\n");
    //}

   /* Menu interativo utilizando Switch */
  
   printf("\nEscolha qual atributo deve ser comparado:\n");
   printf("1 - População\n");
   printf("2 - PIB\n");
   printf("3 - Área\n");
   printf("4 - Densidade Demográfica\n");
   printf("5 - Pontos Turísticos\n");

   int opcao;

   scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
       printf("Comparação da População:\n");
       if (populacao_carta1 > populacao_carta2)
       {
          printf("A carta %s venceu, pois possui maior população\n", cidade_carta1);
       }else if (populacao_carta1 < populacao_carta2)
       {
         printf("A carta %s venceu, pois possui maior população \n", cidade_carta2);
       }else{
         printf("### Empate ###\n");
       }
       
      break;

    case 2:
       printf("Comparação do PIB:\n");
       if (pib_carta1 > pib_carta2)
       {
          printf("A carta %s venceu, pois possui maior PIB\n", cidade_carta1);
       }else if (pib_carta1 < pib_carta2)
       {
         printf("A carta %s venceu, pois possui maior PIB \n", cidade_carta2);
       }else{
         printf("### Empate ###\n");
       }
      break;

    case 3:
       printf("Comparação da Área:\n");
       if (area_carta1 > area_carta2)
       {
          printf("A carta %s venceu, pois possui maior área\n", cidade_carta1);
       }else if (area_carta1 < area_carta2)
       {
         printf("A carta %s venceu, pois possui maior área \n", cidade_carta2);
       }else{
         printf("### Empate ###\n");
       }
      break;

    case 4:
       printf("Comparação da Densidade Demográfica:\n");
       if (densidade_carta1 < densidade_carta2)
       {
          printf("A carta %s venceu, pois possui menor Densidade Demográfica\n", cidade_carta1);
       }else if (densidade_carta1 > densidade_carta2)
       {
         printf("A carta %s venceu, pois possui menor Densidade Demográfica \n", cidade_carta2);
       }else{
         printf("### Empate ###\n");
       }
      break;

    case 5:
       printf("Comparação de Pontos Turísticos:\n");
       if (pontosTuristicos_carta1 > pontosTuristicos_carta2)
       {
          printf("A carta %s venceu, pois possui mais Pontos Turísticos\n", cidade_carta1);
       }else if (pontosTuristicos_carta1 < pontosTuristicos_carta2)
       {
         printf("A carta %s venceu, pois possui mais Pontos Turísticos \n", cidade_carta2);
       }else{
         printf("### Empate ###\n");
       }
      break;

    default:
      printf("Valor inválido!\n");
      break;
    }

  /*Implementando Comparações Avançadas com Atributos Múltiplos*/
  char opcao1, opcao2;
  int resultado1, resultado2;
  float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

  printf("\n-- Comparando dois atributos das cartas --\n");
  printf("Escolha o primeiro atributo a ser comparado:\n");
  printf("A - População\nB - PIB\nC - Área\nD - Densidade Demográfica\nE - Pontos Turísticos\n> ");
  scanf(" %c", &opcao1);

  switch (opcao1) {
    case 'A': 
    case 'a':
      resultado1 = populacao_carta1 > populacao_carta2 ? 1 : 0;
      valor1_c1 = populacao_carta1;
      valor1_c2 = populacao_carta2;
      break;

    case 'B': 
    case 'b':
      resultado1 = pib_carta1 > pib_carta2 ? 1 : 0;
      valor1_c1 = pib_carta1;
      valor1_c2 = pib_carta2;
      break;

    case 'C': 
    case 'c':
      resultado1 = area_carta1 > area_carta2 ? 1 : 0;
      valor1_c1 = area_carta1;
      valor1_c2 = area_carta2;
      break;

    case 'D': 
    case 'd':
      resultado1 = densidade_carta1 < densidade_carta2 ? 1 : 0;
      valor1_c1 = densidade_carta1;
      valor1_c2 = densidade_carta2;
      break;

    case 'E': 
    case 'e':
      resultado1 = pontosTuristicos_carta1 > pontosTuristicos_carta2 ? 1 : 0;
      valor1_c1 = pontosTuristicos_carta1;
      valor1_c2 = pontosTuristicos_carta2;
      break;

    default:
      printf("Opção inválida!\n");
      return 1;
  }

  // Escolha do segundo atributo
  printf("\nEscolha o segundo atributo (diferente do anterior):\n");
  printf("A - População\nB - PIB\nC - Área\nD - Densidade Demográfica\nE - Pontos Turísticos\n> ");
  scanf(" %c", &opcao2);

  if (opcao1 == opcao2) {
    printf("Você escolheu o mesmo atributo duas vezes. Operação cancelada!\n");
    return 1;
  }

  switch (opcao2) {
    case 'A': 
    case 'a':
      resultado2 = populacao_carta1 > populacao_carta2 ? 1 : 0;
      valor2_c1 = populacao_carta1;
      valor2_c2 = populacao_carta2;
      break;

    case 'B': 
    case 'b':
      resultado2 = pib_carta1 > pib_carta2 ? 1 : 0;
      valor2_c1 = pib_carta1;
      valor2_c2 = pib_carta2;
      break;

    case 'C': 
    case 'c':
      resultado2 = area_carta1 > area_carta2 ? 1 : 0;
      valor2_c1 = area_carta1;
      valor2_c2 = area_carta2;
      break;

    case 'D': 
    case 'd':
      resultado2 = densidade_carta1 < densidade_carta2 ? 1 : 0;
      valor2_c1 = densidade_carta1;
      valor2_c2 = densidade_carta2;
      break;

    case 'E': 
    case 'e':
      resultado2 = pontosTuristicos_carta1 > pontosTuristicos_carta2 ? 1 : 0;
      valor2_c1 = pontosTuristicos_carta1;
      valor2_c2 = pontosTuristicos_carta2;
      break;

    default:
      printf("Opção inválida!\n");
      return 1;
  }

  // Exibir resultados
  printf("\nResultados da comparação\n");
  printf("Cidade 1: %s\n", cidade_carta1);
  printf("Cidade 2: %s\n", cidade_carta2);
  printf("Atributo 1: %.2f x %.2f -> %s venceu\n", valor1_c1, valor1_c2, resultado1 ? cidade_carta1 : cidade_carta2);
  printf("Atributo 2: %.2f x %.2f -> %s venceu\n", valor2_c1, valor2_c2, resultado2 ? cidade_carta1 : cidade_carta2);

  float soma_c1 = valor1_c1 + valor2_c1;
  float soma_c2 = valor1_c2 + valor2_c2;

  printf("\nSoma dos dois atributos:\n");
  printf("%s: %.2f\n", cidade_carta1, soma_c1);
  printf("%s: %.2f\n", cidade_carta2, soma_c2);

  if (soma_c1 > soma_c2) {
    printf("\n-- %s venceu a rodada! --\n", cidade_carta1);
  } else if (soma_c1 < soma_c2) {
    printf("\n-- %s venceu a rodada! --\n", cidade_carta2);
  } else {
    printf("\n### Empate! ###\n");
  }
  
    return 0;
}
