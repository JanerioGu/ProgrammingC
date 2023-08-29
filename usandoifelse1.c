//Crie um programa que leia o valor do salário bruto de um funcionário e calcule o valor do seusalário líquido. Para obter o calculo do salário líquido deve ser descontado o INSS de acordo com oseguinte critério:  se o valor do salário bruto for menor do que R$ 1500,00 então o desconto deve ser de 8%, Senão será de 9%.Após o desconto mostrar somente o valor do salário líquido (salário bruto – o desconto)
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    float brut, desconto;
    int salarioliquido;

    printf("Coloque o valor do seu salario BRUTO: \n");
    scanf("%f", &brut);

    if(brut <1500)
    {
        desconto= 0.08;
    }

    else
    {
        desconto= 0.09;
    }

    salarioliquido= brut - brut * desconto;

    printf("Seu salario com o desconto do INSS e: %.2i", salarioliquido);


}
