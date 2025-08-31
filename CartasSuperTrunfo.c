 #include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

 int main(void) {
    char estado1;
    char codigo1[3];
    char cidade1[50];
    int populacao1;
    int pontosTuristicos1;
    float area1;
    float pib1;

    char estado2;
    char codigo2[3];
    char cidade2[50];
    int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;

   // Cidade 1

    printf("\nCarta 1:\n");
    printf("Estado A-H: ");
    scanf("%c", &estado1);
    printf("Código da carta ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%i", &pontosTuristicos1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);

    // Cidade 2

    printf("\nCarta 2:\n");
    printf("Estado A-H: ");
    scanf("%c", &estado2);
    printf("Código da carta ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%i", &pontosTuristicos2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    return 0;
 }