
#include <stdlib.h>
#include <stdio.h>


int main()

{
    int P, i;
    float valorTotal, fatTotal;

    printf("Quantos produtos voce deseja contabilizar?");
    scanf("%d", &P);

    float qtd[P];
    float preco[P];

    for ( i = 0; i < P; i++)
    {
        printf("\n Qual o valor do produto? \n");
        scanf("%f", &preco[i]);

        printf("\n Qual a quantidade desse produto? \n");
        scanf("%f", &qtd[i]);

    for ( i = 0; i < P; i++)
    {
        printf("\n O valor do produto %i eh: %.2f\n", i+1, preco[i]);
    }  
        valorTotal=preco[i]*qtd[i];
        fatTotal+=valorTotal;

    }


    printf("\n O faturamento total eh de: %.2f \n", fatTotal);
}