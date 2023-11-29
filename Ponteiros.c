#include <stdio.h>


int main (void)
{
int vetor[10];
int *pvetor;

pvetor = vetor;

printf("Variavel apontando para o endereco usando &vetor[0] : %x\nVariavel pvetor apontando endereco usando pvetor : %x", &vetor[0], pvetor);

//Teste
    return 0;
}

/*#include <stdio.h>

// Função para trocar os valores de duas variáveis usando ponteiros
void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    // Chamando a função para trocar os valores usando ponteiros
    trocarValores(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
*/