#include <stdio.h>
#include <stdlib.h>

void diagKucuk(int[][5],int,int);

int main(int argc, char** argv) {
    
    int matris[5][5] = {0}, satir = 5, sutun = 5, i, j;
       
    for(i = 0; i < satir; i++){
        for(j = 0; j < sutun; j++){
            matris[i][j] = rand()%100;
            printf("%3d ", matris[i][j]);
        }
        printf("\n");
    }
    diagKucuk(matris,satir,sutun);
    return 0;
}

void diagKucuk(int matris[][5],int satir, int sutun)
{
    int i,j,toplam = 0, diag[5] = {0},gecici;
    
    for(i = 0; i < satir; i++){
        for(j = 0; j < sutun; j++){
            if(i == j){
                diag[i] = matris[i][j];
            }           
        }       
    }
    for(i = 0; i<satir; i++){
        for(j = 0; j < satir-1-i; j++){
            if(diag[j] > diag[j+1])
            {
              gecici = diag[j];  
              diag[j] = diag[j+1];
              diag[j+1] = gecici;
            }    
        }  
    }
    
    printf("En kucuk diagonel: %d\n",diag[0]);
}

