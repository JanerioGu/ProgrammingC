/*1) Faça um programa com uma função chamada caI_imposto. A função possui dois parâmetros formais:

taxaImposto: que é a quantia de imposto pago sobre o valor devenda de um produto
custo: que é o custo de um produto antes do imposto

Afunção deve calcular e retornar o valor final (após aplicação do imposto) ao programa principal. 
Imprima na tela o valor do produto, com e sem imposto.*/

#include <stdlib.h>
#include <stdio.h>

float cal_imposto(float taxa1, float prod)
{
   
    if (prod >= 1500 && prod <= 3000)
    {
        taxa1= (prod*0.15);

    }

    else if (prod > 3000 )
    {
        taxa1= (prod*0.20);
    }

    return taxa1 + prod;

}


int main()
{
    float prod;
    float taxa1=0;

    printf("\n Insira o valor do produto: \n");
    scanf("%f", &prod);

    printf("\n O valor do produto sem imposto eh: %.2f \n", prod);
    printf("\n O valor do produto com impostos eh: %.2f \n", cal_imposto(taxa1, prod));

}

