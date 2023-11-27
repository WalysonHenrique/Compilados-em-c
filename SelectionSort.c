#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 5

void Ordenador(int *vetor)
{
    int aux = 0;
    int contador = 0;
    while (contador < TAMANHO - 1)
    {
        aux = contador;
        for (int i = contador + 1; i < TAMANHO; i++)
        {
            if (vetor[i] < vetor[aux])
            {
                aux = i;
            }
        }
        // Troca os valores mínimo (encontrado em aux) com o valor na posição contador
        int temp = vetor[contador];
        vetor[contador] = vetor[aux];
        vetor[aux] = temp;
        contador++;
    }
}


void Preencher(int *vetor)
{
    for (int i = 0; i < TAMANHO; i++)
    {
        vetor[i] = rand() % 5 + 1;
    }
}

void Printar(int *vetor)
{
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("[%i]  ", vetor[i]);
    }
}


int main()
{

    srand(time(NULL));
    int vetor[TAMANHO];
    Preencher(vetor);
    Printar(vetor);
    Ordenador(vetor);
    printf("Depois de orndenado \n\n\n");
    Printar(vetor);
    return 0;
}