#include <stdio.h>
#include <locale.h> // Biblioteca para configurar a localização (idioma, acentuação)
#include <ctype.h>  // Biblioteca para manipulação de caracteres (ex: toupper)

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil"); // Define a localização para suportar acentos em português

    // Declaração das variáveis do Jogador 1
    char estado1, cod1[3], nomecid1[25];
    int populacao1, npontoturistico1;
    float area1, pib1, denspop1, pibpercap1, SuperPoder1;

    // Declaração das variáveis do Jogador 2
    char estado2, cod2[3], nomecid2[25];
    int populacao2, npontoturistico2, atributo;
    float area2, pib2, denspop2, pibpercap2, SuperPoder2;

    // Exibe mensagem de boas-vindas
    printf("\n         --- BEM VINDO AO SUPER TRUNFO ---\n\n\n");

    // Coleta de informações do Jogador 1
    printf("JOGADOR NÚMERO 1, ADICIONE AS INFORMAÇÕES DA SUA CARTA: \n\n");

    printf("Informe o estado de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Informe o código de '01' a '04': ");
    scanf(" %s", cod1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomecid1); // Lê a string completa com espaços

    printf("Informe o número de habitantes: ");
    scanf(" %d", &populacao1);

    printf("Informe a área: ");
    scanf(" %f", &area1);

    printf("Informe o PIB: ");
    scanf(" %f", &pib1);
    pib1 *= 1000000000; // Converte de bilhões para valor absoluto em reais

    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &npontoturistico1);

    printf("--------------------------------------------------------------\n");

    // Cálculo de indicadores do jogador 1
    denspop1 = (float)populacao1 / area1;                                                      // Densidade populacional
    pibpercap1 = (float)pib1 / populacao1;                                                     // PIB per capita
    SuperPoder1 = (float)populacao1 + area1 + pib1 + npontoturistico1 + pibpercap1 - denspop1; // SuperPoder calculado com base nos atributos

    printf("\n\n             MUITO BEM, JOGADOR NÚMERO 1!\n");
    printf("AS INFORMAÇÕES DA SUA CARTA FORAM ARMAZENADAS EM 'CARTA 1'.\n\n");

    printf("--------------------------------------------------------------\n");

    // Coleta de informações do Jogador 2 (igual à do jogador 1)
    printf("VEZ DO JOGADOR NÚMERO 2, ADICIONE AS INFORMAÇÕES DA SUA CARTA: \n\n");

    printf("Informe o estado de 'A' a 'H': ");
    scanf(" %c", &estado2);

    printf("Informe o código de '01' a '04': ");
    scanf(" %s", cod2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomecid2);

    printf("Informe o número de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Informe a área: ");
    scanf(" %f", &area2);

    printf("Informe o PIB: ");
    scanf(" %f", &pib2);
    pib2 *= 1000000000;

    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &npontoturistico2);

    // Cálculo de indicadores do jogador 2
    denspop2 = (float)populacao2 / area2;
    pibpercap2 = (float)pib2 / populacao2;
    SuperPoder2 = (float)populacao2 + area2 + pib2 + npontoturistico2 + pibpercap2 - denspop2;

    printf("--------------------------------------------------------------\n");

    printf("\n\n             MUITO BEM, JOGADOR NÚMERO 2!\n");
    printf("AS INFORMAÇÕES DA SUA CARTA FORAM ARMAZENADAS EM 'CARTA 2'.\n\n");

    printf("--------------------------------------------------------------\n");

    // Impressão dos dados armazenados das cartas
    printf("              --- CHEGOU A HORA DOS RESULTADOS ---\n\n");

    // Exibição da Carta 1 com todos os atributos
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", toupper(estado1)); // Exibe a letra do estado em maiúsculo
    printf("Código: %c%s\n", toupper(estado1), cod1);
    printf("Nome da Cidade: %s\n", nomecid1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1000000000); // Converte de volta para bilhões na exibição
    printf("Número de Pontos Turísticos: %d\n", npontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop1);
    printf("PIB per Capita: %.2f reais\n", pibpercap1);
    printf("Super Poder: %.2f\n\n", SuperPoder1);

    // Exibição da Carta 2 com os mesmos atributos
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", toupper(estado2));
    printf("Código: %c%s\n", toupper(estado2), cod2);
    printf("Nome da Cidade: %s\n", nomecid2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", npontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
    printf("PIB per Capita: %.2f reais\n", pibpercap2);
    printf("Super Poder: %.2f\n\n", SuperPoder2);

    printf("--------------------------------------------------------------\n");

    printf("       --- ESCOLHA QUAl ATRIBUTO DESEJA COMPARAR ---\n\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Número de Pontos Turísticos\n");
    printf("[5] Densidade Demográfica\n");
    printf("[6] Todos os Atributos\n");
    printf("Sua escolha: ")
    scanf("%d", &atributo);

    printf("--------------------------------------------------------------\n");

    switch (atributo)
    {

    case 1:
        printf("Atributo: População\n");

        if (populacao1 > populacao2)
        {
            printf("Carta 1 - %s: %d\n", nomecid1, populacao1);
            printf("Carta 2 - %s: %d\n", nomecid2, populacao2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomecid1);
        }
        else if (populacao1 == populacao2)
        {
            printf("Carta 1 - %s: %d\n", nomecid1, populacao1);
            printf("Carta 2 - %s: %d\n", nomecid2, populacao2);
            printf("\nResultado: Empate!\n");
        }
        else
        {
            printf("Carta 1 - %s: %d\n", nomecid1, populacao1);
            printf("Carta 2 - %s: %d\n", nomecid2, populacao2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomecid2);
        }
        break;

    case 2:
        printf("Atributo: Área\n");

        if (area1 > area2)
        {
            printf("Carta 1 - %s: %.2f\n", nomecid1, area1);
            printf("Carta 2 - %s: %.2f\n", nomecid2, area2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomecid1);
        }
        else if (area1 == area2)
        {
            printf("Carta 1 - %s: %.2f\n", nomecid1, area1);
            printf("Carta 2 - %s: %.2f\n", nomecid2, area2);
            printf("\nResultado: Empate!\n");
        }
        else
        {
            printf("Carta 1 - %s: %.2f\n", nomecid1, area1);
            printf("Carta 2 - %s: %.2f\n", nomecid2, area2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomecid2);
        }
        break;

    case 3:
        printf("Atributo: PIB\n");

        if (pib1 > pib2)
        {
            printf("Carta 1 - %s: %.2f\n", nomecid1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomecid2, pib2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomecid1);
        }
        else if (pib1 == pib2)
        {
            printf("Carta 1 - %s: %.2f\n", nomecid1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomecid2, pib2);
            printf("\nResultado: Empate!\n");
        }
        else
        {
            printf("Carta 1 - %s: %.2f\n", nomecid1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomecid2, pib2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomecid2);
        }
        break;

    case 4:
        printf("Atributo: Número de Pontos Turísticos\n");

        if (npontoturistico1 > npontoturistico2)
        {
            printf("Carta 1 - %s: %d\n", nomecid1, npontoturistico1);
            printf("Carta 2 - %s: %d\n", nomecid2, npontoturistico2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomecid1);
        }
        else if (npontoturistico1 == npontoturistico2)
        {
            printf("Carta 1 - %s: %d\n", nomecid1, npontoturistico1);
            printf("Carta 2 - %s: %d\n", nomecid2, npontoturistico2);
            printf("\nResultado: Empate!\n");
        }
        else
        {
            printf("Carta 1 - %s: %d\n", nomecid1, npontoturistico1);
            printf("Carta 2 - %s: %d\n", nomecid2, npontoturistico2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomecid2);
        }
        break;

    case 5:
        printf("Atributo: Densidade Demográfica\n");

        if (denspop1 < denspop2)
        {
            printf("Carta 1 - %s: %.2f\n", nomecid1, denspop1);
            printf("Carta 2 - %s: %.2f\n", nomecid2, denspop2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomecid1);
        }
        else if (denspop1 == denspop2)
        {
            printf("Carta 1 - %s: %.2f\n", nomecid1, denspop1);
            printf("Carta 2 - %s: %.2f\n", nomecid2, denspop2);
            printf("\nResultado: Empate!\n");
        }
        else
        {
            printf("Carta 1 - %s: %.2f\n", nomecid1, denspop1);
            printf("Carta 2 - %s: %.2f\n", nomecid2, denspop2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomecid2);
        }
        break;

    case 6:
    printf("Atributo: Geral\n");

    // Comparação das cartas e resultado final por atributo
    printf("              --- COMPARAÇÃO GERAL ---\n\n");
    printf("ATENÇÃO!\n");
    printf("Número [1] indica que a CARTA 1 VENCEU\n");
    printf("Número [0] indica que a CARTA 2 VENCEU.\n\n\n");

    // Comparações diretas entre os atributos das cartas
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", npontoturistico1 > npontoturistico2);
    printf("Densidade Populacional: %d\n", denspop2 > denspop1); // Invertido: menor densidade é melhor
    printf("PIB per Capita: %d\n", pibpercap1 > pibpercap2);
    printf("Super Poder: %d\n\n\n", SuperPoder1 > SuperPoder2);
    break;

    default:
    printf("Opção inválida!\n");
    break;

    }
    
    printf("--------------------------------------------------------------\n");

    return 0; // Finaliza o programa
}