#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //Abaixo crio as variaveis que irei usar
    char cidade[20], cidade2[20], cidade3[20];  
    unsigned long int populacao1, populacao2, populacao3, populacao4;
    float pib1, pib2, pib3, pib4,area1, area2, area3, area4, capita2 , capita1, capita3, capita4;
    float dsp1, dsp2, dsp3, dsp4;
    int pontost1, pontost2, pontost3, pontost4, opcao, Opcao, opcao1, opcao2, opcao3, resultado, resultado2, resultado3, resultado4, resultado5, resultado6;
    float supercarta1, supercarta2, supercarta3, supercarta4;
    float densid1, densid2, densid3, dens;


    printf("Olá, bem vindo ao super trufo!!!\n");
    printf("passo 1: Cadastro das cartas A01 a A03\n");

    printf("Entre com o nome da cidade \n");
    scanf(" %s", &cidade);
    
    printf("Numero da população\n");
    scanf( " %i", &populacao1);

    printf("Area da cidade\n");
    scanf( " %f", &area1);

    printf( "PIB da cidade\n");
    scanf( " %f", &pib1);

    printf("Numero de pontos turisticos\n");
    scanf( " %i", &pontost1);
    printf("\n");

    printf("Cadastro da carta A01 concluida, entre com as informções para o cadastro da carta A02");

    printf("Entre com o nome da cidade \n");
    scanf("%s", &cidade2);
    
    printf("Numero da população\n");
    scanf( " %iu", &populacao2);

    printf("Area da cidade\n");
    scanf( " %f", &area2);

    printf( "PIB da cidade\n");
    scanf( " %f", &pib2);

    printf("Numero de pontos turisticos\n");
    scanf( " %i", &pontost2);
    printf("\n");

    printf("Cadastro da carta A02 concluida\n");

    printf("Entre com o nome da cidade \n");
    scanf("%s", &cidade3);
    
    printf("Numero da população\n");
    scanf( " %lu", &populacao3);

    printf("Area da cidade\n");
    scanf( " %f", &area3);

    printf( "PIB da cidade\n");
    scanf( " %f", &pib3);

    printf("Numero de pontos turisticos\n");
    scanf( " %i", &pontost3);
    printf("\n");

 printf("Cadastro da carta A03 concluida\n");


 // Depois do cadastro das cartas calculo a dencidade do Pib percapita e densidade populacional
 capita1 = (float)populacao1/ pib1; 
 capita2 = (float)populacao2/ pib2;
 capita3 = (float)populacao3/ pib3;
 capita4 = (float)populacao4/ pib4;

 dsp1 = (float) populacao1/ area1;
 dsp2 = (float) populacao2 / area2;
 dsp3 = (float) populacao3 / area3;
 dsp4 = (float) populacao4 / area4;

// Apresentação dos dados ao jogador.
printf("Dados registrados\n");

printf(" Dados da cidade: A01\n");
printf("nome da cidade:\n", cidade);
printf("Numero da população: %lu\n", populacao1 );
printf("Area da cidade: %.2f km² \n", area1);
printf("PIB: %.2f\n", pib1);
printf("Numero de pontos turisticos: %i\n", pontost1 );
printf("Dencidade populacional: %.2F hab/km² \n", dsp1);
printf(" PIB Percapita %.2F \n", capita1);


printf(" Dados da cidade: A02\n");
printf("nome da cidade:\n", cidade2);
printf("Numero da população: %lu\n", populacao2 );
printf("Area da cidade: %.2f km² \n", area2);
printf("PIB: %.2f\n", pib2);
printf("Numero de pontos turisticos: %i\n", pontost2 );
printf("Dencidade populacional: %.2F hab/km² \n", dsp2);
printf(" PIB Percapita %.2F \n", capita2);

printf(" Dados da cidade: A03\n");
printf("nome da cidade:\n %s", cidade3);
printf("Numero da população: %lu\n", populacao3 );
printf("Area da cidade: %.2f km² \n", area2);
printf("PIB: %.2f\n", pib2);
printf("Numero de pontos turisticos: %i\n", pontost3 );
printf("Dencidade populacional: %.2F hab/km² \n", dsp3);
printf(" PIB Percapita %.2F \n", capita3);

// calculo super carta

densid1= 1 / dsp1;
densid2= 1 / dsp2;
densid3= 1 / dsp3;

 supercarta1 = (float) populacao1 + area1 + pib1 + densid1+ capita1+ pontost1;
 supercarta2 = (float) populacao2 + area2 + pib2 + densid2+ capita2+ pontost2;
 supercarta3 = (float) populacao3 + area3 + pib3 + densid3+ capita3+ pontost3;

// menu de opções

printf("\n");

printf(" iniciando o jogo \n");
printf("1. população: %s \n", cidade );
printf("2. Area: %s \n", cidade );
printf("3. pib: %s \n", cidade );
printf("4 ponto turistico %s\n", cidade);
printf("5.pib percapita %s \n", cidade );
printf("6. Area: %s \n", cidade );

