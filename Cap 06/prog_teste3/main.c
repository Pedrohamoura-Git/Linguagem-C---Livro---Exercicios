#include <stdio.h>
#include <stdlib.h>
/*
                            //Descri��o da quest�o//

 Fa�a um algoritmo com 3 vetores, com 100 espa�os cada, chamados: original, pares e impares.
Preencha e teste o original com 100 valores e, a depender da classifica��o deles
(par ou impar), atribuir cada valor ao vetor adequado.

    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Prot�tipos das fun��es//

void funcao();
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo vari�veis
    int i=0, j=0, k=0;
    int original[100]={0};
    int impares[100]={0};
    int pares[100]={0};

//------ Armazenando o input do usu�rio
    for(i=0; i<6; i++)
    {
        printf("Insira o %d numero: ", i+1);
        scanf(" %d", &original[i]);

//------//------ Separando �mpar de par
        if(original[i]%2==0)
        {
            pares[j] = original[i];
            //printf("pares = %d\n", pares[j]); //Debug do vetor pares;
            //printf("Indice[j] = %d\n", j); //Debug da vari�vel j;
            j++;
        }
        else
        {
            impares[k] = original[i];
            //printf("impares = %d\n", impares[k]); //Debug do vetor impares;
            //printf("Indice[k] = %d\n", k); //Debug da vari�vel k;
            k++;
        }
    }
//------ Imprimindo os 3 vetores
    printf("\nOriginal: ");
    for(i=0; i<6; i++)
    {
        if(original[i] != 0)
        {
            printf("%d ", original[i]);
        }
    }
    printf("\nPares: ");
    for(j=0; j<6; j++)
    {
        if(pares[j] != 0)
        {
            printf("%d ", pares[j]);
        }
    }
    printf("\nImpares: ");
    for(k=0; k<6; k++)
    {
        if(impares[k] != 0)
        {
            printf("%d ", impares[k]);
        }
    }

    printf("\n");
    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Fun��es//

void funcao()
{

    return;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*                          //COMENT�RIOS//
//(1)//
    Ex:
"Quando sair do if...incrementa��o seja = 0."

//(2)//
"..."
*/
