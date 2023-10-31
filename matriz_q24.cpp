#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    int matrizA[4][4];
    int menor, maior,soma_par,soma_impar;
	setlocale(LC_ALL,"portuguese_Brazil");
	system("color ed");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Preencha a matriz [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

   
    menor = matrizA[0][0];
    maior = matrizA[0][0];

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrizA[i][j] < menor) {
                menor = matrizA[i][j];
            }
            if (matrizA[i][j] > maior) {
                maior = matrizA[i][j];
            }
            if(i%2==0){
            	soma_par += matrizA[i][j];
			}else{
				soma_impar += matrizA[i][j];
			}
        }
    }
    soma_impar += maior;
	soma_par += maior;
    printf("Menor elemento: %i\n", menor);
    printf("Maior elemento: %i\n", maior);
	printf("Soma Par: %i\n", soma_par);
	printf("Soma �mpar: %i\n", soma_impar);
    return 0;
}

