#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <windows.h>
/*
Faça um programa que, dados um vetor de números inteiros e um valor, ambos fornecidos pelo usuário,
informe a posição da primeira ocorrência desse valor no vetor. Caso o valor informado não esteja no vetor,
o computador deve informar uma mensagem "Valor não encontrado". Primeiramente o programa deve
perguntar todos os números ao usuário, para somente então procurar pelo valor desejado.

*/
int main()
{
    int vetor_Int[100], qntd, numberSearch;
    setlocale(LC_ALL, "portuguese_Brazil");
    system("color ed");
    printf("Você irá preencher com quantos números?\n");
    scanf("%i", &qntd);
    system("cls");
    system("color de");
    printf("Preencha o armazenador de dados abaixo:\n\n");
    for (int i = 0; i < qntd; i++)
    {
        printf("\n%iº número: ", i + 1);
        scanf("%i", &vetor_Int[i]);
    }
    system("cls");
    printf("Hora de pesquisar!\n");
    printf("\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
    printf("Qual valor você deseja encontrar?\n");
    scanf("%i", &numberSearch);
    system("cls");
    system("color 7f");
    int posicaoEncontrada, numberEncontrado;
    for (int j = 0; j < qntd; j++)
    {
        if (vetor_Int[j] == numberSearch)
        {
            numberEncontrado = numberSearch;
            posicaoEncontrada = j + 1;
        }
        else if (vetor_Int[j] != numberSearch)
        {
            numberEncontrado = NULL;
        }
    }
    
    if (posicaoEncontrada == NULL || numberEncontrado != numberSearch)
    {
    	int notas[] = {523, 587, 659, 698, 784, 880};
        int duracao = 500;
        
        for (int i = 0; i < 6; ++i)
        {
        	
            Beep(notas[i], duracao);
            Sleep(100);
        }
        system("color 4f");
        printf("Valor %i não encontrado.\n", numberSearch);
        Beep(493, 500);
    }
    else
    {
        
        int notas[] = {523, 587, 659, 698, 784, 880};
        int duracao = 500;
        
        for (int i = 0; i < 6; ++i)
        {
        	
            Beep(notas[i], duracao);
            Sleep(100);
        }
		system("color 2f");
        printf("Valor %i encontrado na posição %i", numberEncontrado, posicaoEncontrada);
    }

    return 0;
}
