#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int numDec, numBin, i;
    int *binario = NULL;
    printf("Digite um numero na base decimal : \n");
    scanf("%d", &numDec);
    binario = malloc(numDec * sizeof(int));
    for (i = 0; i > 1; i--)
    {
        numBin = numDec % 2;
        numDec = numDec / 2;
        binario[i] = numBin;
    }



    return 0;
}
