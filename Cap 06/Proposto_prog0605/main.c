#include <stdio.h>
#include <stdlib.h>

#define LIM 4
/*
                            Descri��o da quest�o

        char *memcpy(char *dest, char *orig, int n)
 Implemente a fun��o acima que copia n caracteres do vetor origem(orig) para o vetor
destino (dest) e devolve o vetor dest.

    !Nota: Os seguintes cabe�alhos s�o equivalentes:

        char *memcpy(char *dest, char *orig, int n)
        char *memcpy(char dest[], char *orig, int n)


    (X) - Funcionando?
*/
//-------------- PROT�TIPOS DAS FUN��ES ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


char *memcpy(char *dest, char *orig, int n);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char orig[LIM], dest[LIM];
    int i, n;


//------ Armazenando o input do usu�rio
    for(i = 0; i < LIM; i++)
    {
        printf("Insira o %d caractere:  ", i+1);
        scanf(" %c", &orig[i]);
        printf("orig[%d]: %c\n", i, orig[i]);
    }
    while(n < 0 || n > LIM)
    {
        printf("\nInsira a quantidade de caracteres que deseja verificar: ");
        scanf(" %d", &n);
        if(n < 0 || n > LIM)
        {
            printf("\nO valor deve ser entre 0 e %d.\nTente novamente.\n", LIM);
        }
    }
//------ Copiando elementos entre vetores
    *memcpy(dest, orig, n); //(1)//
    for(i = 0; i < LIM; i++)
    {
        printf("dest[%d]: %c\n", i, dest[i]);
    }



    return 0;
}
//-------------- FUN��ES -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

char *memcpy(char *dest, char *orig, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        dest[i] = orig[i];
        return dest;
    }
}

//-------------- COMENT�RIOS ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

//(1)//
Por algum motivo a fun��o s� est� retornando o primeiro caractere do vetor origem.

//(2)//
"..."

*/
