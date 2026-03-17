#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo: Adicionar e Calcular a Densisade Populacional e o PIB per capita
#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro e comparação de duas cartas

int main() {

    // CARTA 1
    char estado1;
    char codigo_carta1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // CARTA 2
    char estado2;
    char codigo_carta2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;
   
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta1);

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // cálculos carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000) / populacao1;

    super_poder1 = (populacao1 + area1 + pib1 + pontos_turisticos1 + densidade_populacional1 + pib_per_capita1) / 6;


    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta2);

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // cálculos carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000) / populacao2;

    super_poder2 = (populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2) / 6;


    printf("\n=== Carta 1 ===\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);


    printf("\n=== Carta 2 ===\n");
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);


   printf("\n=== Comparação das Cartas ===\n");
    printf("Carta 1 - %s , (%c) , %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s , (%c) , %d\n", cidade2, estado2, populacao2);

if (populacao1 > populacao2) {
    printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
} else {
    printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
}
  
    
    return 0;
    
    
}
