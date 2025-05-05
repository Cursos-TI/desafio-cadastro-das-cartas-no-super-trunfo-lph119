#include <stdio.h>

int main(){


char estado1[2], nomeC1[10], codigo1[4], estado0[2], nomeC0[10], codigo0[4];
unsigned long int populacao1, populacao0;
float area1, area0; //por em km²
float PIB1, PIB0;
float densidade1, densidade0;
float pibpercapita1, pibpercapita0;
int PT1, PT0; //pontos turisticos
int menu;


//entrada de dados da primeira carta

    printf("Cadastro da Cidade 1\n");
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

    printf("\nCadastro da Cidade 0\n");
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

//painel com as instruções
printf("selecione o atributo para continuar\n");
printf("para Polulação digite 1\n");
printf("Para àrea digite 2\n");
printf("Para PIB digite 3\n");
printf("Para Numero de Pontos turisticos digite 4\n");
printf("Para Densidade demográfica digite 5\n");
printf("\nresposta:");
scanf("%d", &menu);

//o menu de escolhas com cada opcão
switch (menu){
case 1:
printf("atributo População selecionado\n\n");
if (populacao1 > populacao0) {
printf("cidade 1: %s ganhou\n", nomeC1);
printf("populaçâo da cidade %s :%lu\npopulação da cidade %s :%lu", nomeC1 ,populacao1, nomeC0, populacao0);//deve exibir nome e o parametro selecionado de cada cidade
} else if (populacao1 < populacao0){
printf("cidade 0: %s ganhou\n", nomeC0);
printf("populaçâo da cidade 0 %s :%lu\npopulação da cidade 1 %s :%lu", nomeC0 ,populacao0, nomeC1, populacao1);//deve exibir nome e o parametro selecionado de cada cidade
} else {
  printf("Empate!\n");
  printf("populaçâo da cidade 1 %s :%lu\npopulação da cidade 0 %s :%lu", nomeC1 ,populacao1, nomeC0, populacao0);//deve exibir nome e o parametro selecionado de cada cidade
}
  break;
case 2:

  printf("atributo Àrea selecionado\n\n");
if (area1 > area0) {
printf("cidade 1: %s ganhou\n", nomeC1);
printf("Àrea da cidade 1 %s :%.2f\nÀrea da cidade 0 %s :%.2f", nomeC1, area1, nomeC0, area0);//deve exibir nome e o parametro selecionado de cada cidade
} else if (area1 < area0){
printf("cidade 0: %s ganhou\n", nomeC0);
printf("Àrea da cidade 0 %s :%.2f\nÀrea da cidade 1 %s :%.2f", nomeC0, area0, nomeC1, area1);//deve exibir nome e o parametro selecionado de cada cidade
} else {
  printf("Empate!\n");
  printf("Àrea da cidade 1 %s :%.2f\nÀrea da cidade 0 %s :%.2f", nomeC1, area1, nomeC0, area0);//deve exibir nome e o parametro selecionado de cada cidade
}
  break;
case 3:

  printf("atributo PIB selecionado\n\n");
if (PIB1 > PIB0) {
printf("cidade 1: %s ganhou\n", nomeC1);
printf("PIB da cidade 1 %s :%.2f\nPIB da cidade 0 %s :%.2f", nomeC1, PIB1, nomeC0, PIB0);//deve exibir nome e o parametro selecionado de cada cidade
} else if (PIB1 < PIB0){
printf("cidade 0: %s ganhou\n", nomeC0);
printf("PIB da cidade 0 %s :%.2f\nPIB da cidade 1 %s :%.2f", nomeC0, PIB0, nomeC1, PIB1);//deve exibir nome e o parametro selecionado de cada cidade
} else {
  printf("Empate!\n");
  printf("PIB da cidade 1 %s :%.2f\nPIB da cidade 0 %s :%.2f", nomeC1, PIB1, nomeC0, PIB0);//deve exibir nome e o parametro selecionado de cada cidade
}
  break;
case 4:

  printf("atributo Número de pontos turísticos selecionado\n\n");
if (PT1 > PT0) {
printf("cidade 1: %s ganhou\n", nomeC1);
printf("Número de pontos turísticos da cidade 1 %s :%d\nNúmero de pontos turísticos da cidade 0 %s :%d", nomeC1, PT1, nomeC0, PT0);//deve exibir nome e o parametro selecionado de cada cidade
} else if (PT1 < PT0){
printf("cidade 0: %s ganhou\n", nomeC0);
printf("Número de pontos turísticos da cidade 0 %s :%d\nNúmero de pontos turísticos da cidade 1 %s :%d", nomeC0, PT0, nomeC1, PT1);//deve exibir nome e o parametro selecionado de cada cidade
} else {
  printf("Empate!\n");
  printf("Número de pontos turísticos da cidade 1 %s :%d\nNúmero de pontos turísticos da cidade 0 %s :%d", nomeC1, PT1, nomeC0, PT0);//deve exibir nome e o parametro selecionado de cada cidade
}
  break;
case 5:

  printf("atributo Densidade demográfica selecionado\n\n");
if (densidade1 < densidade0) {
printf("cidade 1: %s ganhou\n", nomeC1);
printf("Densidade demográfica da cidade 1 %s :%.2f\nDensidade demográfica da cidade 0 %s :%.2f", nomeC1, densidade1, nomeC0, densidade0);//deve exibir nome e o parametro selecionado de cada cidade
} else if (densidade1 > densidade0){
printf("cidade 0: %s ganhou\n", nomeC0);
printf("Densidade demográfica da cidade 0 %s :%.2f\nDensidade demográfica da cidade 1 %s :%.2f", nomeC0, densidade0, nomeC1, densidade1);//deve exibir nome e o parametro selecionado de cada cidade
} else {
  printf("Empate!\n");
  printf("Densidade demográfica da cidade 1 %s :%.2f\nDensidade demográfica da cidade 0 %s :%.2f", nomeC1, densidade1, nomeC0, densidade0);//deve exibir nome e o parametro selecionado de cada cidade
}
  break;

default:
  printf("opção invalida");
  break;



printf("concluido.");

return 0;
};
}
