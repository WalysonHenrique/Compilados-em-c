//Fatorial 
/*
#include <stdio.h>

int fatorial(int n) {
    // Caso base: fatorial de 0 ou 1 é 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Chamada recursiva
        return n * fatorial(n - 1);
    }
}

int main() {
    // Exemplo de uso
    int numero = 5;
    int resultado = fatorial(numero);
    printf("O fatorial de %d é %d\n", numero, resultado);

    return 0;
}

*/


// Soma
/*
#include <stdio.h>

int soma(int n) {
    // Caso base: a soma de 0 é 0
    if (n == 0) {
        return 0;
    } else {
        // Chamada recursiva para calcular a soma dos números de 1 até n
        return n + soma(n - 1);
    }
}

int main() {
    // Exemplo de uso
    int numero = 5;
    int resultado = soma(numero);
    printf("A soma dos números de 1 até %d é %d\n", numero, resultado);

    return 0;
}

*/


// Fibonacci

#include <stdio.h>

int fibonacci(int n) {
    // Caso base: os primeiros dois termos da sequência são 0 e 1
    if (n <= 1) {
        return n;
    } else {
        // Chamada recursiva para calcular os termos subsequentes
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    // Exemplo de uso
    int numero = 7;
    int resultado = fibonacci(numero);
    printf("O termo %d da sequência de Fibonacci é %d\n", numero, resultado);

    return 0;
}
