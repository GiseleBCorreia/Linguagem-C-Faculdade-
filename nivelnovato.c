#include <stdio.h>


int main() {
       // UTF-8 no input
    
    // resto do código...

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo[10];
  char cidade[50];
  int habitantes;
  float area;
  float pib;
  int pontos;
  int numero;

  // Área para entrada de dados
  printf("Digite o número da sua carta:\n");
  scanf(" %i", &numero);

  printf("Digite a letra que representa seu Estado:\n");
  scanf(" %c", &estado);

  printf("Digite o código da sua carta:\n");
  scanf(" %s", codigo);

  printf("Digite o nome da sua cidade:\n");
  scanf(" %s", cidade);

  printf("Digite o número de habitantes:\n");
  scanf(" %d", &habitantes);

  printf("Digite a área:\n");
  scanf(" %f", &area);

  printf("Digite o PIB:\n");
  scanf(" %f", &pib);

  printf("Digite os pontos turísticos:\n");
  scanf(" %d", &pontos);
  // Área para exibição dos dados da cidade
  printf("\n--- CARTA %i ---\n", numero);

printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("Habitantes: %d\n", habitantes);
printf("Area: %.2f km²\n", area);
printf("PIB: %.2f\n", pib);
printf("Pontos Turisticos: %d\n", pontos);
return 0;
} 