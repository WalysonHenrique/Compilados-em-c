#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int numDec, numBin, i = 0, tamanhaArray;
    int *binario = NULL;
    printf("Digite um numero na base decimal : \n");
    scanf("%d", &numDec);
    binario = malloc(numDec * sizeof(int));
    while (numDec > (1 << tamanhaArray))
      {
        tamanhaArray++;
      } 
    binario = malloc(tamanhaArray * sizeof(int));    
    while (numDec >= 1)
      {
        numBin = numDec % 2;
        numDec = numDec / 2;
        binario[i] = numBin;
        i++;
      }
    
    return 0;
}
