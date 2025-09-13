#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2;
  char codigoCarta1[3], codigoCarta2[3];
  char nomeCidade1[50], nomeCidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

  // Área para entrada de dados
  printf("Digite os dados da primeira cidade:\n");
  printf("Estado (Uma letra de A até H): ");
  scanf(" %c", &estado1);
  printf("Código da Carta (Ex: A01 ou B02): ");
  scanf("%s", codigoCarta1);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área (em km²): ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("\nDigite os dados da segunda cidade:\n");
  printf("Estado (Uma letra de A até H [Não repetir a anterior]): ");
  scanf(" %c", &estado2);
  printf("Código da Carta [Diferente do anterior] (Ex: A01 ou B02): ");
  scanf("%s", codigoCarta2);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área (em km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  printf("\nDados da primeira cidade:\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área (em km²): %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

  printf("\nDados da segunda cidade:\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área (em km²): %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
}
