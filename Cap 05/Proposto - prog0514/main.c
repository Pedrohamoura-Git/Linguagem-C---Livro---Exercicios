#include <stdio.h>
#include <stdlib.h>
/*
                        //Descri��o da quest�o://


int is_special(int x)
 Devolver um valor l�gico que indica se o dobro de x � ou n�o igual a x^2

    (V) - Funcionando?
*/
//---------------------------------------------------------------------------------------
                        //Prot�tipos das fun��es://

int is_special(int x);
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
    printf("2x = x^2? %d\n", is_special(x));
//------
    switch(is_special(x))
    {
        case 0:
        {
            printf("\nFalso.\n");
            break;
        }
        case 1:
        {
            printf("\nVerdadeiro.\n");
            break;
        }
    }
    return 0;
}
//---------------------------------------------------------------------------------------
                            //Fun��es://

int is_special(int x)
{
    return(2*x == (x * x));
}
