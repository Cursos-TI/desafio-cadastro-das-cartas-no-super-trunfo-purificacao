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

   // Carta 1

    printf("\nCarta 1\n");
    printf("Estado A-H: ");
    scanf("%c", &estado1);
    printf("Código da carta ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%i", &pontosTuristicos1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);

    // Carta 2

    printf("\nCarta 2\n");
    printf("Estado A-H: ");
    scanf("%c", &estado2);
    printf("Código da carta ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%i", &pontosTuristicos2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);

   // Saída formatada

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
 }