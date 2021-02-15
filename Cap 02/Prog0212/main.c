#include <stdio.h>
#include <stdlib.h>
//Ler dois caract�res usando a fun��o Scanf; Mostrar os dois caract�res em aspas simples.

int main()
{
    char letra1, letra2;

    printf("Hello world!\n\n");

    printf("Escreva um caractere: ");
        scanf("%c", &letra1);
    printf("Escreva outro caractere: ");
        //scanf("%c", &letra2);//1
        scanf(" %c", &letra2);
    printf("\nO primeiro e o segundo caracteres foram, respectivamente: '%c' e '%c'.\n", letra1, letra2);
    return 0;
}
/*Note que o programa aparentemente n�o reconhece o segundo scanf. Isso acontece porque quando apertamos o enter no primeiro input, o programa o reconhece como j� sendo o segundo Input.
Para evitar isso, basta acrescentar um espa�o em branco logo antes do "%c" para que o programa ignore o efeito dos espa�os, "New Lines" e Tabs.
*/
