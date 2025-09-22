#include <stdio.h>
#include <string.h> // Necessário para usar strcspn

int main() {

    printf("Desafio Super Trunfo - Países\n");

    int Carta1;
    char Estado1[50];
    char Codigo1[50];
    char Cidade1[50];
    unsigned long int Populacao1;
    float Area1;
    float PIB1;
    int Pontos1;
    float Densidade1;
    float Capita1;
    float Super_poder1;

    int Carta2;
    char Estado2[50];
    char Codigo2[50];
    char Cidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int Pontos2;
    float Densidade2;
    float Capita2;
    float Super_poder2;

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    printf("Digite o numero da carta1: \n");
    scanf("%d", &Carta1);
    printf("Digite o numero da carta2: \n");
    scanf("%d", &Carta2);
    getchar();

    printf("Digite a sigla do estado1: \n");
    fgets(Estado1, sizeof(Estado1), stdin);
    Estado1[strcspn(Estado1, "\n")] = '\0';

    printf("Digite a sigla do estado2: \n");
    fgets(Estado2, sizeof(Estado2), stdin);
    Estado2[strcspn(Estado2, "\n")] = '\0';

    printf("Digite o código do estado1: \n");
    fgets(Codigo1, sizeof(Codigo1), stdin);
    Codigo1[strcspn(Codigo1, "\n")] = '\0';

    printf("Digite o código do estado2: \n");
    fgets(Codigo2, sizeof(Codigo2), stdin);
    Codigo2[strcspn(Codigo2, "\n")] = '\0';

    printf("Digite o nome da cidade1: \n");
    fgets(Cidade1, sizeof(Cidade1), stdin);
    Cidade1[strcspn(Cidade1, "\n")] = '\0';

    printf("Digite o nome da cidade2: \n");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    Cidade2[strcspn(Cidade2, "\n")] = '\0';

    printf("Qual a populacao1: \n");
    scanf("%lu", &Populacao1);
    printf("Qual a populacao2: \n");
    scanf("%lu", &Populacao2);
    getchar();

    printf("Qual a area do estado1: \n");
    scanf("%f", &Area1);
    printf("Qual a area do estado2: \n");
    scanf("%f", &Area2);

    printf("Qual o PIB da cidade1: \n");
    scanf("%f", &PIB1);
    printf("Qual o PIB da cidade2: \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos possui a cidade1: \n");
    scanf("%d", &Pontos1);
    printf("Quantos pontos turisticos possui a cidade2: \n");
    scanf("%d", &Pontos2);

    Densidade1 = (float)Populacao1 / Area1;
    Capita1 = PIB1 / (float)Populacao1;

    Densidade2 = (float)Populacao2 / Area2;
    Capita2 = PIB2 / (float)Populacao2;

    Super_poder1 = Populacao1 + Area1 + PIB1 + Pontos1 + Capita1 + (1 / Densidade1);
    Super_poder2 = Populacao2 + Area2 + PIB2 + Pontos2 + Capita2 + (1 / Densidade2);

    // ---- Exibição das cartas ----
    printf("\n====Carta 1====\n");
    printf("Carta: %d \n", Carta1);
    printf("Estado: %s \n", Estado1);
    printf("Codigo: %s \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("Populacao: %lu \n", Populacao1);
    printf("Area: %.2f \n", Area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Pontos turisticos: %d \n", Pontos1);
    printf("Densidade populacional: %.2f \n", Densidade1);
    printf("PIB per capita: %.2f \n", Capita1);
    printf("Super poder: %.2f\n", Super_poder1);

    printf("\n====Carta 2====\n");
    printf("Carta: %d \n", Carta2);
    printf("Estado: %s \n", Estado2);
    printf("Codigo: %s \n", Codigo2);
    printf("Cidade: %s \n", Cidade2);
    printf("Populacao: %lu \n", Populacao2);
    printf("Area: %.2f \n", Area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Pontos turisticos: %d \n", Pontos2);
    printf("Densidade populacional: %.2f \n", Densidade2);
    printf("PIB per capita: %.2f \n", Capita2);
    printf("Super poder: %.2f\n", Super_poder2);

    // ---- Comparação ----
    printf("\n====Comparação das cartas====\n");
    printf("%s vs %s\n", Cidade1, Cidade2);
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1: valor1_carta1 = Populacao1; valor1_carta2 = Populacao2; break;
        case 2: valor1_carta1 = Area1; valor1_carta2 = Area2; break;
        case 3: valor1_carta1 = PIB1; valor1_carta2 = PIB2; break;
        case 4: valor1_carta1 = Pontos1; valor1_carta2 = Pontos2; break;
        case 5: valor1_carta1 = Densidade1; valor1_carta2 = Densidade2; break;
        default: printf("Opção inválida\n"); return 0;
    }

    printf("\nEscolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1) {
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = Populacao1; valor2_carta2 = Populacao2; break;
        case 2: valor2_carta1 = Area1; valor2_carta2 = Area2; break;
        case 3: valor2_carta1 = PIB1; valor2_carta2 = PIB2; break;
        case 4: valor2_carta1 = Pontos1; valor2_carta2 = Pontos2; break;
        case 5: valor2_carta1 = Densidade1; valor2_carta2 = Densidade2; break;
        default: printf("Opção inválida\n"); return 0;
    }

    // ---- Soma final ----
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s = %.2f\n", Cidade1, soma1);
    printf("%s = %.2f\n", Cidade2, soma2);

    if (atributo1 == 5 || atributo2 == 5) {
        // Ajuste se densidade for escolhida: menor vence
        if (soma1 < soma2)
            printf("\nCarta %s venceu!\n", Cidade1);
        else if (soma2 < soma1)
            printf("\nCarta %s venceu!\n", Cidade2);
        else
            printf("\nEmpate!\n");
    } else {
        if (soma1 > soma2)
            printf("\nCarta %s venceu!\n", Cidade1);
        else if (soma2 > soma1)
            printf("\nCarta %s venceu!\n", Cidade2);
        else
            printf("\nEmpate!\n");
    }

    return 0;
}
