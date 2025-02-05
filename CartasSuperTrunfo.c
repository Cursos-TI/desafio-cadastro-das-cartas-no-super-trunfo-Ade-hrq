#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil");

    int turismo, pessoas, codigo, pib;
    float area;
    char nome[50];

    printf("** Super trunfo países **\n");

// Insere as informações da carta 
    printf("\nNome da cidade: ");
    scanf("%s", &nome);

    printf("População: ");
    scanf("%d", &pessoas);

    printf("Quantidade de locais turisticos: ");
    scanf("%d", &turismo);

    printf("Área da cidade: ");
    scanf("%f", &area);

    printf("Código da cidade: ");
    scanf("%d", &codigo);

    printf("PIB: ");
    scanf("%d", &pib);

    printf("\n** Valores da sua carta **\n");
// Exibe os valores inseridos anteriormente
    printf("\nNome: %s\n População: %d\n Locais turisticos: %d\n Área: %.3fm²\n", nome, pessoas, turismo, area);
    printf(" Código: %d\n PIB: %d\n", codigo, pib);

    printf("\n** Resultados **\n");

// Calcula o PIB e a Densidade populacionacional e a exibe também
    int pibfinal = pessoas / pib ;
    int densidade = pessoas / area;

    printf("\n- Densidade populacional: %d\n", densidade);
    printf("\n- PIB per capita: %d\n", pibfinal);


    return 0;
    
    }
