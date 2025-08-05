#include <stdio.h>
    int main() {

    printf("Desafio Super Trunfo - Países\n");

       int Carta;
       char Estado[50];
       char Codigo[50];
       char Cidade[50];
       int Populacao;
       float Area;
       float PIB;
       int Pontos;

        printf("Digite o numero da carta: \n");
        scanf("%d", &Carta);

        printf("Digite a sigla do estado: \n");
        scanf("%s", Estado);
        
        printf("Digite o código do estado: \n");
        scanf("%s", Codigo);

        printf("Digite o nome da cidade: \n");
        scanf("%s", Cidade);

        printf("Qual a populacao: \n");
        scanf("%d", &Populacao);

        printf("Qual a area do estado: \n");
        scanf("%f", &Area);

        printf("Qual o PIB: \n");
        scanf("%f", &PIB);

        printf("Quantos pontos turisticos possui: \n");
        scanf("%d", &Pontos);

        printf("Carta: %d \n", Carta);
        printf("Estado: %s \n", Estado);
        printf("Codigo: %s \n", Codigo);
        printf("Cidade: %s \n", Cidade);
        printf("Populacao: %d \n", Populacao);
        printf("Area: %f \n", Area);
        printf("Pib: %f \n", PIB);
        printf("Pontos turisticos: %d \n", Pontos);


    return 0;
}
