#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pt1, pt2;

    // Carta 1
    printf("Digite o código da carta 1: ");
    scanf("%3s", codigo1);
    printf("Digite a população: ");
    scanf("%d", &pop1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pt1);

    printf("\n");

    // Carta 2
    printf("Digite o código da carta 2: ");
    scanf("%3s", codigo2);
    printf("Digite a população: ");
    scanf("%d", &pop2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pt2);

    printf("\n--- Cartas Cadastradas ---\n\n");

    // Mostrar carta 1
    printf("Carta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pt1);

    // Mostrar carta 2
    printf("Carta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pt2);

    return 0;
}

