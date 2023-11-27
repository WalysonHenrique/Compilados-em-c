#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

void Ordenador(int *vetor)
{
    for(int i = 1; i < TAMANHO; i++)
    {
        int aux = i - 1;
        int chave = vetor[i];
        while(aux >= 0 && vetor[aux] > chave){
            vetor[aux + 1] = vetor[aux];
            aux = aux - 1;
        }
        vetor[aux + 1] = chave;
    }
    
}


void Preencher(int *vetor)
{
    for (int i = 0; i < TAMANHO; i++)
    {
        vetor[i] = rand() % 10 + 1;
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