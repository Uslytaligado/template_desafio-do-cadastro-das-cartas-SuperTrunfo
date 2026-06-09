#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[2], estado2[2], cdgCarta1[4],cdgCarta2[4], cidade1[50], cidade2[50];
  float populacion1, populacion2, percapita1, percapita2, area1, area2, PIB1, PIB2, densidade1, densidade2;
  int turismo1, turismo2;
  // Área para entrada de dados
  printf("Digite uma UF de estado: \n");
  scanf("%s", &estado1);
  printf("Digite o nome da cidade: \n");
  scanf("%s", &cidade1);
  printf("Digite a população da sua cidade: \n");
  scanf("%f", &populacion1);
  printf("Digite a area da sua cidade: \n");
  scanf("%f", &area1);
  printf("DIgite o PIB da sua cidade: \n");
  scanf("%f", &PIB1);
  printf("Quantos pontos turisticos tem sua cidade: \n");
  scanf("%d", &turismo1);
  densidade1 = populacion1 / area1;
  percapita1 = populacion1 / PIB1;

  printf("Digite uma UF de estado: \n");
  scanf("%s", &estado2);
  printf("Digite o nome da cidade: \n");
  scanf("%s", &cidade2);
  printf("Digite a população da sua cidade: \n");
  scanf("%f", &populacion2);
  printf("Digite a area da sua cidade: \n");
  scanf("%f", &area2);
  printf("DIgite o PIB da sua cidade: \n");
  scanf("%f", &PIB2);
  printf("Quantos pontos turisticos tem sua cidade: \n");
  scanf("%d", &turismo2);
  densidade2 = populacion2 / area2;
  percapita2 = populacion2 / PIB2;

  // Área para exibiçã o dos dados da cidade
  printf("Carta 1 \n");
  printf("O estado é:%s \n", estado1);
  printf("O codigo é %s01 \n",estado1);
  printf("O nome da cidade é: %s \n", cidade1);
  printf("A população é: %f \n", populacion1);
  printf("A area da cidade é de: %f \n", area1);
  printf("O PIB é de: %f \n", PIB1);
  printf("Existem %d pontos turisticos! \n", turismo1);
  printf("A densidade da cidade é de: %2.f \n", densidade1);
  printf("O PIB per capita é de : %f \n", percapita1);

  printf("Carta 2 \n");
  printf("O estado é:%s \n", estado2);
  printf("O codigo é %s02 \n",estado2);
  printf("O nome da cidade é: %s \n", cidade2);
  printf("A população é: %f \n", populacion2);
  printf("A area da cidade é de: %f \n", area2);
  printf("O PIB é de: %f \n", PIB2);
  printf("Existem %d pontos turisticos! \n", turismo2);
  printf("A densidade da cidade é de: %3.f \n", densidade2);
  printf("O PIB per capita é de : %3.f \n", percapita2);
return 0;
} 
