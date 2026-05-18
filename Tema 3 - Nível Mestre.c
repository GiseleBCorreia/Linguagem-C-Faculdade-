#include <stdio.h>

// Função para exibir o menu de atributos
void exibirMenu() {
    printf("\nEscolha um atributo para comparar:\n");
    printf("1. Habitantes\n");
    printf("2. Area (km2)\n");
    printf("3. PIB (bilhoes de reais)\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
}

// Função para obter o nome do atributo
const char* nomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "Habitantes";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade Demografica";
        case 6: return "PIB per Capita";
        case 7: return "Super Poder";
        default: return "Desconhecido";
    }
}

// Retorna o valor do atributo da carta (1 ou 2)
// Para densidade: menor vence, então invertemos o sinal
double obterValor(int opcao, int carta,
    unsigned long int hab1, float area1, float pib1, int pts1, float den1, float ppc1, float sp1,
    unsigned long int hab2, float area2, float pib2, int pts2, float den2, float ppc2, float sp2) {

    if (carta == 1) {
        switch (opcao) {
            case 1: return (double)hab1;
            case 2: return (double)area1;
            case 3: return (double)pib1;
            case 4: return (double)pts1;
            case 5: return (double)den1;
            case 6: return (double)ppc1;
            case 7: return (double)sp1;
        }
    } else {
        switch (opcao) {
            case 1: return (double)hab2;
            case 2: return (double)area2;
            case 3: return (double)pib2;
            case 4: return (double)pts2;
            case 5: return (double)den2;
            case 6: return (double)ppc2;
            case 7: return (double)sp2;
        }
    }
    return 0;
}

