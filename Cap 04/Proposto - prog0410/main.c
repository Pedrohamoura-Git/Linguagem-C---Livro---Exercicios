#include <stdio.h>
#include <stdlib.h>
//Ler n�mero do usu�rio at� que ele informe um valor entre 1 e 100.
int main()
{
    printf("Hello world!\n\n");

    int num;

    do
        {
            printf("Insira um numero inteiro: ");
            scanf(" %d", &num);
        }
    while (num < 2 || num > 99);

    return 0;
}
