#include <stdio.h>

int main() {
    // Carta 1
    char estado1, codigo1[4], nome1[30];
    unsigned long pop1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char estado2, codigo2[4], nome2[30];
    unsigned long pop2;
    float area2, pib2;
    int pontos2;

    // Entrada Carta 1
    printf("Carta 1 - Estado (A-H): "); scanf(" %c", &estado1);
    printf("Codigo (ex: A01): "); scanf("%s", codigo1);
    printf("Cidade (nome): "); scanf(" %[^\n]", nome1);
    printf("Populacao (habitantes): "); scanf("%lu", &pop1);
    printf("Area (km2): "); scanf("%f", &area1);
    printf("PIB (milhoes de R$): "); scanf("%f", &pib1);
    printf("Pontos Turisticos (numero): "); scanf("%d", &pontos1);

    // Entrada Carta 2
    printf("\nCarta 2 - Estado (A-H): "); scanf(" %c", &estado2);
    printf("Codigo (ex: A01): "); scanf("%s", codigo2);
    printf("Cidade (nome): "); scanf(" %[^\n]", nome2);
    printf("Populacao (habitantes): "); scanf("%lu", &pop2);
    printf("Area (km2): "); scanf("%f", &area2);
    printf("PIB (milhoes de R$): "); scanf("%f", &pib2);
    printf("Pontos Turisticos (numero): "); scanf("%d", &pontos2);

    // Calculos
    float dens1 = pop1 / area1, dens2 = pop2 / area2;
    float pibCap1 = (pib1 * 1000000) / pop1, pibCap2 = (pib2 * 1000000) / pop2;
    float sp1 = pop1 + area1 + pib1 + pontos1 + pibCap1 + (1.0 / dens1);
    float sp2 = pop2 + area2 + pib2 + pontos2 + pibCap2 + (1.0 / dens2);

    // Saida Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s\n", nome1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", pop1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade: %.2f\n", dens1);
    printf("PIB per Capita: %.2f\n", pibCap1);
    printf("Super Poder: %.2f\n", sp1);

    // Saida Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\n", nome2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", pop2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade: %.2f\n", dens2);
    printf("PIB per Capita: %.2f\n", pibCap2);
    printf("Super Poder: %.2f\n", sp2);

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    printf("\n--- Comparacao de Cartas ---\n");
    printf("Populacao: Carta %d venceu (%d)\n", (pop1 > pop2) ? 1 : 2, (pop1 > pop2));
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, (pontos1 > pontos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (dens1 < dens2) ? 1 : 2, (dens1 < dens2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibCap1 > pibCap2) ? 1 : 2, (pibCap1 > pibCap2));
    printf("Super Poder: Carta %d venceu (%d)\n", (sp1 > sp2) ? 1 : 2, (sp1 > sp2));

    return 0;
}

