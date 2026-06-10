#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[] = "PA", estado2[] = "CE", cdgCarta1[] = "A01",cdgCarta2[] = "B01", cidade1[] = "Belem", cidade2[] = "Fortaleza";
  double percapita1, percapita2, area1 = 1059458, area2 = 312353, PIB1 = 40500123456, PIB2 = 86900123456, densidade1, densidade2;
  int turismo1 = 11, p, t, turismo2 = 13, opcao;
  unsigned long int populacion1 = 1303403, populacion2 = 2428708;
  double superPoder1,superPoder2;
  double areahabitante1, areahabitante2, a, d, s, pi, pe;

  percapita1 = PIB1 / populacion1;
  percapita2 = PIB2 / populacion2;
  densidade1 = populacion1 / area1;
  densidade2 = populacion2 / area2;
  areahabitante1 = area1 / populacion1;
  areahabitante2 = area2 / populacion2;
  superPoder1 = populacion1 + turismo1 + area1 + percapita1 + areahabitante1;
  superPoder2 = populacion2 + turismo2 + area2 + percapita2 + areahabitante2;

  printf("Comparação do atributo população.\n");
  printf("Carta 1 - %s (%s): \n", cidade1, estado1);
  printf("Carta 2 - %s (%s): \n\n", cidade2, estado2);
  
  printf("Escolha um atributo: \n");
  printf("1. População.\n");
  printf("2. Pontos turisticos.\n");
  printf("3. PIB.\n");
  printf("4. PIB Per capita.\n");
  printf("5. Densidade populacional.\n");
  printf("6. Área da cidade.\n");
  printf("7. Super poder.\n");
  scanf("%d",&opcao);
  switch (opcao)
  {
  case 1:
    if (populacion1 > populacion2){
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi a população.\n");
      printf("O valor do atributo da carta 1 é %lu o da carta 2 é %lu \n", populacion1,populacion2);
      printf("A carta vencedora é %s \n", cidade1);
    }else if (populacion1 < populacion2)
    {
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi população.\n");
      printf("O valor do atributo da carta 1 é %d o da carta 2 é %d \n", populacion1, populacion2);
      printf("A carta vencedora é %s \n", cidade2);
    }else{
      printf("Deu empate!!!");
    }
    break;
  case 2:
    if (turismo1 > turismo2){
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi pontos turisticos.\n");
      printf("O valor do atributo da carta 1 é %d o da carta 2 é %d \n", turismo1, turismo2 );
      printf("A carta vencedora é %s \n", cidade1);
    }else if (turismo1 < turismo2)
    {
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi pontos turisticos.\n");
      printf("O valor do atributo da carta 1 é %d o da carta 2 é %d \n", turismo1, turismo2);
      printf("A carta vencedora é %s \n", cidade2);
    }else{
      printf("Deu empate!!!");
    }
    break;
  case 3:
    if (PIB1 > PIB2){
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi o PIB.\n");
      printf("O valor do atributo da carta 1 é %lf o da carta 2 é %lf \n", PIB1, PIB2 );
      printf("A carta vencedora é %s \n", cidade1);
    }else if (PIB1 < PIB2)
    {
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi o PIB.\n");
      printf("O valor do atributo da carta 1 é %lf o da carta 2 é %lf \n", PIB1, PIB2);
      printf("A carta vencedora é %s \n", cidade2);
    }else{
      printf("Deu empate!!!");
    }
    break;
  case 4:
    if (percapita1 > percapita2){
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi o PIB per capita.\n");
      printf("O valor do atributo da carta 1 é %lf o da carta 2 é %lf \n", percapita1, percapita2);
      printf("A carta vencedora é %s \n", cidade1);
    }else if (percapita1 < percapita2)
    {
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi o PIB per capita.\n");
      printf("O valor do atributo da carta 1 é %lf o da carta 2 é %lf \n", percapita1,percapita2);
      printf("A carta vencedora é %s \n", cidade2);
    }else{
      printf("Deu empate!!!");
    }
    break;
  case 5:
    if (densidade1 < densidade2){
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi a densidade populacional.\n");
      printf("O valor do atributo da carta 1 é %lf o da carta 2 é %lf \n", densidade1, densidade2);
      printf("A carta vencedora é %s \n", cidade1);
    }else if (densidade1 > densidade2)
    {
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi a densidade.\n");
      printf("O valor do atributo da carta 1 é %lf o da carta 2 é %lf \n", densidade1, densidade2);
      printf("A carta vencedora é %s \n", cidade2);
    }else{
      printf("Deu empate!!!");
    }
    break;
  case 6:
    if (area1 > area2){
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi a area da cidade.\n");
      printf("O valor do atributo da carta 1 é %lf o da carta 2 é %lf \n", area1, area2);
      printf("A carta vencedora é %s \n", cidade1);
    }else if (area1 < area2)
    {
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi .\n");
      printf("O valor do atributo da carta 1 é %d o da carta 2 é %d \n", area1, area2);
      printf("A carta vencedora é %s \n", cidade2);
    }else{
      printf("Deu empate!!!");
    }
    break;
  case 7:
    if (superPoder1 > superPoder2){
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi o super poder.\n");
      printf("O valor do atributo da carta 1 é %lf o da carta 2 é %lf.\n", superPoder1, superPoder2);
      printf("A carta vencedora é %s \n", cidade1);
    }else if (superPoder1 > superPoder2)
    {
      printf("%s %s \n", estado1,estado2);
      printf("O atributo usado foi o super poder.\n");
      printf("O valor do atributo da carta 1 é %lf o da carta 2 é %lf \n", superPoder1, superPoder2);
      printf("A carta vencedora é %s \n", cidade2);
    }else{
      printf("Deu empate!!!");
    }
    break;   
  default:
      printf("Opção invalida!!!");
    break;
  }
return 0;
} 
