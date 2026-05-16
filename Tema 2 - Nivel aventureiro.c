#include <stdio.h>

int main() {

    // Variáveis - Carta 1
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int habitantes1;
    float area1;
    float pib1;
    int pontos1;
    

    // Variáveis - Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int habitantes2;
    float area2;
    float pib2;
    int pontos2;
 


    // ---- CARTA 1 ----
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite a letra do Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &habitantes1);

    printf("Digite a área (km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &pontos1);

    float densidade1 =(float)habitantes1/area1;
    float pibpercapita1=(float)pib1/habitantes1;

    // ---- CARTA 2 ----
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite a letra do Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &habitantes2);

    printf("Digite a área (km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &pontos2);

    float densidade2 =(float)habitantes2/area2;
    float pibpercapita2=(float)pib2/habitantes2;


    // ---- EXIBIÇÃO ----
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita:%.3f/n", pibpercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita:%.3f/n", pibpercapita2);



    return 0;
}
