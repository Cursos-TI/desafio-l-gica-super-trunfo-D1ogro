#include <stdio.h>
#include <string.h>

// Constantes
#define MAX_NOME 50
#define MAX_CODIGO 4
#define ESTADOS_VALIDOS "ABCDEFGH"

// Função auxiliar para validar estado (A-H)
int validarEstado(char estado) {
    return (estado >= 'A' && estado <= 'H');
}

int main() {
    // Variáveis da carta 1
    char estado1;
    char codigo1[MAX_CODIGO];
    char nomeCidade1[MAX_NOME];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[MAX_CODIGO];
    char nomeCidade2[MAX_NOME];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Entrada da carta 1
    printf("\n=== Carta 1 ===\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    while (!validarEstado(estado1)) {
        printf("Estado inválido! Digite uma letra de A a H: ");
        scanf(" %c", &estado1);
    }
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o codigo da carta (máx. 3 chars): ");
    scanf("%3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a populacao (número inteiro positivo): ");
    scanf("%d", &populacao1);
    while (populacao1 <= 0) {
        printf("População inválida! Digite um número positivo: ");
        scanf("%d", &populacao1);
    }

    printf("Digite a area em km² (número float positivo): ");
    scanf("%f", &area1);
    while (area1 <= 0) {
        printf("Área inválida! Digite um número positivo: ");
        scanf("%f", &area1);
    }

    printf("Digite o PIB (em bilhões de R$, número float): ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos (número inteiro não-negativo): ");
    scanf("%d", &pontosTuristicos1);
    while (pontosTuristicos1 < 0) {
        printf("Pontos turísticos inválidos! Digite um número não-negativo: ");
        scanf("%d", &pontosTuristicos1);
    }

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Entrada da carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);
    while (!validarEstado(estado2)) {
        printf("Estado inválido! Digite uma letra de A a H: ");
        scanf(" %c", &estado2);
    }
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o codigo da carta (máx. 3 chars): ");
    scanf("%3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a populacao (número inteiro positivo): ");
    scanf("%d", &populacao2);
    while (populacao2 <= 0) {
        printf("População inválida! Digite um número positivo: ");
        scanf("%d", &populacao2);
    }

    printf("Digite a area em km² (número float positivo): ");
    scanf("%f", &area2);
    while (area2 <= 0) {
        printf("Área inválida! Digite um número positivo: ");
        scanf("%f", &area2);
    }

    printf("Digite o PIB (em bilhões de R$, número float): ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos (número inteiro não-negativo): ");
    scanf("%d", &pontosTuristicos2);
    while (pontosTuristicos2 < 0) {
        printf("Pontos turísticos inválidos! Digite um número não-negativo: ");
        scanf("%d", &pontosTuristicos2);
    }

    // Cálculos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos dados da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area em km²: %.2f\n", area1);
    printf("PIB: %.2f bilhões de R$\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f R$/habitante\n\n", pibPerCapita1);

    // Exibição dos dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area em km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões de R$\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f R$/habitante\n\n", pibPerCapita2);

    printf("Cadastro concluído! As cartas estão prontas para o jogo.\n");

    return 0;
}
