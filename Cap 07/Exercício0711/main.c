#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o abaixo que coloca um espa�o em branco ap�s cada um dos caracteres
da string 's'.

        char *strpad(char *s)

Funcionando?
    Sim - ()
    N�o - (X)
----------------- COMENT�RIOS ---------------------------------------------------------------------------------------------------------------
//(1)//
 Por algum motivo n�o estou conseguindo fazer a repeti��o for funcionar.

//(2)//
"..."


---------------- PROT�TIPOS DAS FUN��ES -----------------------------------------------------------------------------------------------------
*/

char *strpad(char *s);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "012345";

//------ Armazenando o input do usu�rio

//------ Imprimindo o resultado
    strpad(s);

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

char *strpad(char *s)
{
    int tam = strlen(s);
    char *aux = s;
    int i = 0, j = 1;
    //(1)// for(i = 1, j = 1; i <= 2*tam, j <= tam; i++)
    {
        if(i % 2 != 0)
        {
            s[i] = ' ';
            printf("s[%d] = %c\n", i, s[i]);
        }
        else
        {
            s[i] = aux[j];
            j++;
            printf("s[%d] = %c --> aux[%d]\n", i, aux[j], j);
        }
    }

    return 0;
}


