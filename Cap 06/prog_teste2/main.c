#include <stdio.h>
#include <stdlib.h>
/*
                        //Descri��o da quest�o//

    Ler 15 n�meros e, a cada 5 n�meros, fazer a m�dia e armazen�-la
em um vetor de 3 posi��es.

    (V) - Funcionando?

*/
//---------------------------------------------------------------------------------------
                       //Prot�tipos das fun��es//

//---------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo vari�veis

    int i, j, cont;
    float num[15], media[3], soma;

//------ Armazenando e somando o input do usu�rio

    soma = 0;
    for(i=0, j=0, cont = 0; i<15, j<3; i++, cont++)
    {
        printf("Insira o %d numero inteiro: ", i+1);
        scanf(" %f", &num[i]);
        soma += num[i];
        //printf("num = %.2f\n", num[i]);//Debug do num;
        //printf("soma = %.2f\n", soma);//Debug da soma;

//------------ Calculando a m�dia

        if(cont == 4)
        {
            media[j] = soma / 5;
            printf("media = %.2f\n", media[j]);
            j++;
            soma = 0;
            cont = -1;//(1)//
        }
        //printf("cont = %d\n", cont);//Debug do cont;
    }

//------ Imprimindo as m�dias

    for(i = 0; i < 3; i++)
    {
        printf("\n%d� Media = %.2f", i+1, media[i]);
    }

//------ Fim do programa

    return 0;
}
//---------------------------------------------------------------------------------------
/*                              //COMENT�RIOS//
//(1)//
Quando sair do if, o la�o for vai encerrar a primeira repeti��o,
incrementando +1 ao cont.
Por isso, quando o if for executado, cont deve ser -1 para que,
a cada 5 la�os o valor de cont + a incrementa��o seja = 0.
