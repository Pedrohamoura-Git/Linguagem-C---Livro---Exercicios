#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N_QUESTOES 3
/*
                            //Descri��o da quest�o//

 Imprimir o n�mero de acertos de cada aluno (n) que realizou uma prova
com 30 quest�es; cada qual com cinco alternativas identificadas por:
A, B, C, D e E.
 Para tal, leia o gabarito e compare com as respostas dos alunos.

    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Prot�tipos das fun��es//

void funcao();
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo vari�veis

    char gabarito[N_QUESTOES] = {0};
    char resposta_aluno[N_QUESTOES] = {0};
    int i, j, n, pontuacao;

//------ Armazenando o input dos usu�rios

//------//------ numero de alunos
    printf("Quantos alunos fizeram a prova? ");
    scanf(" %d", &n);

//------//------ Gabarito da prova
    printf("\nInsira, a seguir, o gabarito da prova: \n");
    for(i = 0; i < N_QUESTOES; i++)
    {
        printf("%d questao: ", i+1);
        scanf(" %c", &gabarito[i]);
        gabarito[i] = toupper(gabarito[i]);
        //printf("\nGabarito %d quest�o: %c", i, gabarito); // Debug do gabarito

    }

//------//------ Resposta dos alunos
    for(i = 0; i < n; i++)
    {
        pontuacao = 0;
        //printf("\nPontuacao: %d", pontuacao); // Debug da pontua��o
        printf("\nAgora, vamos conferir as respostas do %d aluno.\n\n", i+1);
        for(j = 0; j < N_QUESTOES; j++)
        {
            printf("Resposta da %d questao: ", j+1);
            scanf(" %c", &resposta_aluno[j]);
            resposta_aluno[j] = toupper(resposta_aluno[j]);
 // Debug da resposta_aluno

//------//------ Comparando as respostas com o gabarito
            if(resposta_aluno[j] == gabarito[j])
            {
                pontuacao++;
                //printf("Pontuacao: %d\n", pontuacao); // Debug da pontua��o
            }
            else
            {
                pontuacao += 0;
                //printf("Pontuacao: %d\n", pontuacao); // Debug da pontua��o
            }
        }

//------//------ Imprimindo as pontua��es dos alunos
        for(j = 0; j < N_QUESTOES; j++)
        {
            printf("\nResposta: %c -- Gabarito: %c", resposta_aluno[j], gabarito[j]);
        }
        printf("\nO %d aluno conseguiu %d pontos.\n\n", i+1, pontuacao);
    }

//------ The End

    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Fun��es//

void funcao()
{

    return;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*                          //COMENT�RIOS//

//(1)//
    Ex:
"Quando sair do if...incrementa��o seja = 0."

//(2)//
"..."

*/
