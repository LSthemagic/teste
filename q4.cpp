/*Escreva um programa que leia um vetor de inteiros de 20 elementos e um inteiro x. Em seguida deverá
trocar por x todos os números do vetor menores que x. O programa deverá imprimir o vetor resultante.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese_Brazil");
    int vetor[20],x;
    int length = sizeof(vetor)/sizeof(vetor[0]);
    setlocale(LC_ALL,"portuguse_Brazil");
    for (int i = 0; i < length ; i++)
    {
        printf("Preencha com %iº número: ",i+1,"\n");
        scanf("%d",&vetor[i]);
    }
    printf("\nDigite um valor x para substituir os números menores que ele:\n");
    scanf("%d", &x);
    for (int i = 0; i < length; i++){
        if (vetor[i]<x){
            vetor[i]=x;
        }
        
    }
    printf("\t\t\t\tCasa de dados atualizada!");
    for (int i = 0; i < length; i++){
        printf("\n %iº posição, número %i",i+1,vetor[i]);
    }
    
    
    return 0;
}
