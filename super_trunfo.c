#include <stdio.h>

int main (){

    char estado;
    char codigo[4];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int nPontosTuristicos;

    printf("Carta 1: \n");
    printf("Digite uma letra: ");
    scanf(" %c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos ela tem: ");
    scanf("%d", &nPontosTuristicos);

    printf("===============================\n");
    printf("Carta 1: \n");
    printf("DEBUG: estado = '%c'\n", estado);
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f km²\n", area);
    printf("PIB: %f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", nPontosTuristicos); 
    printf("===============================\n");

    printf("Carta 2: \n");
    printf("Digite uma letra: ");
    scanf(" %c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos ela tem: ");
    scanf("%d", &nPontosTuristicos);

    printf("===============================\n");
    printf("Carta 2: \n");
    printf("DEBUG: estado = '%c'\n", estado);
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f km²\n", area);
    printf("PIB: %f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", nPontosTuristicos); 


  
}