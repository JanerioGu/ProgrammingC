#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

//3) Em um determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros fabricadosantes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa é incidindo sobre o valor de tabela docarro. Faça um programa que solicite ao usuário o ano e o preço do carro e na sequência calcule e imprima o imposto a serpago.

int main ()

{
    int ano;
   float valor, taxa, imposto;

    printf("Insira o ano do seu carro: \n");
    scanf("%i", &ano);

    printf("insira o valor do seu carro: \n");
    scanf("%f", &valor);

   
    if (ano <1990)
    {
        taxa = 0.01;
    } 
    else
    {
        taxa = 0.015;
    }

    imposto = valor * taxa;

    printf ("O valor do imposto a ser pago é: R$%.2f", imposto);


}
