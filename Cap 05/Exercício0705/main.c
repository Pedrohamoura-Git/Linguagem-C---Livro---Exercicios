#include <stdio.h>
#include <stdlib.h>
/*
                            Descri��o da quest�o

 Implemente a fun��o abaixo que devolve o n�mero de ocorr�ncias do caractere ch na
string.

        int strcountc(char *s, char ch)


    (V) - Funcionando?
*/
//-------------- PROT�TIPOS DAS FUN��ES ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int strcountc(char *s, char ch);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos

//------ Armazenando o input do usu�rio

//------ Imprimindo o resultado

//------ .The End...?
    return 0;
}
//-------------- FUN��ES -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int strcountc(char *s, char ch)
{
    int i, cont;

    for(i = 0; i < LIM; i++)
    {
        if(s[i] == ch)
        {
            cont++;
        }
    }

    return count;
}

//-------------- COMENT�RIOS ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

//(1)//
    Ex:
"Quando sair do if...incrementa��o seja = 0."

//(2)//
"..."

*/
