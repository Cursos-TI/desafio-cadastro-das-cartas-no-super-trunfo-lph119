#include <stdio.h>

int main(){


char estado1[2], nomeC1[10], codigo1[3], estado2[2], nomeC2[10], codigo2[3];
int população1, população2;
float area1, area2; //por em km²
float PIB1, PIB2;
int PT1, PT2; //pontos turisticos

//entrada de dados da primeira carta!

    printf("Cadastro da Cidade 1:\n");
    printf("insira sigla do estado: ");
    scanf("%s", &estado1);

    printf("insira no nome da cidade: ");
    scanf("%s", &nomeC1);

    printf("insira do codigo da cidade: ");
    scanf("%s", &codigo1);

    printf("quantas pessoas habitam essa cidade: ");
    scanf("%d", &população1);

    printf("informe a área: ");
    scanf("%f", &area1);

    printf("informe o pib da cidade: ");
    scanf("%f", &PIB1);

    printf("quantos pontos turisticos possui: ");
    scanf("%d", &PT1);


//entrada de dados da segunda carta

    printf("\nCadastro da Cidade 2:\n");
    printf("insira sigla do estado: ");
    scanf("%s", &estado2);

    printf("insira no nome da cidade: ");
    scanf("%s", &nomeC2);

    printf("insira do codigo da cidade: ");
    scanf("%s", &codigo2);

    printf("quantas pessoas habitam essa cidade: ");
    scanf("%d", &população2);

    printf("informe a área: ");
    scanf("%f", &area2);

    printf("informe o pib da cidade: ");
    scanf("%f", &PIB2);

    printf("quantos pontos turisticos possui: \n\n");//pulando linha pra fica bonitinho
    scanf("%d", &PT2);

    printf("\ndados coletados.\n");//confirmação da conclusão da coleta

//area onde sera exibida os dados de ambas as cidades

printf("\n\n exibindo dados obtidos:\n\n");

printf("\ncidade 1: \n");
printf("estado: %s\n", estado1);
printf("nome: %s\n", nomeC1);
printf("codigo: %s\n", codigo1);
printf("polulaçao: %d\n", população1);
printf("area: %.2f Km²\n", area1);
printf("pib: %.2f bilhões\n", PIB1);
printf("n° de pontos turisticos: %d\n", PT1);

printf("\ncidade 2: \n");
printf("estado: %s\n", estado2);
printf("nome: %s\n", nomeC2);
printf("codigo: %s\n", codigo2);
printf("polulaçao: %d\n", população2);
printf("area: %.2f Km²\n", area2);
printf("pib: %.2f bilhões\n", PIB2);
printf("n° de pontos turisticos: %d\n\n\n\n", PT2);




printf("concluido.");

return 0;
}
