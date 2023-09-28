#include <stdio.h>

int main(void)
{
    int valor_atual, num;
    printf("Digite um numero : ");
    scanf("%i", &num);

    valor_atual = num;
    // EXIBIÇÃO
    printf("%i! = %i", valor_atual, valor_atual);

    for (int i = valor_atual - 1; i > 0; i--)
    {
        printf(" x %i", i);
        //CÁLCULO
        valor_atual = valor_atual * i;
    }
    printf("\nO valor de %i fatorial eh %i", num, valor_atual);

    return 0;
}