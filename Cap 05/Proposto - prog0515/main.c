#include <stdio.h>
#include <stdlib.h>
/*
                        //Descri��o da quest�o://

int Cubo(int x);
 Devolver o valor de x^3.


    (V) - Funcionando?
*/
//---------------------------------------------------------------------------------------
                        //Prot�tipos das fun��es://

int Cubo(int x);
//---------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");
//------
    int x;
//------
    printf("Insira o valor de x: ");
    scanf(" %d", &x);
//------
    printf("X^3 = %d", Cubo(x));
    return 0;
}
//---------------------------------------------------------------------------------------
                            //Fun��es://

int Cubo(int x)
{

    return(x * x * x);
}
