

#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;
    
    printf("\nDigite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    printf("\nDigite o código da primeira carta (ex: A01): ");
    scanf(" %3s", &codigo1);
    getchar(); // Limpar buffer
    printf("\nDigite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    printf("\nDigite a população: ");
    scanf(" %lu", &populacao1);
    printf("\nDigite a área (em km²): ");
    scanf(" %f", &area1);
    printf("\nDigite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    
    densidade1 = area1 != 0 ? populacao1 / area1 : 0;
    pibPerCapita1 = populacao1 != 0 ? (pib1 * 1e9) / populacao1 : 0;
    superPoder1 = populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + pibPerCapita1 + (densidade1 != 0 ? 1.0f / densidade1 : 0);
    
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    printf("\nDigite o código da segunda carta (ex: A01): ");
    scanf(" %3s", &codigo2);
    getchar(); // Limpar buffer
    printf("\nDigite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    printf("\nDigite a população: ");
    scanf(" %lu", &populacao2);
    printf("\nDigite a área (em km²): ");
    scanf(" %f", &area2);
    printf("\nDigite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("\nDigite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    
    densidade2 = area2 != 0 ? populacao2 / area2 : 0;
    pibPerCapita2 = populacao2 != 0 ? (pib2 * 1e9) / populacao2 : 0;
    superPoder2 = populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + pibPerCapita2 + (densidade2 != 0 ? 1.0f / densidade2 : 0);
    
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);
    
    return 0;
}
