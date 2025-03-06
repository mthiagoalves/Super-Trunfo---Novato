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
    float populationDensity1;
    float gdpPerCapita1;

    // Declaration of variables for the second card
    char state2;
    char code2[4];
    char cityName2[50];
    int population2;
    float area2;
    float gdp2;
    int touristPoints2;
    float populationDensity2;
    float gdpPerCapita2;

    // Data input for the first card
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %2c", &state1);
    printf("Digite o código da primeira carta (Ex: A01): ");
    scanf(" %4s", code1);
    getchar(); // Clear newline character from buffer
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cityName1);
    printf("Digite a população: ");
    scanf(" %d", &population1);
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &gdp1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &touristPoints1);

     // Calculation of population density and GDP per capita for the first city
     populationDensity1 = population1 / area1;
     gdpPerCapita1 = (gdp1 * 1000000000) / population1;

    // Data input for the second card
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %2c", &state2);
    printf("Digite o código da segunda carta (Ex: B02): ");
    scanf(" %4s", code2);
    getchar(); // Clear newline character from buffer
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cityName2);
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

    // Display of information for the second card
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", code2);
    printf("Nome da Cidade: %s\n", cityName2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", gdp2);
    printf("Número de Pontos Turísticos: %d\n", touristPoints2);

    return 0;
}