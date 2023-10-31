#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Faça um programa que leia dois vetores (A e B) de 50 posições de números reais. O programa deve,
então, dividir todos os elementos de A pelo menor elemento de B e armazenar em A.
*/
int main() {
    setlocale(LC_ALL,"portuguese_Brazil"); 
    int vetorA[50],vetorB[50],menor;
    int legth = sizeof(vetorA)/sizeof(vetorA[0]);
    for(int i=0;i<legth;i++){
        printf("Digite o %dº valor do VETOR A: ",i+1);
        scanf("%i",&vetorA[i]);
    }
    for(int i=0;i<legth;i++){
        printf("\n\nDigite o %dº valor do VETOR B: ",i+1);
        scanf("%i",&vetorB[i]);
    }
    for(int i=0;i<legth;i++){
        menor = vetorB[0];
        if (vetorB[i]<menor){
            menor = vetorB[i];
        }
    }
    for(int i=0;i<legth;i++){
        vetorA[i]=vetorA[i]/menor;
    }
    for(int i=0;i<legth;i++){
        printf("\nVETOR A com as divisões: %i\n",vetorA[i]);
    }
    return 0;
}