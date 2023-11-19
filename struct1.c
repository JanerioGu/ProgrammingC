#include <stdio.h>
#include <stdlib.h>

struct garrafa
{
    char cor [10], dono[20];
    float peso, cap, preco;
};

int main()
{
    int n, i;
   
    printf("\n quantas garrafas voce deseja cadastrar? \n");
    scanf("%i", &n);

    struct garrafa g1[n];

    for(i=0; i<n; i++)
    {
        printf("\n informe a cor da da garrafa %i: \n", i+1);
        scanf("%s", &g1[i].cor);
        printf("\n informe o dono da garrafa %i: \n", i+1);
        scanf("%s", &g1[i].dono);
        printf("\n informe o peso da garrafa %i: \n", i+1);
        scanf("%f", &g1[i].peso);
        printf("\n informe a capacidade da garrafa %i: \n", i+1);
        scanf("%f", &g1[i].cap);
        printf("\n informe o preco da garrafa %i: \n", i+1);
        scanf("%f", &g1[i].preco);
    }
   
    system ("cls");

    for(i=0; i<n; i++)
    {
    printf("\n ######## dados da %i pessoa #######", i+1);
    printf("\n A garrafa %s eh da %s.", g1[i].cor, g1[i].dono);
    printf("\n A mesma pesa %.2f gramas tem %.2fmls e custa r$%.2f.", g1[i].peso, g1[i].cap, g1[i].preco );
    }


}