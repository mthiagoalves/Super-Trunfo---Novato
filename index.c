#include <stdio.h>

int main()
{

    // Declaration of variables for the first card
    char state1, code1[4], cityName1[50];
    unsigned int population1;
    float area1, gdp1, populationDensity1, gdpPerCapita1, superPower1;
    int touristPoints1;

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

    // Calculation of population density, GDP per capita and super power for the first city
    populationDensity1 = population1 / area1;
    gdpPerCapita1 = (gdp1 * 1e9) / population1;
    superPower1 = (float)population1 + area1 + (gdp1 * 1e9) + touristPoints1 + gdpPerCapita1 + (1.0f / populationDensity1);

    // Declaration of variables for the second card
    char state2, code2[4], cityName2[50];
    unsigned int population2;
    float area2, gdp2, populationDensity2, gdpPerCapita2, superPower2;
    int touristPoints2;

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

    // Calculation of population density, GDP per capita and super power for the second city
    populationDensity2 = population2 / area2;
    gdpPerCapita2 = (gdp2 * 1e9) / population2;
    superPower1 = (float)population1 + area1 + (gdp1 * 1e9) + touristPoints1 + gdpPerCapita1 + (1.0f / populationDensity1);

    // Display of information for the card winner
    printf("\nComparação de Cartas:\n\n");
    printf("População: Carta %d venceu (%d)\n", population1 > population2 ? 1 : 2, population1 > population2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", gdp1 > gdp2 ? 1 : 2, gdp1 > gdp2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", touristPoints1 > touristPoints2 ? 1 : 2, touristPoints1 > touristPoints2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", populationDensity1 < populationDensity2 ? 1 : 2, populationDensity1 < populationDensity2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", gdpPerCapita1 > gdpPerCapita2 ? 1 : 2, gdpPerCapita1 > gdpPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superPower1 > superPower2 ? 1 : 2, superPower1 > superPower2 ? 1 : 0);

    return 0;
}