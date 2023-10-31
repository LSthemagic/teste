// 20. Escreva um programa que leia números inteiros e armazene-os em uma matriz 50x50 e calcule e imprima
// a média dos elementos da diagonal principal.
// Dado:
// Diagonal principal

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int matriz[50][50],sum=0,elementos=0;
    double media=0;
    int length = sizeof(matriz)/sizeof(matriz[0]);

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            printf("Preencha a matriz [%d][%d]:\t ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (i==j){
                sum += matriz[i][j];
                elementos++;
            } 
        }
    }
    int vetorDiagonal[elementos];
    system("cls");
    printf("Sua matriz: \n");
    for (int i = 0; i < length; i++){
        printf("\n");
        for (int j = 0; j < length; j++){
            printf("[%d]",matriz[i][j]);
        }
    }
    printf("\n\nNúmeros na diagonal: \n");
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (i==j){
                vetorDiagonal[i] = matriz[i][j];
            } 
        }
        printf("[%d]",vetorDiagonal[i]);
    }
    media = sum/elementos;
    printf("\nA Media da Diagonal Principal e %.2lf\n",media);
    
    return 0;
}

