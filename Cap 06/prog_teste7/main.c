#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM 6
/*
                            //Descri��o da quest�o//

Escreva um programa que leia um vetor de 100 elementos.
O programa deve informar a quantidade de n�meros �mpares existentes no vetor.
Os  valores armazenados no vetor ser�o gerados pelo  computador.

    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Prot�tipos das fun��es//

void funcao();
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    int i = 0, quant_impares = 0;
    int vetor[LIM] = {0};

//------ Randomizando a semente
    srand(time(NULL)); //(2)//

//------ Atribuindo n�meros aleat�rios ao vetor
    for(i = 0; i < LIM; i++)
    {
        vetor[i] = rand()%LIM; //(1)//
        //printf("%d ", vetor[i]); //Debug do vetor
    }

//------ Identificando e contando os n�meros �mpares
    for(i = 0; i < LIM; i++)
    {
        if(vetor[i] % 2 != 0)
        {
            quant_impares++;
            //printf("\nImpar: %d", vetor[i]); //Debug n�meros �mpares
        }
    }

//------ Impimindo os Valores
    printf("\nQuantidade de numeros impares informados: %d\n", quant_impares);

//------ The End
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
 Quando for necess�rio definir um valor m�ximo para a gera��o do n�mero aleat�rio,
pode-se fazer isso utilizando '% num' junto a fun��o rand() - respons�vel por gerar
os n�meros aleat�rio -, porque o resto da divis�o de qualquer n�mero por 'num' vai
gerar um n�mero menor que o m�ximo definido 'num'.

    Ex - Qualquer n�mero menor que 3:
    vetor[i] = rand()%3;
Sa�da: Entre 0 e 2

    Ex2 - Qualquer n�mero menor que 10:
    vetor[i] = rand()%6;
Sa�da: Entre 0 e 9

    Ex3 Qualquer n�mero entre 1 e 6:
    vetor[i] = rand()%6 + 1;
Sa�da: Entre 1 e 6

                                    !!!

 O Problema � que os n�meros gerados ser�o sempre iguais, sempre que o programa for
executado porque ele est� gerando os n�mero aleat�rios a partir da mesma semente.
 � necess�rio, portanto, tamb�m randomizar a semente � qual a fun��o rand()
est� associada.

//(2)//
 A fun��o srand() serve para plantar uma nova semente de refer�ncia para a fun��o rand().
Mas, como o n�mero gerado � sempre baseado na semente, � necess�rio ent�o tamb�m
randomiz�-la para que rand() gere n�meros diferentes sempre que chamada. Para tal,
uma t�tica efetica � incluir a biblioteca <time.h> e chamar a fun��o time(NULL) que
gera um segundo aleat�rio desde 01/01/1970 at� o momento atual - desde que atribuida
com o par�metro NULL.
 Logo, ao associar a fun��o time(NULL) com a fun��o srand(), � poss�vel gerar uma semente
aleat�ria, por�m finita, sempre que as fun��es srand() e, por consequ�ncia, rand() foram
chamadas.

Refer�ncia: https://www.youtube.com/watch?v=FvsKVLqvWWg&feature=youtu.be
*/
