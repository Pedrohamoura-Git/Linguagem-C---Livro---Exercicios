#include <stdio.h>
#include <stdlib.h>
/*
Devolver o VAL para n anos, � taxa t, definido atrav�s da equa��o:
    VAL = x/(1 + t) +  ...  + x/(1 + t)^n
*/
float pot(int n, float x, float t);

int main()
{
    printf("Hello world!\n\n");

    float x, t; //(1)//
    float VAL, div, mult, res_pot; //(2)//
    int cont, cont2; //(3)//
    int n; //(4)//

    //(5)//
    printf("VAL = x/(1 + t) +  ...  + x/(1 + t)^n");
    printf("\n\nInsira o x: ");
    scanf(" %f", &x);
    printf("\nInsira o t: ");
    scanf(" %f", &t);
    printf("\nInsira o n: ");
    scanf(" %d", &n);

    //(6)//
    for(cont = 1; cont <= n; cont ++)
    {
        //(7)//
        for(div = 0, cont2 = 1, mult = 1; cont2 <= cont; cont2 ++)
        {
            res_pot = pot(cont2, x, t); //(8)//
            //!(8.1)!//
            div = x / res_pot; //(9)//
        }
            VAL += div; //(10)//
            printf("\n%d - Ciclo:", cont);
            printf("\nres_pot = %f, div = %f, VAL = %f\n", res_pot, div, VAL);
    }
    return 0;
}

//Fun��o de Pot�ncia//
float pot(int n, float x, float t)
{
    float res_pot;
    int cont;

    for(cont = 1, res_pot = 1; cont <= n; cont ++)
    {
        res_pot *= (1 + t);
    }

    return res_pot;
}


/* Index de coment�rios

//(1)// Vari�veis usadas p/input e p/enviar p/as fun��es;

//(2)// Vari�veis usadas para salvar os valores confome a execu��o das respeti��es;

//(3)// Contadores para as repeti��es internas e externas;

//(4)// N�meros de repeti��es, equivalente ao expoente;

//(5)// Lendo e armazenando os Inputs do usu�rio;

//(6)// Respons�vel por, a cada ciclo, limitar o n� de repeti��es INTERNAS;

    Ex: n = 10
    1� repeti��o EXTERNA = 1 repeti��o INTERNAS;
    2� repeti��o EXTERNA = 2 repeti��es INTERNAS;
    ...
    10� repeti��o EXTERNA = 10 repeti��es INTERNAS;

//(7)// Respons�vel por calcular a pot. a soma e salvar o res. na vari�vel certa;

//(8)// Call da fun��o respons�vel por calcular a pot�ncia;

//!(8.1)!// Nunca usar a Call da fun��o para realizar opera��es complexas;
    Ex:
    int cont2;
    float x, t;
    div = x / pot(cont2, x, t);

O C n�o aceita todos os elementos de tipos diferentes para essas opera��es;

//(9)// Resultado das divis�es;

//(10)// Soma dos resultados anteriores.

}
*/
