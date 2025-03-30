#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.   
    //VARIÁVEIS DA CARTA 1;
    char estado_carta_1, codigo_carta_1[3], nome_da_cidade_carta_1[30];
    int pontos_turisticos_carta_1;
    unsigned long int populacao_carta_1;
    float area_carta_1, pib_carta_1;
    //VARIÁVEIS DA CARTA 2;
    char estado_carta_2, codigo_carta_2[3], nome_da_cidade_carta_2[30];
    int pontos_turisticos_carta_2;
    unsigned long int populacao_carta_2;
    float area_carta_2, pib_carta_2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //AULA 1: COLETANDO OS VALORES DA CARTA 1 ATRAVÉS DO TERMINAL
    printf("\n----- CONFIGURAÇÃO DA CARTA 1: -----\n");
    printf("Digite o estado da carta: ");
    scanf(" %c", &estado_carta_1);
    printf("Digite o código da carta (3 caracteres): ");
    scanf("%3s", codigo_carta_1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade_carta_1);
    printf("Digite a população: ");
    scanf("%d", &populacao_carta_1);
    printf("Digite a área: ");
    scanf("%f", &area_carta_1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta_1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta_1);

    //AULA 2: CALCULANDO DENSIDADE POPULACIONAL E PIB PER CAPITA
    float densidade_populacional_1 = (float) populacao_carta_1 / area_carta_1;
    float pib_per_capita_1 = (pib_carta_1 * (float) pow(10,9)) / (float) populacao_carta_1;
    //AULA 3: SUPER PODER
    float super_poder_carta_1 = (float) populacao_carta_1 + area_carta_1 + pib_carta_1 + (float) pontos_turisticos_carta_1 + pib_per_capita_1 + (1 / densidade_populacional_1);
  
    //AULA 1: COLETANDO OS VALORES DA CARTA 2 ATRAVÉS DO TERMINAL
    printf("\n----- CONFIGURAÇÃO DA CARTA 2: -----\n");
    printf("Digite o estado da carta: ");
    scanf(" %c", &estado_carta_2);
    printf("Digite o código da carta (3 caracteres): ");
    scanf("%3s", codigo_carta_2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade_carta_2);
    printf("Digite a população: ");
    scanf("%d", &populacao_carta_2);
    printf("Digite a área: ");
    scanf("%f", &area_carta_2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta_2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta_2);

    //AULA 2: CALCULANDO DENSIDADE POPULACIONAL E PIB PER CAPITA
    float densidade_populacional_2 = (float) populacao_carta_2 / area_carta_2;
    float pib_per_capita_2 = (pib_carta_2 * (float) pow(10,9)) / (float) populacao_carta_2;
    //AULA 3: SUPER PODER
    float super_poder_carta_2 = (float) populacao_carta_2 + area_carta_2 + pib_carta_2 + (float) pontos_turisticos_carta_2 + pib_per_capita_2 + (1 / densidade_populacional_2);

    //AULA 3: COMPARANDO CARTAS
    //0 vitória da carta 2 | 1 vitória da carta 1
    int comparacao_populacao = populacao_carta_1 < populacao_carta_2;
    int comparacao_area = area_carta_1 < area_carta_2;
    int comparacao_pib = pib_carta_1 < pib_carta_2;
    int comparacao_pontos_turisticos = pontos_turisticos_carta_1 < pontos_turisticos_carta_2;
    int comparacao_densidade_populacional = densidade_populacional_1 < densidade_populacional_2;
    int comparacao_pib_per_capita = pib_per_capita_1 < pib_per_capita_2;
    int comparacao_super_poder = super_poder_carta_1 < super_poder_carta_2;
    
    printf("\n\n");
    printf("###### COMPARAÇÃO DE CARTAS ######");
    printf("\nPopulação: Carta %d venceu (%d)", comparacao_populacao + 1, comparacao_populacao);
    printf("\nÁrea: Carta %d venceu (%d)", comparacao_area + 1, comparacao_area);
    printf("\nPIB: Carta %d venceu (%d)", comparacao_pib + 1, comparacao_pib);
    printf("\nNúmero de Pontos Turísticos: Carta %d venceu (%d)", comparacao_pontos_turisticos + 1, comparacao_pontos_turisticos);
    printf("\nDensidade Populacional: Carta %d venceu (%d)", comparacao_densidade_populacional + 1, comparacao_densidade_populacional);
    printf("\nPIB per Capita: Carta %d venceu (%d)", comparacao_pib_per_capita + 1, comparacao_pib_per_capita);
    printf("\nSuper Poder: Carta %d venceu (%d)", comparacao_super_poder + 1, comparacao_super_poder);
    printf("\n\n");
    /*
    //RESULTADOS DA CARTA 1
    printf("\n##### CARTA 1 #####\n");
    printf("Estado: %c\n", estado_carta_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta_1);
    printf("População: %d\n", populacao_carta_1);
    printf("Área: %.2f km²\n", area_carta_1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_carta_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1); 
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);

    //RESULTADOS DA CARTA 2
    printf("\n##### CARTA 2 #####\n");
    printf("Estado: %c\n", estado_carta_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta_2);
    printf("População: %d\n", populacao_carta_2);
    printf("Área: %.2f km²\n", area_carta_2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_carta_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2); 
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);

    return 0;
    */
}
