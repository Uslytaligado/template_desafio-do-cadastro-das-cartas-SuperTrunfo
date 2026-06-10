#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[2], estado2[2], cdgCarta1[4],cdgCarta2[4], cidade1[50], cidade2[50];
  double percapita1, percapita2, area1, area2, PIB1, PIB2, densidade1, densidade2;
  int turismo1, p, t, turismo2;
  unsigned long int populacion1, populacion2;
  double superPoder1,superPoder2;
  double areahabitante1, areahabitante2, a, d, s, pi, pe;

  // Área para entrada de dados 
  printf("Digite uma UF de estado: \n");
  scanf("%s", estado1);
  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade1);
  printf("Digite a população da sua cidade: \n");
  scanf("%lu", &populacion1);
  printf("Digite a area da sua cidade: \n");
  scanf("%lf", &area1);
  printf("DIgite o PIB da sua cidade: \n");
  scanf("%lf", &PIB1);
  printf("Quantos pontos turisticos tem sua cidade: \n");
  scanf("%d", &turismo1);
  densidade1 = populacion1 / area1;
  percapita1 = PIB1 / populacion1;
  areahabitante1 = area1 / populacion1;
  superPoder1 = populacion1 + turismo1 + area1 + PIB1 + percapita1 + areahabitante1;

  printf("Digite uma UF de estado: \n");
  scanf("%s", estado2);
  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade2);
  printf("Digite a população da sua cidade: \n");
  scanf("%lu", &populacion2);
  printf("Digite a area da sua cidade: \n");
  scanf("%lf", &area2);
  printf("DIgite o PIB da sua cidade: \n");
  scanf("%lf", &PIB2);
  printf("Quantos pontos turisticos tem sua cidade: \n");
  scanf("%d", &turismo2);
  densidade2 = populacion2 / area2;
  percapita2 = PIB2 / populacion2;
  areahabitante2 = area2 / populacion2;
  superPoder2 = populacion2 + turismo2 + area2 + PIB2 + percapita2 + areahabitante2;

  // Área para exibiçã o dos dados da cidade
  printf("Carta 1 \n");
  printf("O estado é:%s \n", estado1);
  printf("O codigo é %s01 \n",estado1);
  printf("O nome da cidade é: %s \n", cidade1);
  printf("A população é: %lu \n", populacion1);
  printf("A area da cidade é de: %.2lf \n", area1);
  printf("O PIB é de: %.2lf \n", PIB1);
  printf("Existem %d pontos turisticos! \n", turismo1);
  printf("A densidade da cidade é de: %.3lf \n", densidade1);
  printf("O PIB per capita é de : %.2lf \n", percapita1);
  printf("O super poder é: %.2lf \n", superPoder1);

  printf("Carta 2 \n");
  printf("O estado é:%s \n", estado2);
  printf("O codigo é %s02 \n",estado2);
  printf("O nome da cidade é: %s \n", cidade2);
  printf("A população é: %lu \n", populacion2);
  printf("A area da cidade é de: %.2lf \n", area2);
  printf("O PIB é de: %.2lf \n", PIB2);
  printf("Existem %d pontos turisticos! \n", turismo2);
  printf("A densidade da cidade é de: %.3lf \n", densidade2);
  printf("O PIB per capita é de : %.2lf \n", percapita2);
  printf("O super poder é: %.2lf \n", superPoder2);
  // Area para fazer comparações:
  p = populacion1 > populacion2;
  a = area1 > area2;
  pi = PIB1 > PIB2;
  pe = percapita1 > percapita2;
  s = superPoder1 > superPoder2;
  t = turismo1 > turismo2;
  d = densidade1 < densidade2;

  printf("Comparação das cartas.\n");
  printf("População: %d \n", p);
  printf("A área: %.2lf \n", a);
  printf("O PIB: %.2lf \n", pi);
  printf("Pontos turisticos: %d \n", t);
  printf("Densidade populacional: %.2lf \n",d);
  printf("PIB per capita: %.2lf \n", pe);
  printf("Super poder: %.2lf \n",s);

return 0;
} 
