#include <stdio.h>
#include <stdlib.h>

void satirBuyukBul(int matris[][5], int satir, int sutun);
void sutunBuyukBul(int matris[][5], int satir, int sutun);
int main () {
    
    int matris[5][5] = {};
    
    for(int i = 0; i < 5; i ++) {
        for(int j = 0; j < 5; j++) {
            matris[i][j] = rand() % 100;
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    satirBuyukBul(matris, 5, 5);
    sutunBuyukBul(matris, 5, 5);
    return 0;    
}

void satirBuyukBul(int matris[][5], int satir, int sutun) {
// Burada sıralayıp yaptım, sutunBuyukBuldaki işlem daha mantıklı gibi    
    int gecici = 0;
    
    for(int i = 0; i < satir; i ++) {
        for(int j = 0; j < sutun - 1; j++) {
            for(int k = 0; k < sutun - 1; k++) {
                if(matris[i][k] < matris[i][k + 1]) {
                    gecici = matris[i][k];
                    matris[i][k] = matris[i][k + 1];
                    matris[i][k + 1] = gecici;
                }
            }
        }
    }
    for(int i = 0; i < satir; i ++) {
        printf("%d. satirin en buyuk elemani %d\n",i + 1 ,matris[i][0]);
    }
    
}

void sutunBuyukBul(int matris[][5], int satir, int sutun) {
    int enBuyukEleman;

    for (int j = 0; j < sutun; j++) {
        enBuyukEleman = matris[0][j]; 
        for (int i = 1; i < satir; i++) {
            if (matris[i][j] > enBuyukEleman) {
                enBuyukEleman = matris[i][j];
            }
        }
        printf("%d. sutunun en buyuk elemani: %d\n", j + 1, enBuyukEleman);
    }
}