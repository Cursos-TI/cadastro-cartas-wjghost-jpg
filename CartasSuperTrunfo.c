#include <stdio.h>

int main() {

    // =========================
    // Carta 1
    // =========================

    char estado1[3] = "SP";
    char codigo1[5] = "A01";
    char cidade1[30] = "Sao Paulo";

    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    float densidade1;
    float pibPerCapita1;

    // =========================
    // Carta 2
    // =========================

    char estado2[3] = "RJ";
    char codigo2[5] = "B01";
    char cidade2[30] = "Rio de Janeiro";

    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    float densidade2;
    float pibPerCapita2;

    // =========================
    // Cálculos
    // =========================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // =========================
    // Exibição das cartas
    // =========================

    printf("=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.8f\n\n", pibPerCapita1);

    printf("=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.8f\n\n", pibPerCapita2);

    // =========================
    // Comparação
    // Atributo escolhido: População
    // =========================

    printf("=== COMPARACAO DE CARTAS ===\n");
    printf("Atributo: Populacao\n\n");

    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n\n", cidade2, populacao2);

    // Verifica vencedora
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}