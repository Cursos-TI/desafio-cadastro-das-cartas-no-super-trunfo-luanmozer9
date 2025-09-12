#include <stdio.h>
#include <string.h> //Adicionado quando se usa (strcspn)
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
        Capita1 = (float)( PIB1 / Populacao1);

        Densidade2 = (float)(Populacao2 / Area2);
        Capita2 = (float)(PIB2 / Populacao2);
        
        Super_poder1 = (float)(Populacao1 + Area1 + PIB1 + Pontos1 + Capita1 + (1 / Densidade1));
        Super_poder2 = (float)(Populacao2 + Area2 + PIB2 + Pontos2 + Capita2 + (1 / Densidade2));   


        printf("\n====Carta 1====\n");
        printf("Carta: %d \n", Carta1);
        printf("Estado: %s \n", Estado1);
        printf("Codigo: %s \n", Codigo1);
        printf("Cidade: %s \n", Cidade1);
        printf("Populacao: %lu \n", Populacao1); //especificador para o unsigned long int
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
        printf("Populacao: %lu \n", Populacao2); //especificador para o unsigned long int
        printf("Area: %.2f \n", Area2);
        printf("PIB: %.2f \n", PIB2);
        printf("Pontos turisticos: %d \n", Pontos2); 
        printf("Densidade populacional: %.2f \n", Densidade2);
        printf("PIB per capita: %.2f \n", Capita2);
        printf("Super poder: %.2f\n", Super_poder2);
    
        printf("\n====Comparação das cartas====\n");
        if (Populacao1 > Populacao2)
        {
            printf("A carta1 ganhou, com a população de: %lu \n", Populacao1); 
        } else {
            printf("A carta2 ganhou, com a população de: %lu \n", Populacao2);
        }
        
        if (Area1 > Area2)
        {
            printf("A carta1 ganhou, com a área de: %.2f\n", Area1);
        } else {
            printf("A carta2 ganhou, com a área de: %.2f\n", Area2);
        }
        
        if (PIB1 > PIB2)
        {
            printf("A carta1 ganhou, com o PIB de: %.2f\n", PIB1);
        } else {
            printf("A carta2 ganhou, com o PIB de: %.2F\n", PIB2);
        }
        
        if (Pontos1 > Pontos2)
        {
            printf("A carta1 ganhou, com mais Pontos Turísticos: %d\n", Pontos1);
        } else {
            printf("A carta2 ganhou, com mais Pontos Turísticos: %d\n", Pontos2);
        }

        if (Densidade1 > Densidade2)
        {
            printf("A carta1 ganhou, com maior Densidade Populacional: %.2f\n", Densidade1);
        } else {
            printf("A carta2 ganhou, com maior Densidade Populacional: %.2f\n", Densidade2);
        }
        
        if (Capita1 > Capita2)
        {
            printf("A carta1 ganhou, com maior PIB per Capita: %.2f\n", Capita1);
        } else{
            printf("A carta2 ganhou, com maior PIB per Capita: %.2f\n", Capita2);
        }
        
        if (Super_poder1 > Super_poder2)
        {
            printf("A carta1 ganhou, com maior Super Poder: %.2f\n", Super_poder1);
        } else{
            printf("A carta2 ganhou, com maior Super Poder: %.2f\n", Super_poder2);
        }
        
    return 0;
}

