//Kleber B. é frequentemente questionado sobre sua idade. Cansado deresponder à mesma pergunta, ele decidiu fazer um joguinho deadivinhação. O programa deve perguntar ao jogador um palpite, se opalpite for abaixo da idade de Kleber o programa responderá "Muitobaixo", se for acima responderá "Muito alto". O programadeve repetir esse processo enquanto o usuário não digitar a idadecerta de Kleber B., que possui 37 anos.

#include <stdlib.h>

int main()

{
    int idade;

    printf("\n Quantos anos tem KLEBER? \n");
    scanf("%d", &idade);

        while (idade !=37)
        {

            if (idade <= 30)
            {
                printf("\n Idade Muito abaixo! \n ");
            }
            if (idade >30 && idade <36)
            {
                printf("\n Idade pouco abaixo! \n ");
            }
            if (idade >37 && idade <43)
            {
                printf("\n Idade pouco acima! \n");
            }
            if (idade >43)
            {
                printf("\n Idade muito acima! \n");
            }

            printf("\n Quantos anos tem KLEBER? \n");
            scanf("%d", &idade);

        }

        printf("Voce acertou a idade de KLEBER!");

}