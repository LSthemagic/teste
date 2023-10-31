#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> 
int main() {
    srand(time(NULL));
	system("color 4f");
    int face[50];
    int face1=0,face2=0,face3=0,face4=0,face5=0,face6=0;
    int length = sizeof(face)/sizeof(face[0]);

    
    for (int i = 0; i < length; i++) {
        do {
            face[i] = (rand() % 6) + 1;
        } while (face[i] == 0);
        printf("%d\t", face[i]);
        Sleep(100); 
    }

   
    for (int i = 0; i < length; i++) {
        if (face[i] == 1) {
            face1++;
        }
        else if (face[i] == 2) {
            face2++;
        }
        else if (face[i] == 3) {
            face3++;
        }
        else if (face[i] == 4) {
            face4++;
        }
        else if (face[i] == 5) {
            face5++;
        }
        else if (face[i] == 6) {
            face6++;
        }
    }

    printf("\nFace 1: %i vezes\n", face1);
    printf("Face 2: %i vezes\n", face2);
    printf("Face 3: %i vezes\n", face3);
    printf("Face 4: %i vezes\n", face4);
    printf("Face 5: %i vezes\n", face5);
    printf("Face 6: %i vezes\n", face6);
	_sleep(5000);
	system("cls");
	system("color 2f");
    int ocorrencias[] = {face1, face2, face3, face4, face5, face6};
    int mais_vezes = 0, menos_vezes = 50, face_mais_ocorreu = 0, face_menos_ocorreu = 0;

   
    for (int i = 0; i < 6; i++) {
        if (ocorrencias[i] > mais_vezes) {
            mais_vezes = ocorrencias[i];
            face_mais_ocorreu = i + 1;
        }

       
        if (ocorrencias[i] < menos_vezes) {
            menos_vezes = ocorrencias[i];
            face_menos_ocorreu = i + 1;
        }
    }
	Beep(461,200);
    printf("Face que mais ocorreu: %i (%i vezes)\n", face_mais_ocorreu, mais_vezes);
    printf("Face que menos ocorreu: %i (%i vezes)\n", face_menos_ocorreu, menos_vezes);

    return 0;
}
