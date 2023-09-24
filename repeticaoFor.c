#include <stdlib.h>

int main()

{
    //Construa um algoritmo que receba os dados de um a turma de 3 alunos.Após o recebimento dos dados determine:
    //a) A idade média dos alunos com menos de 1,70m de altura;
    //b) A altura média dos alunos com mais de 20 anos.

    //

    int i, idade, qtd1=0, qtd2=0, idadeM, somaIdade=0;
    float altura, alturaM, somaAltura=0;


        for (i= 0; i <3; i++)
        {
            printf("Insira a sua IDADE: \n");
            scanf("%d", &idade);

            printf("Insira a sua ALTURA (em metros ex:1.87): \n");
            scanf("%f", &altura);

                if (altura <1.70)
                {
                    somaIdade+=idade;
                    qtd1++;
                }
                else if (idade >=20)
                {
                    somaAltura+=altura;
                    qtd2++;
                }
        
        }


    if (qtd1 > 0)
    {
        idadeM=somaIdade/qtd1;
        printf("\nA idade media dos alunos com menos de 1,70m de altura eh: %.2f\n", idadeM);
    } 
    else
    {
        printf("\nNenhum aluno com menos de 1,70m de altura foi registrado.\n");
    }
    
    if (qtd2 > 0)
    {
        alturaM=somaAltura/qtd2;
        printf("\nA altura media dos alunos com mais de 20 anos eh: %.2f", alturaM);
    }
    else 
    {
        printf("\n Nenhum aluno foi identificado contendo + de 20 anos.");
    }
    return 0;
}