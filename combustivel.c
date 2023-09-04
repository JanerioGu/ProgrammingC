#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char tipo;
    int qtlt;
    float desconto, valr, valorf;

     printf("Tecle 1 para alcool \n");
     printf("Tecle 2 para gasolina \n");

     printf("Qual tipo de combustivel?: \n");
     scanf(" %c", &tipo);

    printf("Quantidade de litros: \n");
    scanf("%i", &qtlt);

    printf("Valor do combustivel: \n");
    scanf("%f", &valr);

switch (tipo)
{
case '1': 
if (qtlt <= 20)
    {

    desconto= valr*0.03;
    }
else{
    
    desconto= valr*0.05;
}
    break;

case '2': 
if (qtlt <=20)
    {

    desconto= valr*0.035;
    }
else
    {

    desconto= valr*0.06;
    }

    break;

default: printf("comando invalido");
    break;
}

valorf= qtlt * (valr - desconto) ;

   printf("O valor a ser pago eh: %.2f", valorf);
}