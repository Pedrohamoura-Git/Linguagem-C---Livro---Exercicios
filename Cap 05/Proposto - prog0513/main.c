#include <stdio.h>
#include <stdlib.h>
/*
                        //Descri��o da quest�o://

int Minus(Valor);

 Devolver o valor recebido sempre como negativo.
    Ex:
    Minus(10) --> -10
    Minus(-10) --> -10

    (V) - Funcionando?

*/
//---------------------------------------------------------------------------------------
                        //Prot�tipos das fun��es://

int Minus(Valor);
//---------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");
//------
    int Valor;
//------
    printf("Insira um numero: ");
    scanf(" %d", &Valor);
//------
    printf("\nO equivalente negativo de %d eh: %d\n", Valor, Minus(Valor));
    return 0;
}
//---------------------------------------------------------------------------------------
                        //Fun��es://

int Minus(Valor)
{
    if(Valor > 0)
    {
        return(Valor * (-1));
    }
    else
    {
        return Valor;
    }
    return ;
}
