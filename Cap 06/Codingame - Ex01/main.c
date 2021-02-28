#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
                            //Descri��o da quest�o//

Fa�a um programa C para calular o n�mero de l�mpadas 60 watts necess�rias para um determinado c�modo.
O programa dever� ler um conjunto de informa��es, tais como: tipo, largura e comprimento do c�modo.
 O programa termina quando o tipo de c�modo for igual -1. A tabela abaixo mostra, para cada tipo de c�modo, a quantidade de watts por metro quadrado.

Dica: Use uma estrutura struct para agrupar logicamente as informa��es de um comodo (int tipo de comodo, float largura e float altura).
Usar uma fun��o (float CalulaArea) para calcular a �rea do c�modo. Os atributos de entrada ser�o a largura e comprimento do c�modo.
Usar uma fun��o (float Lampada) para calcular a quantidade de l�mpadas neces�rias para o c�modo. Os atributos de entrada ser�o o tipo de c�modo e a metragem (em m2) do c�modo.

Obs: Utilize a fun��o ceil(numero) em #include math.h para realizar o arrendondamento para cima.


    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Prot�tipos das fun��es//

float Calcular_Area(float largura, float comprimento);
float N_Lampadas(float area, int potencia_lampada, int tipo_comodo);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo vari�veis
    float area;
    float largura, comprimento;
    int potencia_lampada = 0;
    int tipo_comodo = 0;

//------ Armazenando o input do usu�rio
    while(tipo_comodo != -1)
    {
        printf("\nInsira o comprimento do comodo(m): ");
        scanf(" %f", &comprimento);
        printf("\nInsira a largura do comodo(m): ");
        scanf(" %f", &largura);
        printf("\nInsira o tipo do comodo (0-4): ");
        scanf(" %d", &tipo_comodo);
        printf("\nInsira a potencia da lampada desejada: ");
        scanf(" %d", &potencia_lampada);

//------//------ Calculando a �rea
    area = Calcular_Area(largura, comprimento);
    printf("\nArea: %.2fm2", area);

//------//------ Calculando a quantidade de l�mpadas
    printf("\nNumero de lampadas para o comodo informado: %.1f", N_Lampadas(area, potencia_lampada, tipo_comodo));

//------ Menu: continuar ou sair
    printf("\n\nContinuar: [Qualquer numero]  |  Sair: [-1]");
    printf("\nNumero: ");
    scanf(" %d", &tipo_comodo);

    }
    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Fun��es//

float Calcular_Area(float largura, float comprimento)
{
//------ Definindo vari�veis
    float area;

//------ Calculando area
    area = largura * comprimento;

//------ Retornando valor
    return area;
}

float N_Lampadas(float area, int potencia_lampada, int tipo_comodo)
{
//------ Definindo vari�veis
    int Potencia_Tipo_Comodo[5] = {12, 15, 18, 20, 22};
    float pot_total = 0;
    float quant = 0;

//------ Calculando quantidade de l�mpadas necess�rias
    pot_total = (area * Potencia_Tipo_Comodo[tipo_comodo]);
    quant = pot_total / potencia_lampada;
    printf("\npot_t: %f\nquant: %f", pot_total, quant);

//------ Retornando valor
    return ceil(quant);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*                          //COMENT�RIOS//

//(1)//
    Ex:
"Quando sair do if...incrementa��o seja = 0."

//(2)//
"..."

*/
