#include <stdio.h>
#include <stdlib.h>
#define INDICE 20
/*
                            //Descri��o da quest�o//

 Criar um vetor com 20 espa�os os atribuindo valores em seguida.
Criar e imprimir um novo vetor com a posi��o dos elementos do original invertidas.

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
    int i=0, j=0;
    int Num[INDICE]={0};
    int Num_Inv[INDICE]={0}; //(1)//

//------ Armazenando o input do usu�rio
    for(i; i<INDICE; i++)
{
    printf("Insira o %d numero: ", i+1);
    scanf(" %d", &Num[i]);
}

//------ Invertendo os elementos dentro dos dois vetores
    for(i=0, j=INDICE-1; i<INDICE, j>-1; i++, j--)
    {
        Num_Inv[j] = Num[i];
    }

//------ Imprimindo o vetor invertido
    printf("\n");
    for(i=0; i<INDICE; i++)
    {
        printf("NUM: %2d --> NUM_INV: %2d\n", Num[i], Num_Inv[i]);
    }

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

 Esse vetor auxiliar poderia ser f�cilmete substituido por uma vari�vel inteira simples.
Assim, ao inv�s de armazenar todos os n�meros 2 vezes (Num e Num_inv),
a vari�vel armazenaria apenas 1 n�mero por vez e o usaria para substituir dentro
do vetor Num.

//(2)//
"..."

*/
