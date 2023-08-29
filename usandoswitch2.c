#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{
    
    int valorf, valor, pag;
    setlocale (LC_ALL, "PORTUGUESE");

    printf("\n 1 desconto para pagamento a vista 10%%");
    printf("\n 2 desconto para pagamento a vista no cartao de credito 5%% ");
    printf("\n 3 para pagamento no prazo em 2x");
    printf("\n 4 juros para pagamento no prazo em ate 3x c/ juros 10%%");

    printf("\n Informe o valor da compra: \n");
    scanf("%i", &valor);

    printf("\n Informe a opcao de pagamento: \n ");
    scanf("%i", &pag);


        switch (pag)
       {
        case 1 :
        valorf=(valor-(valor*0.1));
        printf("o valor final ficara: %.2i", valorf);
        break;

        case 2 :
        valorf=(valor-(valor*0.05));
        printf("o valor final ficara: %.2i", valorf);
        break;

        case 3 :
        valorf=(valorf);
        printf("o valor final ficara: %.2i", valorf);
        break;

        case 4 :
        valorf=(valor+(valor*0.1));
        printf("o valor final ficara: %.2i", valorf);
        break;
       } 

}    
