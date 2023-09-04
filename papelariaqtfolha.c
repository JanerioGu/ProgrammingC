#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int main ()

{


float valortotal;
int quantidadefolhas;
    printf("Escreva a quantidade de copias: \n ");
    scanf("%i", &quantidadefolhas);

    if (quantidadefolhas <=100)
    {
        valortotal=(0.25*quantidadefolhas);
    }
    else
    {
        valortotal=(0.20*quantidadefolhas);
    }

    printf("O valor total a ser pago eh: %.2f", valortotal);

}