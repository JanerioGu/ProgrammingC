#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int main ()

{
//Uma empresa vende o mesmo produto em quatro diferentes estados. Cada estado possui 
//uma taxa diferente de imposto sobre o produto. Faça um algoritmo em que o usuário entre 
//com o valor e o estado de destino do produto e o programa retorne o preço final do 
//produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado for 
//inválido, mostrar uma mensagem de erro. 
//Estado MG – Cod.1 SP– Cod.2 RJ– Cod.3 MS– Cod.4 
//Imposto 7% 12% 15% 8% 

    int taxa;
    float valorproduto, valortotal, imposto;

    printf("Informe o '1' para MG \n");
    printf("Informe o '2' para SP \n");
    printf("Informe o '3' para RJ \n");
    printf("Informe o '4' para MS \n");

    printf("insira o codigo do estado desejado: \n");
    scanf("%i", &taxa);

    printf("Insira o valor do produto: \n");
    scanf("%f", &valorproduto);

    switch (taxa)
    {
    case 1:
        imposto= (valorproduto*0.07);
        break;

    case 2:
        imposto= (valorproduto*0.12);
        break;

    case 3:
        imposto= (valorproduto*0.15);
        break;  

    case 4:
        imposto= (valorproduto*0.08);
        break;  
    
    default:
        printf("O codigo inserido eh invalido!");
        return 1;
        break;
    }
    
    valortotal= (valorproduto+imposto);

    printf("O valor do produto com o acrescimo do imposto eh: R$%.2f", valortotal);

}