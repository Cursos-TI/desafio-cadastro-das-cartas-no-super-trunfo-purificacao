/* #include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

struct CartasSuperTrunfo
{
    char codigoCidade[4];
    char estado;
    int populacao;
    float area;
    int pontosTuristicos;
    float pib;
    char nome[20];
};


int main() {
    struct CartasSuperTrunfo carta1, carta2;

    printf("Cadastro da primeira carta:\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", carta1.codigoCidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &carta1.populacao);
    printf("Digite o nome da cidade:\n");
    scanf("%s", carta1.nome);
    print("Digite a quantidade de ponto turístico:\n");
    scanf("%d", &carta1.pontosTuristicos);
    print("Digite o PIB da cidade:\n");
    scanf("%f", &carta1.pib);

    return 0;
}
 */

 #include <stdio.h>

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