#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o que devolve o n� de caracteres alfab�ticos em s.

        int strcounta(char *s)
        Ex:
        strcounta("15 abacates") --> 8
        strcounta("quinze (15) abacates") --> 14



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

int strcounta(char *s);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "Hello World!";

//------ Armazenando o input do usu�rio

//------ Imprimindo o resultado
    printf("Quant: %d\n", strcounta(s));

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

int strcounta(char *s)
{
    int i, cont = 0;

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            cont++;

        if(s[i] >= 'A' && s[i] <= 'Z')
            cont++;
    }
    return cont;
}


