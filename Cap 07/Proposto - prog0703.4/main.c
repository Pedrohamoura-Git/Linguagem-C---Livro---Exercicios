#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o abaixo que transforma a string s, deixando apenas os caracteres
existentes de n em n posi��es.

        char *Entremeado(char *s, int n)
        Ex:
        strcpy(str, ,"ABCDEFGHIJLMN");
        Entremeado (str, 0) -> "ABCDEFGHIJKLMN"
        Entremeado (str, 1) -> "ACEGIKM"
        Entremeado (str, 3) -> "AEIM"


Funcionando?
    Sim - (V)
    N�o - ()
----------------- COMENT�RIOS ---------------------------------------------------------------------------------------------------------------
//(1)//
 "...."

//(2)//
 "..."


---------------- PROT�TIPOS DAS FUN��ES -----------------------------------------------------------------------------------------------------
*/

char *Entremeado(char *s, int n);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "ABCDEFGHIJKLMN";
    int n = 1;

//------ Armazenando o input do usu�rio

//------ Imprimindo o resultado
    printf("s: %s\n", Entremeado(s, n));

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

char *Entremeado(char *s, int n)
{
    int i, j, tam = strlen(s);

    if(n == 0)
    {
        return s;
    }
    for(i = j = 0; i <= tam; i += n+1)
    {
        s[j++] = s[i];
    }
    s[j] = '\0';
    return s;
}


