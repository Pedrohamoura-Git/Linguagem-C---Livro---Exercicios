#include <stdio.h>
#include <stdlib.h>

#define LIM 50
/*
                            Descri��o da quest�o


 Implementar a fun��o abaixp que devolve o n�mero de caracteres existentes na string
*s (sem contar o '\0').

        int strlen(char *s)


Funcionando?
    Sim - (V)
    N�o - ()
*/
//-------------- PROT�TIPOS DAS FUN��ES ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int strlen(char *s);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char s[LIM];

//------ Armazenando o input do usu�rio
    printf("Insira um nome: ");
    gets(s);

//------ Imprimindo o resultado
    printf("\nTamanho do nome inserido: %d\n", strlen(s));

//------ .The End...?
    return 0;
}
//-------------- FUN��ES -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int strlen(char *s)
{
//------ Definindo elementos
    int i, cont;

//------ Contando caracteres
    for(i = 0, cont = 0; i < LIM; i++)
    {
        if(s[i] != '\0')
        {
            cont++;
        }
        else
        {
            return cont;
        }

    }
}

//-------------- COMENT�RIOS ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

//(1)//
    Ex:
"Quando sair do if...incrementa��o seja = 0."

//(2)//
"..."

*/
