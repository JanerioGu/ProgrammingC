#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()

{
    int i, j, l, c;
    float notaTotal, media, qtd;

    printf("\n Informe a quantidade de alunos: \n");
    scanf("%i", &l);

    printf("\n Informe a quantidade de notas: \n");
    scanf("%i", &c);

    int aluno[l][c];

    for (i = 0; i < aluno[l]; i++)
    {
            notaTotal=0;
            qtd=0;
            printf("\n informe as notas do %i aluno:", i+1);
            
            for ( j= 0; j < aluno[c]; j++)
            {
                printf("\n informe a nota %i %i: \n", i+1, j+1);
                scanf("%i", &aluno[l][c]);
                notaTotal+=aluno[l][c];
                qtd++;
            }

                media=notaTotal/qtd;

                printf("\n A media do aluno %i eh: %.2f \n", i+1, media);
            
    }

}