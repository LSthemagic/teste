#include <stdio.h>

int main() {
  
    float matriz[20][20];
    
    
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            matriz[i][j] = i + j; 
    }
    
   
    float somas[20] = {0};
    
   
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            somas[i] += matriz[i][j];
        }
    }
    
   
    printf("Somas das linhas:\n");
    for (int i = 0; i < 20; i++) {
        printf("Linha %d: %.2f\n", i + 1, somas[i]);
    }
    
    return 0;
}
}