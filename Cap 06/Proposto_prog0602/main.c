#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
/*
                            //Descri��o da quest�o//

    float max(float v[], int n)
A fun��o recebe um vetor de n�meros reais e o n�mero de elementos a considerar.
Retornar o maior n�mero entre os n primeiros elementos do vetor.


    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Prot�tipos das fun��es//

float max(float v[], int n);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo vari�veis
    float v[TAM] = {0};
    int i, n;

//------ Plantando a semente da fun��o rand()
    srand(time(NULL));

//------ Gerando os n�meros reais aleat�rios
    for(i = 0; i < TAM; i++)
    {
        v[i] = rand()%TAM;
        printf("v[%d] = %.1f\n", i, v[i]); //Debug do vetor v[i]
    }

//------ Armazenando o Input do usu�rio
    printf("Quantos numeros deseja considerar? ");
    scanf(" %d", &n);

//------ Chamando a fun��o
    printf("O maior dos %d primeiros elementos = %.2f\n", n, max(v, n));

    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Fun��es//

float max(float v[], int n)
{
//------ Definindo vari�veis
    int i;
    float maior = 0;

//------ Obtendo maior n�mero
    for(i = 1; i < n; i++)
    {
        if(v[i] > maior)
        {
            maior = v[i];
            //printf("Maior: %.2f\n", maior); //Debug do maior
        }
    }

//------ retornando valor encontrado
    return maior;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*                          //COMENT�RIOS//

//(1)//
    Ex:
"Quando sair do if...incrementa��o seja = 0."

//(2)//
"..."

*/
