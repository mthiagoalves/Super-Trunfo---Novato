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
}