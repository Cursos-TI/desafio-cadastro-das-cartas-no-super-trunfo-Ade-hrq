#include <stdio.h>


int main() {

    int turismo, pessoas, codigo, pib;
    float area;
    char nome[50];

    printf("** Super trunfo paises **\n");
    printf("\n**Carta 01**\n");

// Insere as informacoes da carta 
    printf("\nNome da cidade: ");
    scanf("%s", &nome);

    printf("Populacao: ");
    scanf("%d", &pessoas);

    printf("Quantidade de locais turisticos: ");
    scanf("%d", &turismo);

    printf("Area da cidade: ");
    scanf("%f", &area);

    printf("Codigo da cidade: ");
    scanf("%d", &codigo);

    printf("PIB: ");
    scanf("%d", &pib);

    printf("\n** Valores da sua carta **\n");
// Exibe os valores inseridos anteriormente
    printf("\nNome: %s\n Populacao: %d\n Locais turisticos: %d\n Area: %.3fm2\n", nome, pessoas, turismo, area);
    printf(" Codigo: %d\n PIB: %d\n", codigo, pib);

    printf("\n** Resultado carta 01**\n");

// Calcula o PIB e a Densidade populacionacional e a exibe tamb�m
    int pibfinal = pessoas / pib ;
    int densidade = pessoas / area;

    printf("\n- Densidade populacional: %d\n", densidade);
    printf("\n- PIB per capita: %d\n", pibfinal);

    printf("\n**Carta 02**\n");

    int turismo2, pessoas2, codigo2, pib2;
    float area2;
    char nome2[50];

// Insere as informacoes da carta 
    printf("\nNome da cidade: ");
    scanf("%s", &nome2);

    printf("Populacao: ");
    scanf("%d", &pessoas2);

    printf("Quantidade de locais turisticos: ");
    scanf("%d", &turismo2);

    printf("Area da cidade: ");
    scanf("%f", &area2);

    printf("Codigo da cidade: ");
    scanf("%d", &codigo2);

    printf("PIB: ");
    scanf("%d", &pib2);

    printf("\n** Valores da sua carta **\n");
// Exibe os valores inseridos anteriormente
    printf("\nNome: %s\n Populacao: %d\n Locais turisticos: %d\n Area: %.3fm2\n", nome2, pessoas2, turismo2, area2);
    printf(" Codigo: %d\n PIB: %d\n", codigo2, pib2);

    printf("\n** Resultado carta 02 **\n");

// Calcula o PIB e a Densidade populacionacional e a exibe tamb�m
    int pibfinal2 = pessoas2 / pib2 ;
    int densidade2 = pessoas2 / area2;

    printf("\n- Densidade populacional: %d\n", densidade2);
    printf("\n- PIB per capita: %d\n", pibfinal2);

    return 0;
    
    }