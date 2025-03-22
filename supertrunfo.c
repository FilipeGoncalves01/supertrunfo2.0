#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //Abaixo crio as variaveis que irei usar
    char cidade[20];  
    unsigned long int populacao1, populacao2, populacao3, populacao4;
    float pib1, pib2, pib3, pib4,area1, area2, area3, area4, capita2 , capita1, capita3, capita4;
    float dsp1, dsp2, dsp3, dsp4;
    int pontost1, pontost2, pontost3, pontost4, opcao;
    float supercarta1, supercarta2, supercarta3, supercarta4;
    float densid1, densid2, densid3, dens
    
    
    ;

// introdução basica do jogo

    printf("****Ola, bem vindo ao Super Trunfo! ***\n");
    printf("\n");

    printf("1. Iniciar o jogo");
    printf("2. Entendendo a logica do jogo ");
    printf("3. Creditos");
    printf("4. Sair ");

    printf("Escolha uma das opções acima ");
    scanf("%i", &opcao);

    switch (opcao)
    { 
    case 1:
    printf("iniciando o jogo...\n");
    printf("...\n");
    printf("...\n");
    printf("Entre com o nome da cidade \n");
    scanf("%i", &cidade);
    
    printf("Numero da população\n");
    scanf( " %lu", &populacao1);

    printf("Area da cidade\n");
    scanf( " %f", &area1);

    printf( "PIB da cidade\n");
    scanf( " %f", &pib1);

    printf("Numero de pontos turisticos\n");
    scanf( " %i", &pontost1);
    printf("\n");

        break;

        case 2:
        printf("Instruções\n");
        printf("No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte. O tema deste Super Trunfo é Países, onde você comparará as propriedades das cidades.\n");
        printf("\n");
        break;

        case 3:
        printf("Creditos\n");
        printf("Está versão do Super trunfo foi criado por Filipe dos Santos Gonçalves, e revisada pelo seu professor Sergio, que ele carinhosamente chama de Serginho em meio a suas aulas completamentes em EAD :) \n");

        break;
        case 4:
        printf("Saindo do jogo...\n");
        printf("...\n");
        printf("..\n");
        printf(".\n");

    default:
        printf("Opção invalida");


        break;
    }

}