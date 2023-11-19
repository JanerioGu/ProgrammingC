#include <stdio.h>
#include <stdlib.h>

float INSS(float salario, float grati, float hrExtra)
{
    float salarioTotal;
    float salarioTaxado=0;

    salarioTotal= salario + grati + hrExtra;

    printf("%.2f", salarioTotal);


        if (salarioTotal >= 1302 && salarioTotal <= 2571)
        {
            salarioTaxado = salarioTotal * (0.075);
        }
        else if (salarioTotal > 2571 && salarioTotal <= 3856)
        {
            salarioTaxado = salarioTotal * (0.09);
        }
        else if (salarioTotal > 3856 && salarioTotal <= 7507)
        {
            salarioTaxado = salarioTotal * (0.12);
        }
        else if (salarioTotal > 7507)
        {
            salarioTaxado = salarioTotal * (0.14);
        }


    return salarioTaxado;

}

int main()
{
    float salario, grati, hrExtra;

    printf("\n \n Insira o seu salario bruto: \n\n");
    scanf("%f", &salario);

    printf("\n \n Insira a sua gratificacao: \n\n");
    scanf("%f", &grati);

    printf("\n \n Insira o valor das horas extras: \n\n");
    scanf("%f", &hrExtra);

    printf("\n\n O desconto de INSS eh: %.2f \n\n", INSS(salario, grati, hrExtra));

}
