#include <stdio.h>


 

int main (){

    // definição das variáveis necessárias
    char estado;
    char codigo[4];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int nPontosTuristicos;

    // pede ao usuário os dados referentes à carta 1
    printf("Preencha a carta 1: \n");
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

    // imprime os dados da carta 1
    printf("===============================\n");
    printf("CARTA 1: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f km²\n", area);
    printf("PIB: %f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", nPontosTuristicos); 
    printf("===============================\n");

    // pede ao usuário os dados referentes à carta 2
    printf("Preencha a carta 2: \n");
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

    // imprime os dados da carta 2
    printf("===============================\n");
    printf("CARTA 2: \n");
    printf("DEBUG: estado = '%c'\n", estado);
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f km²\n", area);
    printf("PIB: %f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", nPontosTuristicos); 

}