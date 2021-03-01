#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o abaixo que apaga todas as ocorr�ncias do caractere ch na string s.

        char *strdelc(char *s, char ch)

 (!)Nota: Apagar um caractere n�o � substitu�-lo por um espa�o em branco, mas retir�-lo
efetivamente da string.


Funcionando?
    Sim - ()
    N�o - (X)
----------------- COMENT�RIOS ---------------------------------------------------------------------------------------------------------------
//(1)//
 Por algum motivo o loop para de funcionar quando o c�digo s[j] = s[j+1]; � executado.
Sem ele todas as repeti��es s�o realizadas normalmente.

//(2)//
 "..."


---------------- PROT�TIPOS DAS FUN��ES -----------------------------------------------------------------------------------------------------
*/

char *strdelc(char *s, char ch);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "12345";
    char ch;

//------ Armazenando o input do usu�rio
    printf("Dada a string: \"%s\"\nInsira qual caractere voce deseja remover: ", s);
    scanf(" %c", &ch);

//------ Imprimindo o resultado
    strdelc(s, ch);

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

char *strdelc(char *s, char ch)
{
    int i, j, tam = strlen(s);
    //printf("tam: %d\n", tam); //Debug tam
//Loop para procurar o ch dentro da *s;
    for(i = 0; i < tam; i++)
    {
        //printf("i: %d\n", i); //Debug i
        if(s[i] == ch)
        {
            for(j = i; j < tam; j++)
            {
                printf("j: %d\n", j); //Debug j
                //(1)//s[j] = s[j+1];
                printf("s[j] = s[j+1] --> s[%d] = %c\n", j, s[j+1]);
            }
        }
    }
    return s;
}


