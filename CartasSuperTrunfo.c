#include <stdio.h>

int main(){

    //jodo de super trunfo com comparação avançada de múltiplos atributos 
    //ne código temos duas cartas, cada uma representando um país, com as seguintes propriedades: 
    //população, área, PIB, pontos turísticos e densidade populacional. 
    //O jogador escolhe duas propriedades para comparar e o vencedor é determinado com base na comparação dessas propriedades. 
    //O código começa com um menu inicial onde o jogador pode escolher iniciar o jogo, ler as regras ou sair. 
    //Se o jogador escolher iniciar o jogo, ele será solicitado a cadastrar as propriedades das duas cartas. 
    //Em seguida, o jogador escolhe duas propriedades para comparação e o resultado da comparação é exibido, 
    //indicando qual carta venceu ou se houve um empate. 
    //O código é estruturado de forma simples e direta, utilizando estruturas de controle como switch-case 
    //para lidar com as escolhas do jogador e comparações. Ele também inclui validação básica para opções inválidas. 
    //O objetivo é proporcionar uma experiência interativa e educativa sobre os países, 
    //permitindo que os jogadores aprendam sobre diferentes características enquanto se divertem jogando. 
    //Por: Erick Moraes

    // CARTA 1 
    char pais1[50]; 
    int populacao1; 
    float area1; 
    float pib1; 
    int pontos_turisticos1; 
    float densidade1;

    // CARTA 2 
    char pais2[50]; 
    int populacao2; 
    float area2; 
    float pib2; 
    int pontos_turisticos2; 
    float densidade2;
    
    int opcao;

    printf("=== Jogo de Super Trunfo - Países ===\n"); 
    printf("1. Iniciar o jogo\n"); 
    printf("2. Regras do jogo\n"); 
    printf("3. Sair\n");

    printf("Digite a opção: "); 
    scanf("%d", &opcao);

    if (opcao == 2) { 
        printf("\n=== Regras do Jogo ===\n"); 
        printf("1. Cadastre duas cartas com as propriedades solicitadas.\n"); 
        printf("2. Os jogadores escolhem duas propriedades para comparar.\n"); 
        printf("3. O jogador com a maior pontuação na soma das propriedades escolhidas vence a rodada.\n"); 
        printf("4. A propriedade de Densidade Populacional é comparada de forma inversa, ou seja, o menor valor vence.\n"); 
        printf("Divirta-se jogando e aprendendo sobre os países!\n");
        
        return 0; 
    } 
    else if(opcao == 3) { 
        printf("Saindo...\n"); 
        return 0;
    }

    // Cadastro
    printf("\n=== Carta 1 ===\n"); 
    printf("Nome do país: ");
    scanf("%s", pais1); 
    printf("População: ");
    scanf("%d", &populacao1); 
    printf("Área em km²: ");
    scanf("%f", &area1); 
    printf("PIB em milhões: ");
    scanf("%f", &pib1); 
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1); 

    printf("\n=== Carta 2 ===\n"); 
    printf("Nome do país: ");
    scanf("%s", pais2); 
    printf("População: ");
    scanf("%d", &populacao2); 
    printf("Área em km²: ");
    scanf("%f", &area2); 
    printf("PIB em milhões: ");
    scanf("%f", &pib2); 
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2); 

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    int opcao1, opcao2;
    int pontos1 = 0, pontos2 = 0;

    // MENU DE ESCOLHA
    printf("\n=== PROPRIEDADES ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade (menor vence)\n");

    // PRIMEIRA ESCOLHA
    printf("\nEscolha a primeira propriedade: ");
    scanf("%d", &opcao1);

    // SEGUNDA ESCOLHA (validação simples)
    do {
        printf("Escolha a segunda propriedade (diferente da primeira): ");
        scanf("%d", &opcao2);
    } while(opcao2 == opcao1);

    printf("Escolhidas: %d e %d\n", opcao1, opcao2);

    // -------- COMPARAÇÃO 1 --------
    switch(opcao1){
        case 1:
            if(populacao1 > populacao2) pontos1++;
            else if(populacao2 > populacao1) pontos2++;
            break;

        case 2:
            if(area1 > area2) pontos1++;
            else if(area2 > area1) pontos2++;
            break;

        case 3:
            if(pib1 > pib2) pontos1++;
            else if(pib2 > pib1) pontos2++;
            break;

        case 4:
            if(pontos_turisticos1 > pontos_turisticos2) pontos1++;
            else if(pontos_turisticos2 > pontos_turisticos1) pontos2++;
            break;

        case 5:
            if(densidade1 < densidade2) pontos1++;
            else if(densidade2 < densidade1) pontos2++;
            break;
    }

    // -------- COMPARAÇÃO 2 --------
    switch(opcao2){
        case 1:
            if(populacao1 > populacao2) pontos1++;
            else if(populacao2 > populacao1) pontos2++;
            break;

        case 2:
            if(area1 > area2) pontos1++;
            else if(area2 > area1) pontos2++;
            break;

        case 3:
            if(pib1 > pib2) pontos1++;
            else if(pib2 > pib1) pontos2++;
            break;

        case 4:
            if(pontos_turisticos1 > pontos_turisticos2) pontos1++;
            else if(pontos_turisticos2 > pontos_turisticos1) pontos2++;
            break;

        case 5:
            if(densidade1 < densidade2) pontos1++;
            else if(densidade2 < densidade1) pontos2++;
            break;
    }

    // RESULTADO
    printf("\nResultado:\n");
    printf("Carta 1: %d pontos\n", pontos1);
    printf("Carta 2: %d pontos\n", pontos2);

    if(pontos1 > pontos2)
        printf("Carta 1 (%s) venceu!\n", pais1);
    else if(pontos2 > pontos1)
        printf("Carta 2 (%s) venceu!\n", pais2);
    else
        printf("Empate! (%s e %s)\n", pais1, pais2);

    return 0;
}
