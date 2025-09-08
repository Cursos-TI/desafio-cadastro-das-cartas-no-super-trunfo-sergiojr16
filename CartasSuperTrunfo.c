#include <stdio.h>

int main() {

    char estado1;
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;       
    float pib_percapita1;
    float super_poder1;

    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_percapita2;
    float super_poder2;

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

    densidade1 = (float)populacao1 / area1;
    pib_percapita1 = (pib1 * 1000000000) / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_percapita1 + (1.0f / densidade1);

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

    densidade2 = (float)populacao2 / area2;
    pib_percapita2 = (pib2 * 1000000000) / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_percapita2 + (1.0f / densidade2);

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);
    printf("Super Poder: %.2f\n", super_poder2);

    //Comparando cartas
    printf("\n\nComparação de Cartas:\n");

    printf("População: %s (%d)\n",
           (populacao1 > populacao2) ? "Carta 1 venceu" : "Carta 2 venceu",
           (populacao1 > populacao2));

    printf("Área: %s (%d)\n",
           (area1 > area2) ? "Carta 1 venceu" : "Carta 2 venceu",
           (area1 > area2));

    printf("PIB: %s (%d)\n",
           (pib1 > pib2) ? "Carta 1 venceu" : "Carta 2 venceu",
           (pib1 > pib2));

    printf("Pontos Turísticos: %s (%d)\n",
           (pontos_turisticos1 > pontos_turisticos2) ? "Carta 1 venceu" : "Carta 2 venceu",
           (pontos_turisticos1 > pontos_turisticos2));

    printf("Densidade Populacional: %s (%d)\n",
           (densidade1 < densidade2) ? "Carta 1 venceu" : "Carta 2 venceu",
           (densidade1 < densidade2));

    printf("PIB per Capita: %s (%d)\n",
           (pib_percapita1 > pib_percapita2) ? "Carta 1 venceu" : "Carta 2 venceu",
           (pib_percapita1 > pib_percapita2));

    printf("Super Poder: %s (%d)\n",
           (super_poder1 > super_poder2) ? "Carta 1 venceu" : "Carta 2 venceu",
           (super_poder1 > super_poder2));

    return 0;
}