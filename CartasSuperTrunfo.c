#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo: Adicionar e Calcular a Densisade Populacional e o PIB per capita
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo_carta[4]; // Exemplo: 1, 2, etc.
  char cidade[50]; // Nome da cidade
  int populacao;
  float area;
  float pib;
  int pontos_turisticos; 
  float densidade_populacional; //adicionai a variável para densidade em float
  float pib_per_capita; //adicionei a variável pib per capita também em float
  char continuar; // Variável para controlar o loop de cadastro 


  // Área para entrada de dados
  do {
  printf("=== Cadastro de Carta de Super Trunfo ===\n");

  printf("Digite o código da carta (ex: 1): "); 
  scanf("%s", &codigo_carta);

  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado);

  printf("Nome da cidade: ");
  scanf("%s", &cidade);

  printf("Digite a população: ");
  scanf("%d", &populacao);

  printf("Digite a área (em km²): ");
  scanf("%f", &area);

  printf("Digite o PIB (em milhões): ");  
  scanf("%f", &pib);
  
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos); 
  
  densidade_populacional = populacao / area;
  pib_per_capita = (pib * 1000000) / populacao; 
  // Converti PIB para reais antes de calcular o PIB per capita para o progamar dar saída no formato correto.

  // Área saída de dados
  printf("\n=== Carta de Super Trunfo Cadastrada ===\n"); 
  printf("Código da Carta: %s\n", codigo_carta);
  printf("Estado: %c\n", estado);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao); 
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f milhões\n", pib);
  printf("Pontos Turísticos: %d\n", pontos_turisticos);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional); //Cálculo da densidade populacional em hab/km²
  printf("PIB per Capita: %.2f reais\n", pib_per_capita); // Cálculo do PIB per capita em reais

  printf("Deseja cadastrar o próximo? (S/N): ");
  scanf(" %c", &continuar);
  printf("\n");

  } while (continuar == 'S' || continuar == 's'); // Loop para cadastrar múltiplas cartas 

  printf("Cadastro de cartas concluído. Obrigado por participar!\n");
  
  return 0;
  

} 
