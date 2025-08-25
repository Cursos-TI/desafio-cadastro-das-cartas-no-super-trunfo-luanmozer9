#include <stdio.h>
#include <string.h> //Adicionado quando se usa (strcspn)
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
       float Densidade1;
       float Capita1;

       int Carta2;
       char Estado2[50];
       char Codigo2[50];
       char Cidade2[50];
       int Populacao2;
       float Area2;
       float PIB2;
       int Pontos2;
       float Densidade2;
       float Capita2;

        printf("Digite o numero da carta1: \n");
        scanf("%d", &Carta1);
        printf("Digite o numero da carta2: \n");
        scanf("%d", &Carta2);
        getchar();

        printf("Digite a sigla do estado1: \n");
        fgets(Estado1, sizeof(Estado1),stdin);
        Estado1[strcspn(Estado1,"\n")]= '\0';

        
        printf("Digite a sigla do estado2: \n");
        fgets(Estado2, sizeof(Estado2),stdin);
        Estado2[strcspn(Estado2,"\n")]= '\0';

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
        scanf("%d", &Populacao1);
        printf("Qual a populacao2: \n");
        scanf("%d", &Populacao2);
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

        Densidade1 = (float)(Populacao1 / Area1);
        Densidade2 = (float)(Populacao2 / Area2);

        Capita1 = (float)(PIB1 / Populacao1);
        Capita2 = (float)(PIB2 / Populacao2);

      
        printf("\n====Carta 1====\n");
        printf("Carta: %d \n", Carta1);
        printf("Estado: %s \n", Estado1);
        printf("Codigo: %s \n", Codigo1);
        printf("Cidade: %s \n", Cidade1);
        printf("Populacao: %d \n", Populacao1);
        printf("Area: %f \n", Area1);
        printf("PIB: %f \n", PIB1);
        printf("Pontos turisticos: %d \n", Pontos1);
        printf("Densidade populacional: %.2f \n", Densidade1);
        printf("PIB per capita: %.2f \n", Capita1);

        printf("\n====Carta 2====\n");
        printf("Carta: %d \n", Carta2);
        printf("Estado: %s \n", Estado2);
        printf("Codigo: %s \n", Codigo2);
        printf("Cidade: %s \n", Cidade2);
        printf("Populacao: %d \n", Populacao2);
        printf("Area: %f \n", Area2);
        printf("PIB: %f \n", PIB2);
        printf("Pontos turisticos: %d \n", Pontos2);
        printf("Densidade populacional: %.2f \n", Densidade2);
        printf("PIB per capita: %.2f \n", Capita2);
    


    return 0;
}
