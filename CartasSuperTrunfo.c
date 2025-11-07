#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1 = 'R';
    char codigo_carta1 [4] = "R01";
    char nome_cidade1 [25] = "Gramado";
    int populacao1 = 40134;
    float area1 = 237019.00;
    float pib1 = 2.66; // %
    int pontos_turisticos1 = 40;

    char estado2 = 'P';
    char codigo_carta2 [4] = "P02";
    char nome_cidade2 [25] = "Campina Grande";
    int populacao2 = 400000;
    float area2 = 593026.00;
    float pib2 = 80.10; // %
    int pontos_turisticos2 = 15;

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
  setlocale(LC_ALL, "");

    printf("SUPER TRUNFO - CARTA I \n");
    printf("Letra do Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Pib: %.1f % bilhões de reais\n", pib1);
    printf("Pontos (Regiões) Turísticos: %d\n\n\n", pontos_turisticos1);


    printf("SUPER TRUNFO - CARTA II \n");
    printf("Letra do Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.1f % bilhões de reais\n", pib2);
    printf("Pontos (Regiões) Turísticos: %d\n", pontos_turisticos2);

  

return 0;
} 
