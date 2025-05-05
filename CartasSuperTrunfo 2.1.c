#include <stdio.h>

int main(){


char estado1[2], nomeC1[10], codigo1[4], estado0[2], nomeC0[10], codigo0[4];
unsigned long int populacao1, populacao0;
float area1, area0; //por em km²
float PIB1, PIB0;
float densidade1, densidade0;
float pibpercapita1, pibpercapita0;
int PT1, PT0; //pontos turisticos


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

    //Area dos cauculos logicos

    //calculo da densidade

     densidade1 = (float)populacao1/area1; 
     densidade0 = (float)populacao0/area0;

    //calculo do pib per capito

     pibpercapita1 = PIB1 * 1000000000 /(float)populacao1;//convertendo de milhoes pra reais
     PIB0 = PIB0 * 1000000000 /populacao0;//convertendo de milhoes pra reais


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

if (PIB1 > PIB0) {
  printf("carta 1: %s com !!! %.2f !!! bilhões\n",nomeC1, PIB1);
  printf("carta 0: %s com %.2f bilhões\n",nomeC0, PIB0);
  printf("Cidade 1 e a Vencedora\n");
} else {
  printf("carta 0: %s com !!! %.2f !!! bilhões\n",nomeC0, PIB0);
  printf("carta 1: %s com %.2f bilhões\n",nomeC1, PIB1);
  printf("Cidade 0 e a Vencedora\n");
}


printf("concluido.");

return 0;
}
