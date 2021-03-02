#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o abaixo que faz o mesmo que a fun��o strcmp, mas realiza a compara��o
ignorando se os caracteres est�o em mai�sculas ou min�sculas (ignore case).

        int stricmp(char *s1, char *s2)


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

int stricmp(char *s1, char *s2);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
int stricmp(char *s1, char *s2);

//------ Definindo elementos
    char *s1 = "Pedro";
    char *s2 = "Pedru";
//------ Armazenando o input do usu�rio

//------ Imprimindo o resultado
    printf("Result: %d\n", stricmp(s1, s2));

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

int stricmp(char *s1, char *s2)
{
    int i = 0;

    while(tolower(s1[i]) == tolower(s2[i] && s1 != '\0')
            i++;
    return (tolower(s1[i]) - tolower(s2[i]);
}