// Compara dois valores de um atributo (retorna: 1 = carta1 vence, 2 = carta2 vence, 0 = empate)
int compararAtributo(int opcao, double val1, double val2) {
    // Densidade: menor vence
    if (opcao == 5) {
        return (val1 < val2) ? 1 : (val2 < val1) ? 2 : 0;
    }
    // Demais: maior vence
    return (val1 > val2) ? 1 : (val2 > val1) ? 2 : 0;
}

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

    printf("Digite a letra do Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o numero de habitantes: ");
    scanf("%lu", &habitantes1);

    printf("Digite a area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos1);

    // ---- CADASTRO CARTA 2 ----
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite a letra do Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o numero de habitantes: ");
    scanf("%lu", &habitantes2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos2);

    // ---- CÁLCULOS ----
    float densidade1    = (float)habitantes1 / area1;
    float densidade2    = (float)habitantes2 / area2;
    float pibpercapita1 = pib1 / (float)habitantes1;
    float pibpercapita2 = pib2 / (float)habitantes2;
    float superpoder1   = (float)habitantes1 + area1 + pib1 + pontos1 + pibpercapita1 + (1.0f / densidade1);
    float superpoder2   = (float)habitantes2 + area2 + pib2 + pontos2 + pibpercapita2 + (1.0f / densidade2);

    // ---- EXIBIÇÃO DAS CARTAS ----
    printf("\n========================================\n");
    printf("           CARTAS CADASTRADAS           \n");
    printf("========================================\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n",               estado1);
    printf("Codigo: %s\n",               codigo1);
    printf("Cidade: %s\n",               cidade1);
    printf("Habitantes: %lu\n",          habitantes1);
    printf("Area: %.2f km2\n",           area1);
    printf("PIB: %.2f bilhoes\n",        pib1);
    printf("Pontos Turisticos: %d\n",    pontos1);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.6f\n",     pibpercapita1);
    printf("Super Poder: %.2f\n",        superpoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n",               estado2);
    printf("Codigo: %s\n",               codigo2);
    printf("Cidade: %s\n",               cidade2);
    printf("Habitantes: %lu\n",          habitantes2);
    printf("Area: %.2f km2\n",           area2);
    printf("PIB: %.2f bilhoes\n",        pib2);
    printf("Pontos Turisticos: %d\n",    pontos2);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.6f\n",     pibpercapita2);
    printf("Super Poder: %.2f\n",        superpoder2);

    // ---- COMPARAÇÃO - NÍVEL MESTRE: DOIS ATRIBUTOS ----
    printf("\n========================================\n");
    printf("       COMPARACAO - NIVEL MESTRE        \n");
    printf("========================================\n");
    printf("Voce escolhera DOIS atributos para comparar.\n");
    printf("Cada atributo vale 1 ponto para a carta vencedora.\n");
    printf("A carta com mais pontos ao final vence!\n");

    int opcao1, opcao2;

    // --- Escolha do 1º atributo ---
    printf("\n>> Escolha o 1o atributo:\n");
    exibirMenu();
    printf("Opcao: ");
    scanf("%d", &opcao1);

    while (opcao1 < 1 || opcao1 > 7) {
        printf("Opcao invalida! Digite um numero entre 1 e 7: ");
        scanf("%d", &opcao1);
    }

    // --- Escolha do 2º atributo (diferente do 1º) ---
    printf("\n>> Escolha o 2o atributo (diferente do primeiro):\n");
    exibirMenu();
    printf("Opcao: ");
    scanf("%d", &opcao2);

    while (opcao2 < 1 || opcao2 > 7 || opcao2 == opcao1) {
        if (opcao2 == opcao1)
            printf("Voce ja escolheu esse atributo! Escolha outro: ");
        else
            printf("Opcao invalida! Digite um numero entre 1 e 7: ");
        scanf("%d", &opcao2);
    }

    // --- Obter valores ---
    double v1a1 = obterValor(opcao1, 1, habitantes1, area1, pib1, pontos1, densidade1, pibpercapita1, superpoder1,
                                        habitantes2, area2, pib2, pontos2, densidade2, pibpercapita2, superpoder2);
    double v2a1 = obterValor(opcao1, 2, habitantes1, area1, pib1, pontos1, densidade1, pibpercapita1, superpoder1,
                                        habitantes2, area2, pib2, pontos2, densidade2, pibpercapita2, superpoder2);
    double v1a2 = obterValor(opcao2, 1, habitantes1, area1, pib1, pontos1, densidade1, pibpercapita1, superpoder1,
                                        habitantes2, area2, pib2, pontos2, densidade2, pibpercapita2, superpoder2);
    double v2a2 = obterValor(opcao2, 2, habitantes1, area1, pib1, pontos1, densidade1, pibpercapita1, superpoder1,
                                        habitantes2, area2, pib2, pontos2, densidade2, pibpercapita2, superpoder2);

    // --- Comparar cada atributo ---
    int resultado1 = compararAtributo(opcao1, v1a1, v2a1);
    int resultado2 = compararAtributo(opcao2, v1a2, v2a2);

    // --- Exibir resultado de cada atributo ---
    printf("\n========================================\n");
    printf("           RESULTADO POR ATRIBUTO       \n");
    printf("========================================\n");

    printf("\n[Atributo 1] %s:\n", nomeAtributo(opcao1));
    printf("  Carta 1 (%s): %.4f\n", cidade1, v1a1);
    printf("  Carta 2 (%s): %.4f\n", cidade2, v2a1);
    printf("  Vencedor: %s\n",
        resultado1 == 1 ? cidade1 :
        resultado1 == 2 ? cidade2 :
        "EMPATE");

    printf("\n[Atributo 2] %s:\n", nomeAtributo(opcao2));
    printf("  Carta 1 (%s): %.4f\n", cidade1, v1a2);
    printf("  Carta 2 (%s): %.4f\n", cidade2, v2a2);
    printf("  Vencedor: %s\n",
        resultado2 == 1 ? cidade1 :
        resultado2 == 2 ? cidade2 :
        "EMPATE");

    // --- Placar final ---
    int placar1 = (resultado1 == 1 ? 1 : 0) + (resultado2 == 1 ? 1 : 0);
    int placar2 = (resultado1 == 2 ? 1 : 0) + (resultado2 == 2 ? 1 : 0);

    printf("\n========================================\n");
    printf("            PLACAR FINAL                \n");
    printf("========================================\n");
    printf("  %s: %d ponto(s)\n", cidade1, placar1);
    printf("  %s: %d ponto(s)\n", cidade2, placar2);

    // --- Decisão final com operador ternário e lógica aninhada ---
    printf("\n>> RESULTADO FINAL: ");

    if (placar1 > placar2) {
        printf("CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (placar2 > placar1) {
        printf("CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        // Empate no placar - desempate pelo Super Poder
        printf("EMPATE NOS ATRIBUTOS!\n");
        printf("Desempatando pelo Super Poder...\n");
        printf("  Super Poder Carta 1 (%s): %.2f\n", cidade1, superpoder1);
        printf("  Super Poder Carta 2 (%s): %.2f\n", cidade2, superpoder2);

        printf("  Vencedor no desempate: %s\n",
            superpoder1 > superpoder2 ? cidade1 :
            superpoder2 > superpoder1 ? cidade2 :
            "EMPATE TOTAL!");
    }

    printf("\n========================================\n");
    printf("           Obrigado por jogar!          \n");
    printf("========================================\n");

    return 0;
}