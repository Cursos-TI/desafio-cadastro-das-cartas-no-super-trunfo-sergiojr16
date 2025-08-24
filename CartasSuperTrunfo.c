#include <stdio.h>

int main() {

    char estado1;
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Super Trunfo - Cadastro de 2 cartas\n");
    printf("Insira as informações para cadastro das cartas conforme solicitado:\n\n");

    // Dados carta 1
    printf("Cadastrando Carta 1...\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);          

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);          

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", cidade1);     

    printf("População (número inteiro, ex: 85700): ");
    scanf("%d", &populacao1);

    printf("Área (em km², ex: 1521.44): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais, ex: 699.28): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos (inteiro, ex: 35): ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // Dados carta 2
    printf("Cadastrando Carta 2...:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", cidade2);

    printf("População (número inteiro, ex: 85700): ");
    scanf("%d", &populacao2);

    printf("Área (em km², ex: 1521.44): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais, ex: 699.28): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos (inteiro, ex: 35): ");
    scanf("%d", &pontos_turisticos2);

    //Mostrando Cartas
    printf("\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
