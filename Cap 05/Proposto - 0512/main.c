#include <stdio.h>
#include <stdlib.h>
/*
                        //Descri��o da quest�o://


int is_square(int x, int y)

 Devolve um valor l�gico que indica se x � ou n�o igual a y^2.

    (V) - Funcionando?

*/
//---------------------------------------------------------------------------------------
                        //Prot�tipos das fun��es://

int is_square(int x, int y);
//---------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");
//------
    int x, y;
//------
    printf("Insira o valor de x: ");
    scanf(" %d", &x);
    printf("Insira o valor de y: ");
    scanf(" %d", &y);
    printf("x = y^2? %d", is_square(x, y));
//------
    switch(is_square(x, y))
    {
        case 1:
        {
            printf("\nVerdadeiro.\n\n");
        }
        case 0:
        {
            printf("\nFalso.\n\n");
        }
    }
    return 0;
}
//---------------------------------------------------------------------------------------
                        //Fun��es://

int is_square(int x, int y)
{
    return(x == y * y);
}
