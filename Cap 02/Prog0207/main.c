#include <stdio.h>
#include <stdlib.h>
//#define PI = 3.14;
/*Calcular per�metro e �rea de uma circunfer�ncia*/
int main()
{
    float area, perimetro, raio;
    float pi = 3.14;

    printf("Hello world!\n\n");

    printf("Informe o raio da circunferencia: ");
    scanf("%f", &raio);
    perimetro = 2 * pi * raio;
    area = pi * (raio * raio);
    printf("\nCerto. \nCom base no raio informado, o perimetro da circunferencia, eh: %.2f e a sua area: %.2f\n", perimetro, area);



    return 0;
}