printf("7. população: %s \n", cidade2 );
printf("8. Area: %s \n", cidade2);
printf("9. pib: %s \n", cidade2);
printf("10 ponto turistico %s\n", cidade2);
printf("11.pib percapita %s \n", cidade2 );
printf("12. Area: %s \n", cidade2 );


printf("escolha uma carta\n");
scanf("%i", &opcao);

switch (opcao)
{
case 1:
printf("você escolheu populacão: %s\n", cidade);
resultado= populacao1 > populacao2 ? 1: 0;
    break;
    case 2:
    printf("você escolheu area: %s\n", cidade);
    resultado= area1 > area2? 1:0;
    break;
    case 3:
    printf("você escolheu pib: %s\n", cidade);
    resultado= pib1 > pib2 ? 1:0;
    break;
    case 4:
    printf("você escolheu ponto turistico: %s\n", cidade);
    resultado= pontost1 > pontost2? 1:0;
    break;
    case 5:
    printf("você escolheu pibpercapita: %s\n", cidade);
    resultado= capita1 > capita2? 1:0;
    break;
    case 6:
    printf("você escolheu densidade populacional: %s\n", cidade);
     resultado= densid1 > densid2? 1:0;
    case 7:
    printf("você escolheu populacão: %s\n", cidade2);
    resultado= populacao2 > populacao1 ? 1: 0;
    break;
    case 8:
    printf("você escolheu area: %s\n", cidade2);
    resultado= area2 > area1? 1:0;
    break;
    case 9:
    printf("você escolheu pib: %s\n", cidade2);
    resultado= pib2 > pib1 ? 1:0;
    break;
    case 10:
    printf("você escolheu ponto turistico: %s\n", cidade2);
    resultado= pontost2 > pontost1? 1:0;
    break;
    case 11:
    printf("você escolheu pibpercapita: %s\n", cidade2);
    resultado= capita2 > capita1? 1:0;
    break;
    case 12:
    printf("você escolheu densidade populacional: %s\n", cidade2);
    resultado= densid2 > densid1? 1:0;
default:
printf("opção invalida\n");
    break;
}
printf("\n");

printf(" Escolha um segundo atributo \n");
printf("1. população: %s \n", cidade );
printf("2. Area: %s \n", cidade );
printf("3. pib: %s \n", cidade );
printf("4 ponto turistico %s\n", cidade);
printf("5.pib percapita %s \n", cidade );
printf("6. Area: %s \n", cidade );

printf("7. população: %s \n", cidade );
printf("8. Area: %s \n", cidade2);
printf("9. pib: %s \n", cidade2);
printf("10 ponto turistico %s\n", cidade2);
printf("11.pib percapita %s \n", cidade2 );
printf("12. Area: %s \n", cidade2 );


printf("escolha um segundo atributo\n");
scanf("%i", &opcao2);

if (opcao == opcao2)
{
   printf("Os atributos são iguais\n");
} else
{
    switch (opcao2)
    {
        case 1:
        printf("você escolheu populacão: %s\n", cidade);
        resultado= populacao1 > populacao2 ? 1: 0;
            break;
            case 2:
            printf("você escolheu area: %s\n", cidade);
            resultado2= area1 > area2? 1:0;
            break;
            case 3:
            printf("você escolheu pib: %s\n", cidade);
            resultado2= pib1 > pib2 ? 1:0;
            break;
            case 4:
            printf("você escolheu ponto turistico: %s\n", cidade);
            resultado2= pontost1 > pontost2? 1:0;
            break;
            case 5:
            printf("você escolheu pibpercapita: %s\n", cidade);
            resultado2= capita1 > capita2? 1:0;
            break;
            case 6:
            printf("você escolheu densidade populacional: %s\n", cidade);
             resultado2= densid1 > densid2? 1:0;
            case 7:
            printf("você escolheu populacão: %s\n", cidade2);
            resultado2= populacao2 > populacao1 ? 1: 0;
            break;
            case 8:
            printf("você escolheu area: %s\n", cidade2);
            resultado2= area2 > area1? 1:0;
            break;
            case 9:
            printf("você escolheu pib: %s\n", cidade2);
            resultado2= pib2 > pib1 ? 1:0;
            break;
            case 10:
            printf("você escolheu ponto turistico: %s\n", cidade2);
            resultado2= pontost2 > pontost1? 1:0;
            break;
            case 11:
            printf("você escolheu pibpercapita: %s\n", cidade2);
            resultado2= capita2 > capita1? 1:0;
            break;
            case 12:
            printf("você escolheu densidade populacional: %s\n", cidade2);
            resultado2= densid2 > densid1? 1:0;
        default:
        printf("opção invalida\n");
            break;


    }
if (resultado && resultado2)
{
    printf("Você venceu");
} else if (resultado != resultado2){
printf("você empatou\n");
}else {
    printf("Você perdeu\n");
}







}

}
