#include <stdio.h>


int main() {


    // Variáveis - Carta 1
    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int habitantes1;
    float area1;
    float pib1;
    int pontos1;

    // Variáveis - Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int habitantes2;
    float area2;
    float pib2;
    int pontos2;

    // ---- CADASTRO CARTA 1 ----
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite a letra do Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes:\n");
    scanf("%lu", &habitantes1);

    printf("Digite a área (km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &pontos1);

    // ---- CADASTRO CARTA 2 ----
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite a letra do Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes:\n");
    scanf("%lu", &habitantes2);

    printf("Digite a área (km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &pontos2);

    // ---- CÁLCULOS ----
    float densidade1 = (float)habitantes1 / area1;
    float densidade2 = (float)habitantes2 / area2;

    float pibpercapita1 = pib1 / (float)habitantes1;
    float pibpercapita2 = pib2 / (float)habitantes2;

    float superpoder1 = (float)habitantes1 + area1 + pib1 + pontos1 + pibpercapita1 + (1.0f / densidade1);
    float superpoder2 = (float)habitantes2 + area2 + pib2 + pontos2 + pibpercapita2 + (1.0f / densidade2);

    // ---- EXIBIÇÃO DAS CARTAS ----
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // ---- COMPARAÇÕES ----
    printf("\nComparação de Cartas:\n");

    // População: maior vence
    if (habitantes1 > habitantes2)
        printf("População: Carta 1 venceu (1)\n");
    else
        printf("População: Carta 2 venceu (0)\n");

    // Área: maior vence
    if (area1 > area2)
        printf("Área: Carta 1 venceu (1)\n");
    else
        printf("Área: Carta 2 venceu (0)\n");

    // PIB: maior vence
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");

    // Pontos turísticos: maior vence
    if (pontos1 > pontos2)
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");

    // Densidade: MENOR vence
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");

    // PIB per Capita: maior vence
    if (pibpercapita1 > pibpercapita2)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu (0)\n");

    // Super Poder: maior vence
    if (superpoder1 > superpoder2)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");

    return 0;
}
