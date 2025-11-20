#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

// Jailton N Silva - Aluno Estacio de Sá em Ciência da Computação - Pólo São José - Campina Grande-PB
// FEITO NO CODE BLOCKS
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    setlocale(LC_ALL, ""); // Reconhece a acentuação nas palavras

    // Variáveis da carta 1
    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[25];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Variáveis da carta 2
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[25];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Coleta de dados da carta I
    printf("SUPER TRUNFO - CARTA I\n\n");

    printf("Digite a letra do Estado:");
    scanf(" %c", &estado1);

    printf("Digite o código da Carta (Ex: A01):");
    scanf("%s", codigo_carta1);

    getchar(); // Limpa o \n do buffer antes do fgets
    printf("Digite o nome da Cidade:");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); // Usado para aceitar separação entre a informação digitada.
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; // Retira o \n implicito na captura da informação

    printf("Digite a população da cidade:");
    scanf("%d", &populacao1);

    printf("Digite a área em km²:");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("Pontos (Regiões) Turísticos:");
    scanf("%d", &pontos_turisticos1);

    system("cls"); // Limpa a tela para iniciar o próximo código.

    // Coleta de dados da carta II
    printf("SUPER TRUNFO - CARTA II\n\n");

    printf("Digite a letra do Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta (Ex: A01): ");
    scanf("%s", codigo_carta2);

    getchar(); // Limpa o \n do buffer antes do fgets
    printf("Digite o nome da Cidade:");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin); // Usado para aceitar separação entre a informação digitada.
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0'; // Retira o \n implicito na captura da informação

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Pontos (Regiões) Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    system("cls"); // Limpa a tela

    // Exibição dos dados das duas cartas.
    printf("SUPER TRUNFO - CARTA I\n");
    printf("Letra do Estado:%c\n", estado1);
    printf("Código da Carta:%s\n", codigo_carta1);
    printf("Nome da Cidade:%s\n", nome_cidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%.2f km²\n", area1);
    printf("PIB:%.1f bilhões de reais\n", pib1);
    printf("Pontos (Regiões) Turísticos: %d\n\n", pontos_turisticos1);

    printf("SUPER TRUNFO - CARTA II\n");
    printf("Letra do Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Pontos (Regiões) Turísticos: %d\n\n\n", pontos_turisticos2);

    printf("*** PROGRAMA FINALIZADO *** \n\n");

    return 0;
}
