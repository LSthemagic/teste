// Escreva um programa que leia um número inteiro e uma matriz 4X4 de inteiros e obtenha uma segunda
// matriz resultado do produto da matriz pelo número. Imprima a matriz resultante.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main()
{
    int numberInt;
    int matriz[4][4], matrizResult[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("\nInsira o elemento [%d,%d] da matriz: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nInsira o valor para multiplicar pela matriz: ");
    scanf("%d", &numberInt);
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            matrizResult[i][j] = matriz[i][j]*numberInt;
        }
    }
    system("cls");
    _beep(461,200);
    printf("\nMatriz primitiva: \n");
    for (int i = 0; i < 4; i++){
        printf("\n");
        for (int j = 0; j < 4; j++){
            printf("[%d]",matriz[i][j]);   
        }
    }

    printf("\nMatriz resultante: \n");
    for (int i = 0; i < 4; i++){
        printf("\n");
        for (int j = 0; j < 4; j++){
            printf("[%d]",matrizResult[i][j]);   
        }
    }

    return 0;
}