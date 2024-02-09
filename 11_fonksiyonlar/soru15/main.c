#include <stdio.h>
#include <stdlib.h>

int diagonalToplam(int[][5]);

int main(int argc, char** argv) {
    
    int matris[5][5] = {0}, satir = 5, sutun = 5, i, j;
    
    for(i = 0; i < satir; i++){
        for(j = 0; j < sutun; j++){
            matris[i][j] = rand()%100;
            printf("%3d ", matris[i][j]);
        }
        printf("\n");
    }
    printf("Diagonallerin toplami: %d\n",diagonalToplam(matris));
    return 0;
}

int diagonalToplam(int matris[][5])
{
    int toplam = 0;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j){
                toplam += matris[i][j];
            }           
        }       
    }

    
    return toplam;
}

