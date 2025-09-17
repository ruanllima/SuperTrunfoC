#include <stdio.h>

int main (){

    // definição das variáveis necessárias
    char nomePais1[20] = "Brasil";
    char nomePais2[20] = "Argentina";
    unsigned long int populacao1 = 213000000;
    unsigned long int populacao2 = 40000000;
    float area1 = 8510000;
    float area2 = 2700000;
    float pib1 = 900;
    float pib2 = 500;
    int nPontosTuristicos1 = 60;
    int nPontosTuristicos2 = 70;
    float densidadeDemografica1;
    float densidadeDemografica2;
    float pibPerCapita1;
    float pibPerCapita2;
    float superPoder1;
    float superPoder2;
    int opcaoAtributo;

    //calcula a densidade demografica das cartas
    densidadeDemografica1 = populacao1 / area1;
    densidadeDemografica2 = populacao2 / area2;

    // calcula e guarda o valor do pib per capita
    // Multiplica o pib por 1B para obter o valor real em bilhões (apenas)
    pibPerCapita1 = pib1*1000000000 / populacao1;
    pibPerCapita2 = pib2*1000000000 / populacao2;
    
    // calcula o super poder somando todos os valores e subtraindo a densidade populacional (quanto menor a densidade, maior o super poder)
    superPoder1 = populacao1 + area1 + pib1 + nPontosTuristicos1 - densidadeDemografica1;
    superPoder2 = populacao2 + area2 + pib2 + nPontosTuristicos2 - densidadeDemografica2;


    // menu interativo
    printf("\n\n======== Seja bem vindo ao Super Trunfo! ========\n");
    printf("Escolha qual atributo deseja comparar:\n\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - PIB Per Capita\n");
    printf("5 - Numero de Pontos Turisticos\n");
    printf("6 - Densidade Demografica\n");
    // solicita ao usuario o atributo desejado
    scanf("%d", &opcaoAtributo);


    printf("\n\n======== COMPARACAO: ========\n");
    // utiliza o switch para comparar os valores de acordo com o atributo escolhido
    switch (opcaoAtributo){
    case 1:
        printf("Atributo escolhido: POPULACAO\n");
        printf("CARTA 1 (%s): %d | CARTA 2 (%s): %d\n", nomePais1, populacao1, nomePais2, populacao2);

        // realiza a comparação do maior atributo e imprime o vencedor, caso contrário, declara empate
        if (populacao1 > populacao2){
            printf("CARTA 1 (%s) VENCEU!", nomePais1);
        } else if (populacao1 < populacao2){
            printf("CARTA 2 (%s) VENCEU!", nomePais2);
        } else if (populacao1 == populacao2){
            printf("EMPATE!");
        }
    break;
    case 2:
        printf("Atributo escolhido: AREA\n");
        printf("CARTA 1 (%s): %.2f | CARTA 2 (%s): %.2f\n", nomePais1, area1, nomePais2, area2);

        // realiza a comparação do maior atributo e imprime o vencedor, caso contrário, declara empate
        if (area1 > area2){
            printf("CARTA 1 (%s) VENCEU!", nomePais1);
        } else if (area1 < area2){
            printf("CARTA 2 (%s) VENCEU!", nomePais2);
        } else if (area1 == area2){
            printf("EMPATE!");
        }
    break;
    case 3:
        printf("Atributo escolhido: PIB\n");
        printf("CARTA 1 (%s): %.2f | CARTA 2 (%s): %.2f\n", nomePais1, pib1, nomePais2, pib2);

        // realiza a comparação do maior atributo e imprime o vencedor, caso contrário, declara empate
        if (pib1 > pib2){
            printf("CARTA 1 (%s) VENCEU!", nomePais1);
        } else if (pib1 < pib2){
            printf("CARTA 2 (%s) VENCEU!", nomePais2);
        } else if (pib1 == pib2){
            printf("EMPATE!");
        }
    break;
    case 4:
        printf("Atributo escolhido: PIB PER CAPITA\n");
        printf("CARTA 1 (%s): %.2f | CARTA 2 (%s): %.2f\n", nomePais1, pibPerCapita1, nomePais2, pibPerCapita2);

        // realiza a comparação do maior atributo e imprime o vencedor, caso contrário, declara empate
        if (pibPerCapita1 > pibPerCapita2){
            printf("CARTA 1 (%s) VENCEU!", nomePais1);
        } else if (pibPerCapita1 < pibPerCapita2){
            printf("CARTA 2 (%s) VENCEU!", nomePais2);
        } else if (pibPerCapita1 == pibPerCapita2){
            printf("EMPATE!");
        }
    break;
    case 5:
        printf("Atributo escolhido: NUMERO DE PONTOS TURISTICOS\n");
        printf("CARTA 1 (%s): %d | CARTA 2 (%s): %d\n", nomePais1, nPontosTuristicos1, nomePais2, nPontosTuristicos2);

        // realiza a comparação do maior atributo e imprime o vencedor, caso contrário, declara empate
        if (nPontosTuristicos1 > nPontosTuristicos2){
            printf("CARTA 1 (%s) VENCEU!", nomePais1);
        } else if (nPontosTuristicos1 < nPontosTuristicos2){
            printf("CARTA 2 (%s) VENCEU!", nomePais2);
        } else if (nPontosTuristicos1 == nPontosTuristicos2){
            printf("EMPATE!");
        }
    break;
    case 6:
        printf("Atributo escolhido: DENSIDADE DEMOGRAFICA\n");
        printf("CARTA 1 (%s): %.2f | CARTA 2 (%s): %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);

        // realiza a comparação do maior atributo e imprime o vencedor, caso contrário, declara empate
        if (densidadeDemografica1 < densidadeDemografica2){
            printf("CARTA 1 (%s) VENCEU!", nomePais1);
        } else if (densidadeDemografica1 > densidadeDemografica2){
            printf("CARTA 2 (%s) VENCEU!", nomePais2);
        } else if (densidadeDemografica1 == densidadeDemografica2){
            printf("EMPATE!");
        }
    break;

    }

}