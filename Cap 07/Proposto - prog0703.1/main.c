#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o abaixo que recebe uma string, retiranado-lhe todos os caracteres
que n�o se encontram repetidos.

        char *repeticoes(char *s)
        Ex:

        repeticoes("ALFACE") --> "AA"
        repeticoes("ALTA FIDELIDADE") --> "ALAIDELIDADE"


Funcionando?
    Sim - ()
    N�o - (X)
----------------- COMENT�RIOS ---------------------------------------------------------------------------------------------------------------
//(1)//
 A repeti��o para de funcionar na linha 65. N�o consegui identificar o erro.

//(2)//
 "..."


---------------- PROT�TIPOS DAS FUN��ES -----------------------------------------------------------------------------------------------------
*/

char *repeticoes(char *s);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "ALFACE";

//------ Armazenando o input do usu�rio

//------ Imprimindo o resultado
    printf("return: %s\n", repeticoes(s));


//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

char *repeticoes(char *s)
{
    char *s_aux = s;
    int i = 0, j = 0, k = 0, cont = 0;

    for(i = 0; i < strlen(s); i++)
    {
        printf("i: %d\n", i); //Debug i
        for(j = 0; s[j] != '\0'; j++)
        {
            //printf("\nj: %d\n", j); //Debug j
            //printf("%c == %c --> ", s[i], s[j]);//Debug caracteres
/*-->*/     if(s[i] == s[j]) //(1)//
            {
                cont++;
                //printf("Cont: %d", cont); //Debug cont
            }
        }

        if(cont > 1)
        {
            s_aux[k] = s[i];
            k++;
            //printf("k: %d\n", k);//Debug k
        }
    }
    s_aux[k+1] = '\0';
    return s_aux;
}


