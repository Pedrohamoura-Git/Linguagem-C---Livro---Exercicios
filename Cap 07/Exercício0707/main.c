#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
                            Descri��o da quest�o

 Implemente a fun��o abaixo que devolve o �ndice da primeira ocorr�ncia do caractere
'ch' na string 's'.
 Se o caractere n�o existir devolver -1, pois zero � um �ndice poss�vel.

            int indchar(char *s, char ch)

        Ex:
        indchr("15 abacates", 'a')  --> 3
        indchr("15 abacates", '#')  --> -1


    (V) - Funcionando?
*/
//-------------- PROT�TIPOS DAS FUN��ES ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int indchar(char *s, char ch);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "Quinze Abacates, 30 bananas e 21 macas.";
    char ch;
    int resultado;

//------ Armazenando o input do usu�rio
    printf("Dada a string: \"%s\"", s);
    printf("\n\nInsira o caractere que voce deseja obter o indice de sua primeira ocorrencia: ");
    scanf(" %c", &ch);

//------ Imprimindo o resultado
    resultado = indchar(s, ch);
    if(resultado != -1)
    {
        printf("O caractere: '%c' aparece a primeira vez no indice: %d", ch, resultado);
    }
    else
    {
        printf("O caractere: '%c', NAO existe na string acima.\n", ch);
    }


//------ .The End...?
    return 0;
}
//-------------- FUN��ES -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int indchar(char *s, char ch)
{
    int i = 0;

    while(1)
    {
        if(s[i] == ch)
        {
            return i;
        }
        if(s[i] == '\0')
        {
            return -1;
        }
        i++;
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
