/*
Escrever um programa que lê 2 vetores X[10] e Y[10]. Crie, a seguir, um vetor Z que seja a intersecção
entre X e Y. Imprima o vetor Z. Você pode assumir que no mesmo vetor, não há repetições.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int x[10], y[10], z[10];
    int length = sizeof(x) / sizeof(x[0]);

    printf("Preencha os dados abaixo sem repetir os números para o vetor X: \n");
    for (int i = 0; i < length; i++){
        printf("Preencha X[%d]: ", i);
        scanf("%d", &x[i]);
    }

    printf("Preencha os dados abaixo sem repetir os números para o vetor Y: \n");
    for (int i = 0; i < length; i++){
        printf("Preencha Y[%d]: ", i);
        scanf("%d", &y[i]);
    }

    int count = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (x[i] == y[j]) {
                z[count] = x[i];
                count++;
                break;
            }
        }
    }

    printf("A interseção dos vetores X e Y é:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", z[i]);
    }

    return 0;
}
