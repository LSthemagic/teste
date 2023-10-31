/*
Rotação: Faça um programa que leia uma lista de números inteiros digitados pelo usuário, armazenando-a
em um vetor A. Após ter armazenado todos os números no vetor, "rotacione" os seus elementos, de modo
que cada elemento passe a ocupar a posição seguinte à que se encontra no vetor. O último elemento do
vetor passa a ocupar a primeira posição do vetor.
Exemplo:
Lista armazenada: 2,5,9,3,5,4
Lista rotacionada: 4,2,5,9,3,5
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[10], vetorAux[10];

    
    for (int i = 0; i < 10; i++) {
        printf("Armazene dados aqui: ");
        scanf("%i", &vetor[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        vetorAux[i] = vetor[i];
    }

    
    for (int i = 0; i < 9; i++) {
        vetor[i + 1] = vetorAux[i];
    }

   
    vetor[0] = vetorAux[9];

    
    printf("Vetor rotacionado: ");
    for (int i = 0; i < 10; i++) {
        printf("%i ", vetor[i]);
    }

    return 0;
}


