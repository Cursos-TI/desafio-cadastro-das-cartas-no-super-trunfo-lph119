#include <stdio.h>

int main(){


char estado1[2], nomeC1[10], codigo1[3], estado0[2], nomeC0[10], codigo0[3];
unsigned long int populacao1, populacao0;
float area1, area0; //por em km²
float PIB1, PIB0;
float densidade1, densidade0;
float pibpercapita1, pibpercapita0;
int PT1, PT0; //pontos turisticos
float superpower1, superpower0;

//entrada de dados da primeira carta

    printf("Cadastro da Cidade 1:\n");
    printf("insira sigla do estado: ");
    scanf("%s", &estado1);

    printf("insira no nome da cidade: ");
    scanf("%s", &nomeC1);

    printf("insira do codigo da cidade: ");
    scanf("%s", &codigo1);

    printf("quantas pessoas habitam essa cidade: ");
    scanf("%lu", &populacao1);

    printf("informe a área: ");
    scanf("%f", &area1);

    printf("informe o pib da cidade: ");
    scanf("%f", &PIB1);

    printf("quantos pontos turisticos possui: ");
    scanf("%d", &PT1);


//entrada de dados da segunda carta

    printf("\nCadastro da Cidade 0:\n");
    printf("insira sigla do estado: ");
    scanf("%s", &estado0);

    printf("insira no nome da cidade: ");
    scanf("%s", &nomeC0);

    printf("insira do codigo da cidade: ");
    scanf("%s", &codigo0);

    printf("quantas pessoas habitam essa cidade: ");
    scanf("%lu", &populacao0);

    printf("informe a área: ");
    scanf("%f", &area0);

    printf("informe o pib da cidade: ");
    scanf("%f", &PIB0);

    printf("quantos pontos turisticos possui: ");
    scanf("%d", &PT0);

    printf("\ndados coletados.\n");//confirmação da conclusão da coleta

    //area de calculo

    //calculo da densidade

     densidade1 = (float)populacao1/area1; 
     densidade0 = (float)populacao0/area0;

    //calculo do pib per capito

     pibpercapita1 = PIB1 * 1000000000 /(float)populacao1;//convertendo de milhoes pra reais
     PIB0 = PIB0 * 1000000000 /populacao0;//convertendo de milhoes pra reais

     //calculo do superpower

     superpower1 = populacao1 + area1 + (PIB1 * 1000000000) + PT1 + pibpercapita1 + (1.0f / densidade1);
     superpower0 = populacao0 + area0 + (PIB0 * 1000000000) + PT0 + 0 + (1.0f / densidade0);

     //area onde e feita a comparação

    int winpopulacao = populacao1 > populacao0;
    int winarea = area1 > area0;
    int winpib = PIB1 > PIB0;
    int winturismo = PT1 > PT0;
    int windensidade = densidade1 < densidade0; // menor ganha
    int winpibpercapita = pibpercapita1 > 0;
    int winsuperpower = superpower1 > superpower0;


//area onde sera exibida os dados de ambas as cidades

printf("\n\n exibindo dados obtidos:\n\n");

printf("\ncidade 1: \n");
printf("estado: %s\n", estado1);
printf("nome: %s\n", nomeC1);
printf("codigo: %s\n", codigo1);
printf("polulaçao: %lu\n", populacao1);
printf("area: %.2f Km²\n", area1);
printf("pib: %.2f bilhões\n", PIB1);
printf("n° de pontos turisticos: %d\n", PT1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita:  %.2f reais por pessoa\n", pibpercapita1);

printf("\ncidade 0: \n");
printf("estado: %s\n", estado0);
printf("nome: %s\n", nomeC0);
printf("codigo: %s\n", codigo0);
printf("polulaçao: %lu\n", populacao0);
printf("area: %.2f Km²\n", area0);
printf("pib: %.2f bilhões\n", PIB0);
printf("n° de pontos turisticos: %d\n", PT0);
printf("Densidade Populacional: %.2f hab/km²\n", densidade0);
printf("PIB per Capita:  %.2f reais por pessoa\n\n\n", pibpercapita0);

//comparação no final pra saber qual e a mais forte

printf("\n Comparemos as Duas Cartas pra Saber a Mais poderosa\n");
printf("carta com a maior populacao e: a carta %d\n",winpopulacao);
printf("carta com a maior area e: a carta %d\n",winarea);
printf("carta com o maior pib e: a carta %d\n",winpib);
printf("carta com o mais ponto turistico e: a carta %d\n",winturismo);
printf("carta com a menor densidade populacional e: a carta %d\n",windensidade);
printf("carta com o maior pib per capito e: a carta %d\n",winpibpercapita);
printf("carta com o maior power e: a carta %d\n",winsuperpower);

printf("concluido.");

return 0;
}
