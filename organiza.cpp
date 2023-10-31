/*Faça um programa que, dados um vetor de números inteiros e um valor, ambos fornecidos pelo usuário,
informe a posição da primeira ocorrência desse valor no vetor. Caso o valor informado não esteja no vetor,
o computador deve informar uma mensagem "Valor não encontrado". Primeiramente o programa deve
perguntar todos os números ao usuário, para somente então procurar pelo valor desejado.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese_Brazil");
    int vetorA[9], contador, numero;

    for (int i = 0; i < 9; i++)
    {
        printf("Digite um numero %d de 10:", i + 1);
        scanf("%d", &vetorA[i]);
    }
    printf("Informe um valor inteiro:");
    scanf("%d", &numero);

    for (int i = 0; i < 9; i++)
    {
        if (numero == vetorA[i])
        {
            contador++;
        }
    }

    for (int i = 0; i < 9; i++)
    {

        if (contador == vetorA[i])
        {
            printf("Valor não encontrado.");
        }
        else
        {
            printf("O numero %d apareceu %d vezes.", numero, contador);
        }
    }
}
