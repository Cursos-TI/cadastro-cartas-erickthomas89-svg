#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char codigo_carta[4];
  char estado;
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;
  char continuar;  // variavel para controlar o loop de cadastro

  // Área para entrada de dados
  do {
    printf("=== Cadastro de Carta de Super Trunfo ===\n");

    printf("Digite o código da carta (ex.: 1): ");
    scanf("%s", codigo_carta);

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib);

    printf("Digite o número da pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Área para exibição dos dados da cidade
    printf("\n=== Carta de Super trunfo cadastrada ===\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    printf("Deseja cadastrar a próxima carta ? (S/N): ");
    scanf("%c", &continuar);
    printf("\n");

  } while (continuar == 'S' || continuar == 's'); //Loop para cadastrar múltiplas cartas

  printf("Cadastro de cartas concluído. Obrigado por participar!\n");
  
    return 0;


  }
