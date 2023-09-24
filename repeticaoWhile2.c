//4. Faça um programa que receba uma senha formada de quatro números inteiros, verifique se a senha está
//correta e, caso não esteja, solicite novamente a senha. Se a senha entrada for a correta, deverá ser
//apresentada a mensagem “Senha Correta”, caso contrário, “Senha Incorreta”. 

#include <stdlib.h>

int main()

{
    int senha=1234;

        printf("\n Insira sua senha: \n");
        scanf("%d", &senha);


        while (senha != 1234)
            {
                printf("\n Senha incorreta. \n");  

                printf("\n Insira sua senha: \n");
                scanf("%d", &senha);          
            }
        
        printf("\n Sua senha esta correta! \n");

}

//VAMO PORRA!! BOA CRL!!