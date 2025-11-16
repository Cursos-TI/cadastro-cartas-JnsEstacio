#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FEITO NO CODE BLOCKS
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis da carta 1.
    
    char estado1, codigo_carta1 [4], nome_cidade1 [25]; 
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    
    // Área para definição das variáveis da carta 2.
    
    char estado2, codigo_carta2 [4], nome_cidade2 [25]; 
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Área para coleta e exibição dos dados das cartas.
    //Também, reconhece a acentuação nas palavras.
    
    setlocale(LC_ALL, ""); 

    // Área para coleta dos dados e impressão na tela.
    
    printf("SUPER TRUNFO - CARTA I \n");
    
    printf("Digite a letra do Estado: \n");
    scanf("%c", &estado1);
    
    printf("Digite o codigo da Carta (Ex: A01):\n");
    scanf ("%s", &codigo_carta1);
    
    printf("digite o nome da Cidade: \n"); 
    scanf("%s", &nome_cidade1);
    
    printf("Digite a população da cidade: \n"); 
    scanf("%d", &populacao1);
    
    printf("Digite a área em km²: \n"); 
    scanf("%f", &area1);
    
    printf("Digite o pib: \n");
    scanf("%f", pib1);
    
    printf("Pontos (Regiões) Turísticos: \n\n\n"); 
    scanf("%d", pontos_turisticos1);

/*
    printf("SUPER TRUNFO - CARTA II \n");
    printf("Letra do Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.1f % bilhões de reais\n", pib2);
    printf("Pontos (Regiões) Turísticos: %d\n", pontos_turisticos2);
*/
  

return 0;
} 
