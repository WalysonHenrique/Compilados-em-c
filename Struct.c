#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50




typedef struct
{
    int dia, mes, ano;
} data;


typedef struct
{
    char nome[50];
    char matricula[20];
    int idade;
    data nascimento;
} aluno;





int main()
{
    aluno aluno;
    int nasc = 16;
    aluno.nascimento.dia = nasc;
    printf("nascimento : %i", aluno.nascimento.dia);

    return 0;
}