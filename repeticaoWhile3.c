//a prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletandodados sobre o salário e o número de filhos de cada família. A prefeitura desejasaber:  o A média do salário da população;o A média do número de filhos;o O maior salário;o A percentagem de pessoas com salários até R$ 2500,00.   O final da leitura de dados dar-se-á com a entrada de uma resposta negativa paraa pergunta se você deseja cadastrar uma nova família.

#include <stdlib.h>

int main ()

{
    int filho=0, filhoTotal=0, qtdPessoa=0, porcentagem, ate2500=0;
    float salario=0, salariototal=0, mediaSalario=0, maiorSalario=0, mediaFilho=0, porcenate2500;
    char fim='n';



                printf("\n Deseja inserir mais uma familia? \n");
                scanf("%s", &fim);

            while (fim != 'n' && fim != 'N')
            {


                printf("\n Insira o seu SALARIO: \n");
                scanf("%f", &salario);

                printf("\n Insira a quantidade de filho(s) que voce tem: \n");
                scanf("%d", &filho);

                    if (salario > maiorSalario)
                    {
                        maiorSalario=salario;  
                    }
                    if (salario <= 2500)
                    {
                        ate2500++;
                    }

                    salariototal+=salario;
                    filhoTotal+=filho;
                    qtdPessoa++;

                printf("\n Deseja inserir mais uma familia? \n");
                scanf("%s", &fim);
                              
            }


    mediaFilho= filhoTotal/qtdPessoa;
    mediaSalario= salariototal/qtdPessoa;

    porcentagem= 100/qtdPessoa;

    porcenate2500= porcentagem*ate2500;

                printf("\n A media do salario da populacao eh: %.2f \n", mediaSalario);

                printf("\n A media de filhos da populacao eh: %.2f \n", mediaFilho);

                printf("\n O maior salario dentre a populacao eh: %.2f \n", maiorSalario);

                printf("\n A porcentagem de pessoas com salario ate 2500.00 eh: %.2f porcento. \n", porcenate2500);

    

}



// coletar sobre o SALARIO
// coletar sobre o numero de FILHOS

// RETORNAR: media de filhos, ou seja, mediaFilho= filho/QTD;
// RETORNAR: media do salario, ou seja, mediaSalario= Salario/QTD (QTD= quantidade de pessoas)

// RETORNAR: o maior salario, ou seja, MaiorSalario=0 e IF salario > MaiorSalario MaiorSalario= salario; pessoa ++;.
// RETORNAR: pessoas com salario maior que 2500. Ou seja, if salario<=2500 ate2500++; pessoa++;

// pra tirar a porcentagem precisará de porcentagem= 100/pessoa, porcenate2500= porcentagem*ate2500;