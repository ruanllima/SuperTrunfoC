#include <stdio.h>

int main (){

    // definição das variáveis necessárias
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[20], nomeCidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int nPontosTuristicos1, nPontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // pede ao usuário os dados referentes à carta 1
    printf("Preencha a carta 1: \n");
    printf("Digite uma letra: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (km): ");
    scanf("%f", &area1);

    printf("Digite o pib da cidade (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos ela tem: ");
    scanf("%d", &nPontosTuristicos1);

    // calcula e guarda o valor da densidade populacional
    densidadePopulacional1 = populacao1 / area1;

    // calcula e guarda o valor do pib per capita
    // Multiplica o pib por 1B para obter o valor real em bilhões (apenas)
    pibPerCapita1 = pib1*1000000000 / populacao1;
    
    // calcula o super poder somando todos os valores e subtraindo a densidade populacional (quanto menor a densidade, maior o super poder)
    superPoder1 = populacao1 + area1 + pib1 + nPontosTuristicos1 - densidadePopulacional1;

    // imprime os dados da carta 1
    printf("===============================\n");
    printf("CARTA 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", nPontosTuristicos1);
    printf("Densidade Populacional: hab/km2 %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1); 
    printf("===============================\n");

    // pede ao usuário os dados referentes à carta 2
    printf("Preencha a carta 2: \n");
    printf("Digite uma letra: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (km): ");
    scanf("%f", &area2);

    printf("Digite o pib da cidade (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos ela tem: ");
    scanf("%d", &nPontosTuristicos2);

    // calcula e guarda o valor da densidade populacional
    densidadePopulacional2 = populacao2 / area2;

    // calcula e guarda o valor do pib per capita
    // Multiplica o pib por 1B para obter o valor real em bilhões (apenas)
    pibPerCapita2 = pib2*1000000000 / populacao2;

    // calcula o super poder somando todos os valores e subtraindo a densidade populacional (quanto menor a densidade, maior o super poder)
    superPoder2 = populacao2 + area2 + pib2 + nPontosTuristicos2 - densidadePopulacional2;

    // imprime os dados da carta 2
    printf("===============================\n");
    printf("CARTA 2: \n");
    printf("DEBUG: estado = '%c'\n", estado2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", nPontosTuristicos2); 
    printf("Densidade Populacional: hab/km² %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); 

    // Compara o valor entre as duas cartas e exibe o vencedor para cada categoria
    printf("========================\n");
    printf("COMPARACAO DAS CARTAS\n\n");
    printf("(0) -- CARTA 1 (%s) VENCEU\n(1) -- CARTA 2 (%s) VENCEU\n\n", nomeCidade1, nomeCidade2);
    printf("Populacao: (%d)\n", populacao1 < populacao2);
    printf("Area: (%d)\n", area1 < area2);
    printf("PIB: (%d)\n", pib1 < pib2);
    printf("Pontos turisticos: (%d)\n", nPontosTuristicos1 < nPontosTuristicos2);
    printf("Densidade populacional: (%d)\n", densidadePopulacional1 > densidadePopulacional2);
    printf("Pib Per Capita: (%d)\n", pibPerCapita1 < pibPerCapita2);
    printf("Super Poder: (%d)\n", superPoder1 < superPoder2);

}