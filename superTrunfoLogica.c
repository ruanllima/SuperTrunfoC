#include <stdio.h>
#include <string.h>

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
    char nomeAtributo1[40];
    char nomeAtributo2[40];
    int atributo1;
    int atributo2;
    int valoresAtributo1[2] = {0, 0};
    int valoresAtributo2[2] = {0, 0};
    int somaAtributos[2] = {0, 0};
    int isDensidade1, isDensidade2 = 0;

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
    printf("Escolha o primeiro atributo que deseja comparar:\n\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - PIB Per Capita\n5 - Numero de Pontos Turisticos\n6 - Densidade Demografica\n");
    scanf("%d", &atributo1);

    switch(atributo1){
    case 1:
        printf("Escolha o segundo atributo que deseja comparar:\n\n");
        printf("2 - Area\n3 - PIB\n4 - PIB Per Capita\n5 - Numero de Pontos Turisticos\n6 - Densidade Demografica\n");
        scanf("%d", &atributo2);

        strcpy(nomeAtributo1, "Populacao");
        valoresAtributo1[0] = populacao1;
        valoresAtributo1[1] = populacao2;
    break;
    case 2:
        printf("Escolha o segundo atributo que deseja comparar:\n\n");
        printf("1 - Populacao\n3 - PIB\n4 - PIB Per Capita\n5 - Numero de Pontos Turisticos\n6 - Densidade Demografica\n");
        scanf("%d", &atributo2);

        strcpy(nomeAtributo1, "Area");
        valoresAtributo1[0] = area1;
        valoresAtributo1[1] = area2;
    break;
    case 3:
        printf("Escolha o segundo atributo que deseja comparar:\n\n");
        printf("1 - Populacao\n2 - Area\n4 - PIB Per Capita\n5 - Numero de Pontos Turisticos\n6 - Densidade Demografica\n");
        scanf("%d", &atributo2);

        strcpy(nomeAtributo1, "Pib");
        valoresAtributo1[0] = pib1;
        valoresAtributo1[1] = pib2;
    break;
    case 4:
        printf("Escolha o segundo atributo que deseja comparar:\n\n");
        printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Numero de Pontos Turisticos\n6 - Densidade Demografica\n");
        scanf("%d", &atributo2);

        strcpy(nomeAtributo1, "Pib Per Capita");
        valoresAtributo1[0] = pibPerCapita1;
        valoresAtributo1[1] = pibPerCapita2;
    break;
    case 5:
        printf("Escolha o segundo atributo que deseja comparar:\n\n");
        printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - PIB Per Capita\n6 - Densidade Demografica\n");
        scanf("%d", &atributo2);

        strcpy(nomeAtributo1, "Numero de Pontos Turisticos");
        valoresAtributo1[0] = nPontosTuristicos1;
        valoresAtributo1[1] = nPontosTuristicos2;
    break;
    case 6:
        printf("\nEscolha o segundo atributo que deseja comparar:\n\n");
        printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - PIB Per Capita\n5 - Numero de Pontos Turisticos\n");
        scanf("%d", &atributo2);

        strcpy(nomeAtributo1, "Densidade Demografica");
        valoresAtributo1[0] = densidadeDemografica1;
        valoresAtributo1[1] = densidadeDemografica2;
        isDensidade1 = 1;
    break;
    default:
        printf("\nDigite um numero valido!\nExecute o programa novamente!");
        return 1;
    }

    switch(atributo2){
    case 1:
        strcpy(nomeAtributo2, "Populacao");
        valoresAtributo2[0] = populacao1;
        valoresAtributo2[1] = populacao2;
    break;
    case 2:
        strcpy(nomeAtributo2, "Area");
        valoresAtributo2[0] = area1;
        valoresAtributo2[1] = area2;
    break;
    case 3:
        strcpy(nomeAtributo2, "Pib");
        valoresAtributo2[0] = pib1;
        valoresAtributo2[1] = pib2;
    break;
    case 4:
        strcpy(nomeAtributo2, "Pib Per Capita");
        valoresAtributo2[0] = pibPerCapita1;
        valoresAtributo2[1] = pibPerCapita2;
    break;
        strcpy(nomeAtributo2, "Numero de Pontos Turisticos");
        valoresAtributo2[0] = nPontosTuristicos1;
        valoresAtributo2[1] = nPontosTuristicos2;
    break;
    case 6:
        strcpy(nomeAtributo2, "Densidade Demografica");
        valoresAtributo2[0] = densidadeDemografica1;
        valoresAtributo2[1] = densidadeDemografica2;
        isDensidade2 = 1;
    break;
    default:
        printf("\nDigite um numero valido!\nExecute o programa novamente!");
        return 1;
    }

    printf("\nCARTA 1 (%s) | CARTA 2 (%s)\n\n", nomePais1, nomePais2);
    if ((valoresAtributo1[0] > valoresAtributo1[1]) && isDensidade1 == 0){
        printf("ATRIBUTO 1 (%s):\n%s: %d (VENCEU)   |    %s: %d\n\n", nomeAtributo1, nomePais1, valoresAtributo1[0], nomePais2, valoresAtributo1[1]);
    }
    else{
        printf("ATRIBUTO 1 (%s):\n%s: %d   |    %s: %d (VENCEU)\n\n", nomeAtributo1, nomePais1, valoresAtributo1[0], nomePais2, valoresAtributo1[1]);
    }

    if (valoresAtributo2[0] > valoresAtributo2[1] && isDensidade2 == 0){
        printf("ATRIBUTO 2 (%s):\n%s: %d (VENCEU)   |    %s: %d\n\n", nomeAtributo2, nomePais1, valoresAtributo2[0], nomePais2, valoresAtributo2[1]);
    }
    else{
        printf("ATRIBUTO 2 (%s):\n%s: %d   |    %s: %d (VENCEU)\n\n", nomeAtributo2, nomePais1, valoresAtributo2[0], nomePais2, valoresAtributo2[1]);
    }

    if (isDensidade1 == 1){
        somaAtributos[0] = valoresAtributo2[0] - valoresAtributo1[0];
        somaAtributos[1] = valoresAtributo2[1] - valoresAtributo1[1];
    } else if (isDensidade2 == 1){
        somaAtributos[0] = valoresAtributo1[0] - valoresAtributo2[0];
        somaAtributos[1] = valoresAtributo1[1] - valoresAtributo2[1];
    } else{
        somaAtributos[0] = valoresAtributo1[0] + valoresAtributo2[0];
        somaAtributos[1] = valoresAtributo1[1] + valoresAtributo2[1];
    }

    printf("SOMA (%s + %s)\n", nomeAtributo1, nomeAtributo2);
    printf("(%s): %d   |   (%s): %d\n\n", nomePais1, somaAtributos[0], nomePais2, somaAtributos[1]);
    if (somaAtributos[0] > somaAtributos[1]){
        printf("%s VENCEU!", nomePais1);
    } else if (somaAtributos[0] < somaAtributos[1]){
        printf("%s VENCEU!", nomePais2);
    }
    else{
        printf("EMPATE!");
    }



/*
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
*/
}