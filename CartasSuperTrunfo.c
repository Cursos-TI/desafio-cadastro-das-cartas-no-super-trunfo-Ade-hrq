

int main() {

    int turismo, pessoas, codigo, pib;
    float area;
    char nome[50];

    printf("Nome da cidade: ");
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

    printf("\nNome: %s\n População: %d\n Locais turisticos: %d\n Área: %f\n", nome, pessoas, turismo, area);
    printf("Código: %d\n PIB: %d", codigo, pib);

}