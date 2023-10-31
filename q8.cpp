/*
Escrever um programa que leia o limite dos 2000 clientes de um banco e aumente o limite de todos os
clientes que possuam o limite atual maior do que R$1.000,00 em 20% do valor limite atual. Ao final, exibir
os limites de todos os clientes atualizados e o número de clientes que receberam este acréscimo no limite.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void calcularAcrescimo(){
    double limite_cliente[2000];
    int clientes_acrescimo = 0;
    int length = sizeof(limite_cliente)/sizeof(limite_cliente[0]);
    for (int i=0;i<length;i++){
        printf("Digite o limite do %iº cliente : ",i+1);
        scanf("%lf",&limite_cliente[i]);
    }
    for (int j=0;j<length;j++) {
        if (limite_cliente[j] > 1000) {
            limite_cliente[j] = limite_cliente[j] + (limite_cliente[j] * 0.2);
            clientes_acrescimo++;
        }
    }
    for (int i = 0; i < length; i++){
        printf("\nO novo limite do %iº cliente é: %.2f\n",i+1,limite_cliente[i]);
    }
    
    printf("A quantidade de clientes beneficiados foi %i" ,clientes_acrescimo);
}
int main() {
    
    setlocale(LC_ALL,"Portuguese");
    calcularAcrescimo();
    return 0;
}
