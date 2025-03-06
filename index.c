#include <stdio.h>

int main()
{

    // Declaration of variables for the first card
    char state1;
    char code1[4];
    char cityName1[50];
    int population1;
    float area1;
    float gdp1;
    int touristPoints1;

    // Declaration of variables for the second card
    char state2;
    char code2[4];
    char cityName2[50];
    int population2;
    float area2;
    float gdp2;
    int touristPoints2;

    // Data input for the first card
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &state1);
    printf("Digite o código da primeira carta (Ex: A01): ");
    scanf(" %s", code1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cityName1);
    printf("Digite a população: ");
    scanf(" %d", &population1);
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &gdp1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &touristPoints1);

    // Data input for the second card
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &state2);
    printf("Digite o código da segunda carta (Ex: B02): ");
    scanf(" %s", code2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cityName2);
    printf("Digite a população: ");
    scanf(" %d", &population2);
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &gdp2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &touristPoints2);

    // Display of information for the first card
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", code1);
    printf("Nome da Cidade: %s\n", cityName1);
    printf("População: %d\n", population1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", gdp1);
    printf("Número de Pontos Turísticos: %d\n", touristPoints1);
}