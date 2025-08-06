#include <stdio.h>
    int main() {

    printf("Desafio Super Trunfo - Países\n");

       int Carta1;
       char Estado1[50];
       char Codigo1[50];
       char Cidade1[50];
       int Populacao1;
       float Area1;
       float PIB1;
       int Pontos1;

       int Carta2;
       char Estado2[50];
       char Codigo2[50];
       char Cidade2[50];
       int Populacao2;
       float Area2;
       float PIB2;
       int Pontos2;

        printf("Digite o numero da carta1: \n");
        scanf("%d", &Carta1);

        printf("Digite o numero da carta2: \n");
        scanf("%d", &Carta2);

        printf("Digite a sigla do estado1: \n");
        scanf("%s", Estado1);

        printf("Digite a sigla do estado2: \n");
        scanf("%s", Estado2);

        printf("Digite o código do estado1: \n");
        scanf("%s", Codigo1);

        printf("Digite o codigo do estado2: \n");
        scanf("%s", Codigo2);

        printf("Digite o nome da cidade1: \n");
        scanf("%s", Cidade1);

        printf("Digite o nome da cidade2: \n");
        scanf("%s", Cidade2);
        while (getchar() != '\n');
        
        printf("Qual a populacao1: \n");
        scanf("%d", &Populacao1);

        printf("Qual a populacao2: \n");
        scanf("%d", &Populacao2);

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
        
        printf("\n====Carta 1====\n");
        printf("Carta: %d \n", Carta1);
        printf("Estado: %s \n", Estado1);
        printf("Codigo: %s \n", Codigo1);
        printf("Cidade: %s \n", Cidade1);
        printf("Populacao: %d \n", Populacao1);
        printf("Area: %f \n", Area1);
        printf("PIB: %f \n", PIB1);
        printf("Pontos turisticos: %d \n", Pontos1);

        printf("\n====Carta 2====\n");
        printf("Carta: %d \n", Carta2);
        printf("Estado: %s \n", Estado2);
        printf("Codigo: %s \n", Codigo2);
        printf("Cidade: %s \n", Cidade2);
        printf("Populacao: %d \n", Populacao2);
        printf("Area: %f \n", Area2);
        printf("PIB: %f \n", PIB2);
        printf("Pontos turisticos: %d \n", Pontos2);
    


    return 0;
}
