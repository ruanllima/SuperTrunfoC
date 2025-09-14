#include <stdio.h>

int main (){

    // definição das variáveis necessárias
    char estado1 = 'R';
    char estado2 = 'M';
    char codigo1[4] = "R01";
    char codigo2[4] = "M01";
    char nomeCidade1[20] = "Recife";
    char nomeCidade2[20] = "Maceio";
    unsigned long int populacao1 = 1500000;
    unsigned long int populacao2 = 1000000;
    float area1 = 500;
    float area2 = 200;
    float pib1 = 20;
    float pib2 = 50;
    int nPontosTuristicos1 = 60;
    int nPontosTuristicos2 = 70;
    float densidadePopulacional1;
    float densidadePopulacional2;
    float pibPerCapita1;
    float pibPerCapita2;
    float superPoder1;
    float superPoder2;

    //calcula a densidade populacional das cartas
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    // calcula e guarda o valor do pib per capita
    // Multiplica o pib por 1B para obter o valor real em bilhões (apenas)
    pibPerCapita1 = pib1*1000000000 / populacao1;
    pibPerCapita2 = pib2*1000000000 / populacao2;
    
    // calcula o super poder somando todos os valores e subtraindo a densidade populacional (quanto menor a densidade, maior o super poder)
    superPoder1 = populacao1 + area1 + pib1 + nPontosTuristicos1 - densidadePopulacional1;
    superPoder2 = populacao2 + area2 + pib2 + nPontosTuristicos2 - densidadePopulacional2;



    printf("Carta 1 - %s: %.2f\n", nomeCidade1, superPoder1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, superPoder2);
    // compara o Super Poder das cartas e exibe o resultado vencedor
    if (superPoder1 > superPoder2){
        printf("Resultado: Carta 1 (%s) VENCEU\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) VENCEU\n", nomeCidade2);
    }


}