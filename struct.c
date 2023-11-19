#include <stdio.h>
#include <stdlib.h>
/*Construa uma estrutura desnado a controlar despesas e dados de umcondomínio de apartamentos. Os dados de cada apartamento são armazenados em um vetor de estruturas. Para cada apartamento tem-se os seguintes dados:
nome (do responsável)
número (do apartamento)
área (em m2 ) 
número de moradores 
valor (a ser pago no mês)
Faça um bloco de instruções para imprimir os dados dos apartamentos.
Apresente também o total de moradores do condomínio*/

struct apartamentos
{
    char nome[30];
    float area, numeroMora, valor;
    int numero;
};


int main()
{   
    int i, n;
    float totalMora=0;

    printf("\n Insira a quantidade de moradores que deseja contabilizar: \n");
    scanf("%i", &n);

    struct apartamentos ap[n];
    

    for ( i = 0; i < n; i++)
    {
        printf("\n Informe o nome do responsavel do AP: \n");
        scanf("%s", &ap[i].nome);

        printf("\n Informe o numero do AP: \n");
        scanf("%i", &ap[i].numero);

        printf("\n Informe a area em metros do AP: \n");
        scanf("%f", &ap[i].area);

        printf("\n Informe o numero de moradores do AP: \n");
        scanf("%f", &ap[i].numeroMora);

        printf("\n Informe o valor do AP: \n");
        scanf("%f", &ap[i].valor);

        totalMora+= ap[i].numeroMora;

    }

    system ("cls");

    for ( i = 0; i < n; i++)
    {
        printf("\n \n ########################## \n \n");

        printf("\n O responsavel do ap %i eh : %s. \n Ele tem %.2f metros quadrados. \n Possui %.2f moradores. \n Valor de mercado do ap eh: %.2f \n\n", ap[i].numero, ap[i].nome, ap[i].area, ap[i].numeroMora, ap[i].valor);

    }

     printf("\n A quantidade de moradores no condominio eh: %.2f \n\n", totalMora);
    

}