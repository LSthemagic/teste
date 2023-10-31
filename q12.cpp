/*
Progressão aritmética: faça um programa que peça ao usuário uma lista de números inteiros de tamanho
também informado pelo usuário e armazene-a em um vetor. A seguir, calcule se esses números formam
uma progressão aritmética. Use apenas um vetor para resolver este exercício.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese_Brazil");
    int  qntd;
    char message[50];

    printf("Quantos números: ");
    scanf("%d", &qntd);
    int lista_numeros[qntd];
    
    for (int i = 0; i < qntd; i++) {
        printf("Preencha a cadeia de dados: ");
        scanf("%i", &lista_numeros[i]);
    }

    int razao = lista_numeros[1] - lista_numeros[0];
    int PA = 1;  

    for (int i = 1; i < qntd - 1; i++) {
        if (lista_numeros[i + 1] - lista_numeros[i] != razao) {
            PA = 0;  
            break;
        }
    }

    if (PA) {
        strcpy(message, "P.A encontrada");
    } else {
        strcpy(message, "P.A não encontrada");
    }

    printf("%s\n", message);
    return 0;
}
