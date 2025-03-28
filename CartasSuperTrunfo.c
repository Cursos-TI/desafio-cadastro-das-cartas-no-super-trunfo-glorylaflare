#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado_carta1, estado_carta2, codigo_carta1[3], codigo_carta2[3], nome_da_cidade_carta1[30], nome_da_cidade_carta2[30];
    int populacao_carta1, populacao_carta2, pontos_turisticos_carta1, pontos_turisticos_carta2;
    float area_carta1, area_carta2, pib_carta1, pib_carta2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nCarta 1:\n");
    printf("Digite o estado da carta: ");
    scanf(" %c", &estado_carta1);
    printf("Digite o código da carta (2 caracteres): ");
    scanf("%2s", codigo_carta1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade_carta1);
    printf("Digite a população: ");
    scanf("%d", &populacao_carta1);
    printf("Digite a área: ");
    scanf("%f", &area_carta1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    printf("\nCarta 2:\n");
    printf("Digite o estado da carta: ");
    scanf(" %c", &estado_carta2);
    printf("Digite o código da carta (2 caracteres): ");
    scanf("%2s", codigo_carta2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade_carta2);
    printf("Digite a população: ");
    scanf("%d", &populacao_carta2);
    printf("Digite a área: ");
    scanf("%f", &area_carta2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta2);

    return 0;
}
