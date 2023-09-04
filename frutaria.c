#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
    float qt1, qt2, valrMA, valrMO, desconto, valor1, valorf;
   

        printf("Insira a quantidade de macas em KG: \n");
        scanf("%f", &qt1);

        printf("Insira a quantidade de morangos em KG: \n");
        scanf("%f", &qt2);

    

        if (qt1 <=5)
        {
            valrMO= 6.50;
        }
        else
        {
           valrMO= 6.30;
        }

        if (qt2 <=5)
        {
            valrMA= 3.80;
        }
        else
        {
            valrMA= 3.50;
        }
        
        valor1 = (qt1 * valrMA) + (qt2 * valrMO);

        if (qt1 + qt2 >= 10 || qt1 + qt2 >= 50)
        {
            desconto= valor1 * 0.1;
        }
        
        valorf= valor1 - desconto;

        printf("o valor total de sua compra é= %.2f", valorf);

}
