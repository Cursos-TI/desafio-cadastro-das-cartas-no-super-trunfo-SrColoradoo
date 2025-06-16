#include <stdio.h>

struct Carta {
    char codigo[4];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
};

void calcularSuperPoder(struct Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib * 1e9 / carta->populacao;
    carta->super_poder = carta->pib_per_capita + carta->pontos_turisticos + carta->pib + (1 / carta->densidade_populacional);
}

void compararCartas(struct Carta carta1, struct Carta carta2) {
    printf("\n--- Comparação de Cartas ---\n");

    // Comparação de População
    if (carta1.populacao > carta2.populacao)
        printf("População: Carta 1 vence\n");
    else
        printf("População: Carta 2 vence\n");

    // Comparação de Área
    if (carta1.area > carta2.area)
        printf("Área: Carta 1 vence\n");
    else
        printf("Área: Carta 2 vence\n");

    // Comparação de PIB
    if (carta1.pib > carta2.pib)
        printf("PIB: Carta 1 vence\n");
    else
        printf("PIB: Carta 2 vence\n");

    // Comparação de Pontos Turísticos
    if (carta1.pontos_turisticos > carta2.pontos_turisticos)
        printf("Pontos Turísticos: Carta 1 vence\n");
    else
        printf("Pontos Turísticos: Carta 2 vence\n");

    // Comparação de Densidade Populacional
    if (carta1.densidade_populacional < carta2.densidade_populacional)
        printf("Densidade Populacional: Carta 1 vence\n");
    else
        printf("Densidade Populacional: Carta 2 vence\n");

    // Comparação de PIB per Capita
    if (carta1.pib_per_capita > carta2.pib_per_capita)
        printf("PIB per Capita: Carta 1 vence\n");
    else
        printf("PIB per Capita: Carta 2 vence\n");

    // Comparação de Super Poder
    if (carta1.super_poder > carta2.super_poder)
        printf("Super Poder: Carta 1 vence\n");
    else
        printf("Super Poder: Carta 2 vence\n");
}

int main() {
    struct Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite a população: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cálculo da Carta 1
    calcularSuperPoder(&carta1);

    // Cadastro da Carta 2
    printf("\nDigite o código da carta 2 (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Digite a população: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculo da Carta 2
    calcularSuperPoder(&carta2);

    // Exibição dos dados cadastrados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta1.pib_per_capita);
    printf("Super Poder: %.2f\n", carta1.super_poder);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta2.pib_per_capita);
    printf("Super Poder: %.2f\n", carta2.super_poder);

    // Comparação das Cartas
    compararCartas(carta1, carta2);

    return 0;
}

