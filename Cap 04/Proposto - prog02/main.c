#include <stdio.h>
#include <stdlib.h>
//Escreva genericamente ao la�o do...while;
int main()
{
    printf("Hello world!\n\n");


    int num = 1;
    do
    {
        printf("Instrucao Do...While\n");
        num ++;
    }
    while (num <= 1);

    while (num <= 2) //Depois do primeiro la�o o num = 2.
    {
        printf("\nInstrucao While\n");
        num ++;
    }

    for (num; num = 3; num ++)
    {
        printf("\nInstrucao FOR\n")
        num ++;
    }

    while (num = 4);
    {
        printf("\nInstru��o For - While\n")

    }
    return 0;
}
