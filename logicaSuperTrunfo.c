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
    int populacao2, npontoturistico2;
    float area2, pib2, denspop2, pibpercap2, SuperPoder2;

    int atributo1, atributo2, atributo3;

    // Exibe mensagem de boas-vindas
    printf("\n         --- BEM VINDO AO SUPER TRUNFO ---\n\n\n"); 
    //implementação do menu interativo
    printf("[1] JOGAR \n");
    printf("[2] REGRAS \n");
    printf("[3] SAIR \n");
    printf("Sua Escolha: ");
    int op;
    scanf("%d", &op);

    switch (op)
    {

    case 2:
        printf("                --- REGRAS ---\n");
        printf("1. Cada jogador escolhe uma carta do baralho.\n");
        printf("2. Cada jogador preenche os campos com os valores conrrespondentes.\n");
        printf("3. Três atributo são selecionados para a disputa:\n");
        printf("4. Os valores do atributo escolhido são comparados.\n");
        printf("5. Quem tiver o valor maior vence a rodada.\n");
        printf("6. Após 3 rodadas, vence quem tiver feito mais pontos.\n");
        printf("--------------------------------------------------------------\n");
        break;

    case 3:
        printf("\n             --- VOLTE QUANDO QUISER! ---\n");
        break;

    case 1:

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

        printf("       --- ESCOLHA O 1° ATRIBUTO A SER COMPARADO ---\n\n");
        printf("                      --- ATENÇÃO --- \n");
        printf("    Você não pode escolher 2 vezes o mesmo atributos.\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] PIB\n");
        printf("[4] Número de Pontos Turísticos\n");
        printf("[5] Densidade Demográfica\n");
        printf("Sua 1° escolha: ");
        scanf("%d", &atributo1);

        printf("--------------------------------------------------------------\n");

        printf("       --- ESCOLHA O 2° ATRIBUTO A SER COMPARADO ---\n\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] PIB\n");
        printf("[4] Número de Pontos Turísticos\n");
        printf("[5] Densidade Demográfica\n");
        printf("Sua 2° escolha: ");
        scanf("%d", &atributo2);

        printf("--------------------------------------------------------------\n");

        printf("       --- ESCOLHA O 3° ATRIBUTO A SER COMPARADO ---\n\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] PIB\n");
        printf("[4] Número de Pontos Turísticos\n");
        printf("[5] Densidade Demográfica\n");
        printf("Sua 2° escolha: ");
        scanf("%d", &atributo3);

        printf("--------------------------------------------------------------\n");

        if (atributo1 == atributo2 || atributo1 == atributo3 || atributo2 == atributo3)
        {

            printf("ERRO! Tente escolher atributos diferentes!");
        }

        else
        {

            switch (atributo1)
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

            default:
                printf("Opção inválida!\n");
                break;
            }

            printf("\n");

            switch (atributo2)
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

            default:
                printf("Opção inválida!\n");
                break;
            }

            printf("\n");

                switch (atributo3)
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

            default:
                printf("Opção inválida!\n");
                break;
            }
        }
        printf("--------------------------------------------------------------\n");
        break;

        return 0; // Finaliza o programa
    }
}