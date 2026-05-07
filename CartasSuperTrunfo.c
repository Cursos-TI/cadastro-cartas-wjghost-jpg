#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre

int main() {

    // =========================
    // Declaração das variáveis
    // =========================

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];

    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;

    float area1, area2;
    float pib1, pib2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // =========================
    // Cadastro da Carta 1
    // =========================

    printf("====================================\n");
    printf("      SUPER TRUNFO - PAISES\n");
    printf("          NIVEL MESTRE\n");
    printf("====================================\n\n");

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area em km2: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // =========================
    // Cadastro da Carta 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =========================
    // Cálculos das propriedades
    // =========================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidade1 + pibPerCapita1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidade2 + pibPerCapita2;

    // =========================
    // Exibição das cartas
    // =========================

    printf("\n====================================\n");
    printf("         DADOS DAS CARTAS\n");
    printf("====================================\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // =========================
    // Comparação das cartas
    // =========================

    printf("\n====================================\n");
    printf("       COMPARACAO DAS CARTAS\n");
    printf("====================================\n");

    printf("\nPopulacao: %s venceu\n", populacao1 > populacao2 ? cidade1 : cidade2);
    printf("Area: %s venceu\n", area1 > area2 ? cidade1 : cidade2);
    printf("PIB: %s venceu\n", pib1 > pib2 ? cidade1 : cidade2);
    printf("Pontos Turisticos: %s venceu\n", pontosTuristicos1 > pontosTuristicos2 ? cidade1 : cidade2);

    printf("Densidade Populacional: %s venceu\n", densidade1 < densidade2 ? cidade1 : cidade2);

    printf("PIB per Capita: %s venceu\n", pibPerCapita1 > pibPerCapita2 ? cidade1 : cidade2);
    printf("Super Poder: %s venceu\n", superPoder1 > superPoder2 ? cidade1 : cidade2);

    // =========================
    // Resultado final
    // =========================

    printf("\n====================================\n");
    printf("          RESULTADO FINAL\n");
    printf("====================================\n");

    if (superPoder1 > superPoder2) {
        printf("A carta vencedora geral foi: %s\n", cidade1);
    } else if (superPoder2 > superPoder1) {
        printf("A carta vencedora geral foi: %s\n", cidade2);
    } else {
        printf("As cartas empataram no Super Poder.\n");
    }

    return 0;
}