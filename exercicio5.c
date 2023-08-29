#include <stdio.h>

int main()
{   
    
    int num1, num2;
    char resp;
    float result;

    printf("\n Para soma '+' ");
    printf("\n Para subtracao '-' ");
    printf("\n Para divisao '/' ");
    printf("\n Para multiplicacao '*' \n ");

    printf("Insira o primeiro numero da sua operacao: \n");
    scanf("%d", &num1);

    printf("Insira o segundo numero da sua operacao: \n ");
    scanf("%d", &num2);

    printf("Insira a expressao ex (+, -, /, *): \n ");
    scanf(" %c", &resp);



    switch (resp)
    {
        case '+':
        result= num1 + num2;
        break;

        case '-':
        result= num1 - num2;
        break;

        case '/':
       
         if (num2 != 0)
        {
             result= num1 / num2;
        
        }
        else
        {
            printf("nao eh possivel dividir por 0 \n");
            return 1;
        }
        break;

        case '*':
        result= num1 * num2;
        break;

        default:
            printf("Operacao invalida.\n");
            return 1;
        
 
    }
    printf("seu resultado eh: \n %.2f", result);

}
