#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
                            Descri��o da quest�o

 Implemente a fun��o abaixo que verifica se a string � um pal�ndromo, isto �,
se � lida da mesma forma da esquerda para a direita e vice-versa.

        int strpal(char *s)

    strpal("")      -- <TRUE>
    strpal("m")     -- <TRUE>
    strpal("ba")    -- <FALSE>


Funcionando?
    Sim - (V)
    N�o - ()
*/
//-------------- PROT�TIPOS DAS FUN��ES ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int strpal(char *s);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char s[250];

//------ Armazenando o input do usu�rio
    printf("Este programa confere se uma string eh palindromo ou nao.\n");
    printf("O programa diferencia maiusculas de minusculas.\n\n");
    printf("Insira a string desejada para analise: ");
    gets(s);

//------ Imprimindo o resultado
    switch(strpal(s))
        {
        case 0:
            {
                printf("\nA frase inserida eh um palindromo.\n");
                break;
            }
        case 1:
            {
                printf("\nA frase inserida NAO eh um palindromo.\n");
                break;
            }
        }

//------ The End...?
    return 0;
}
//-------------- FUN��ES -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int strpal(char *s)
{
    int i, j, tam;

//Conferindo o tamanho da string
    tam = 0;
    while(s[tam] != '\0')
    {
        tam++;
    }
//Eliminando o caractere delimitador: '\0'
    tam = tam - 1;
    for(i = 0 ,j = tam;  i <= tam; i++, j--)
    {
        if(s[i] != s[j])
        {
            return 1;
        }
    }
    return 0;
}

//-------------- COMENT�RIOS ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

//(1)//
   Eliminando o caractere delimitador: '\0';

//(2)//
"..."

*/
