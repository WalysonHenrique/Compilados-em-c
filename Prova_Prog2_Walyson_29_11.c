#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

/*
void alocar(int linhas, int colunas, int **vetor)
{
    vetor = (int**)malloc(sizeof(int*)*colunas);
    for (int i = 0; i < colunas; i++)
    {
        vetor[i] = (int*)malloc(sizeof(int)*linhas);
    }
}
*/
void comparar(int **matriz)
{
    int policia[10][2] = {3,4,5,7,3,4,1,2,3,4,3,5};
    int contador = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (policia[i][j] == matriz[i][j])
            {
                contador++;
            }
        }


        printf("\n");
    }
    contador = (contador*10)/100;
    if (contador < 20)
    {
        printf("Neymarsson iconecnte");
    }
    else if (contador > 20 && contador < 31)
    {
        printf("Neymarsson vai a julgamento");
    }
    else if (contador > 30)
    {
        printf("Neymarsson acusado");
    }
    
    
}

int main()
{   
    int policia[10][2] = {3,4,5,7,3,4,1,2,3,4,3,5};
    int **neymarsson [10][2] = {3,4,5,7,3,4,1,2,3,2,3,2};
    //int contador = 0;
    printf("Time A     Time B\n"); 
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("  %d        ", policia[i][j]);
        }
        printf("\n");
    }
  
    comparar(**neymarsson);
    

    

    return 0;
}