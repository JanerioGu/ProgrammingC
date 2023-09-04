#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
 //Você foi contratado por uma nova república que necessita fornecer um programa escrito 
//em C para realizar o ajuste anual de rendimentos pessoa física. O programa deve ler: 
// RBA: Renda bruta anual; 
// NDP: Número de dependentes; 
// IPG: Imposto pago no ano. 
//A base de cálculo (BC) é dada por RBA - NDP *1500,00. O número máximo de dependentes 
//dedutíveis é 4. Para o cálculo do imposto devido você deve utilizar tabela progressiva abaixo para 
//definir imposto devido 
//(IBC), que é calculado aplicando a porcentagem indicada (alíquota) sobre a Base de Cálculo: 
//Com estes dados você deve calcular o imposto devido e, descontando deste o imposto que já foi 
//pago no ano 
//(IPG), informar ao usuário: 
// Valor final do imposto a pagar 
// Valor final da restituição a receber 
// Mensagem indicando que usuário tem imposto quitado.

float rba, ndp, ipg, imposto, valorpagar, valorreceber, bc;

    printf("insira sua renda bruta: \n");
    scanf("%f", &rba);

    printf("Insira o numero de dependentes: \n");
    scanf("%f", &ndp);

    printf("Insira o valor de impostos pagos durante o ano: \n");
    scanf("%f", &ipg);

    bc= rba-(ndp*1500);

    if (bc >= 15000 && bc <= 35000)
    {
        imposto=bc*0.075;
    }
    else if (bc > 35000 && bc <= 280000)
    {
        imposto=bc*0.15;
    }
    else if (bc >280000)
    {
        imposto=bc*0.60;
    }

        valorpagar= imposto - ipg;
        valorreceber= ipg - imposto;

    
    if (valorpagar < 0) 
    {
        printf("Voce tem direito a uma restituicao de imposto de R$%.2f\n", -valorpagar);
    } 
    else if (valorpagar > 0) 
    {
        printf("Voce deve pagar R$%.2f de imposto\n", valorpagar);
    } 
    else 
    {
        printf("Voce tem o imposto quitado\n");
    }

    return 0;



}