#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //variaveis  carta 1

        char estado1;
        char codigo1[4];
        char cidade1[50];
        int populacao1;
        float area1;
        float pib1;
        int turistico1;
        float den_populacional1;
        float pib_per_capita1;

        //variaveis  carta 2

        char estado2;
        char codigo2[4];
        char cidade2[50];
        int populacao2;
        float area2;
        float pib2;
        int turistico2; 
        float den_populacional2;
        float pib_per_capita2;


        //entradas carta 1

    printf("Insira as informações da Carta 1: \n");

    printf("informe o Estado (Uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado1);

    printf("Informe o código da carta: \n");
    scanf("%s", &codigo1); 

    printf("Informe o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Informe o numero de Habitantes: \n");
    scanf("%i", &populacao1);

    printf("Informe a Área (em Km²): \n");
    scanf("%f", &area1);

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turisticos: \n");
    scanf("%i", &turistico1);

    //entradas carta 2 

    printf("Insira as informações da Carta 2: \n");

    printf("informe o Estado (Uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta: \n");
    scanf("%s", &codigo2); 

    printf("Informe o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Informe o numero de Habitantes: \n");
    scanf("%i", &populacao2);

    printf("Informe a Área (em Km²): \n");
    scanf("%f", &area2);

    printf("Informe o PIB: \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turisticos: \n");
    scanf("%i", &turistico2); 


  //Calculos Densidade Populacional e População e PIB per Capita
  den_populacional1 = populacao1 / area1;
  pib_per_capita1 = pib1 / populacao1;
  den_populacional2 = populacao2 / area2;
  pib_per_capita2 = pib2 / populacao2;

    //saida carta 1

    printf("\nCarta 1! \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f, \n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turisticos: %i\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km² \n", den_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    //saida carta 2
      
   printf("\nCarta 2! \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f, \n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turisticos: %i\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km² \n", den_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
   return 0


} 
