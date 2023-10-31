#include <stdio.h>

int main() {
   
    int armazem[3][50];
    
   
    for (int i = 0; i < 3; i++) {
        printf("Armazem %d:\n", i + 1);
        for (int j = 0; j < 50; j++) {
            printf("Produto %d: ", j + 1);
            scanf("%d", &armazem[i][j]);
        }
    }
    
  
    for (int i = 0; i < 3; i++) {
        int totalArmazem = 0;
        for (int j = 0; j < 50; j++) {
            totalArmazem += armazem[i][j];
        }
        printf("Total de itens no Armazem %d: %d\n", i + 1, totalArmazem);
    }
    
    
    printf("Quantidade de cada produto em estoque:\n");
    for (int j = 0; j < 50; j++) {
        int totalProduto = 0;
        for (int i = 0; i < 3; i++) {
            totalProduto += armazem[i][j];
        }
        printf("Produto %d: %d\n", j + 1, totalProduto);
    }
    
   
    int produtoMaiorEstoque = 0;
    int maiorEstoque = 0;
    for (int j = 0; j < 50; j++) {
        int totalProduto = 0;
        for (int i = 0; i < 3; i++) {
            totalProduto += armazem[i][j];
        }
        if (totalProduto > maiorEstoque) {
            maiorEstoque = totalProduto;
            produtoMaiorEstoque = j + 1;
        }
    }
    
    printf("Produto com maior estoque: Produto %d\n", produtoMaiorEstoque);
    
    return 0;
}
