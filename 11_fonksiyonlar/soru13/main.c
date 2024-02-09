#include <stdio.h>
#include <stdlib.h>

void matrisToplam(int[][5],int,int);

int main(int argc, char** argv) {
    
    int matris[5][5] = {0}, satir = 5, sutun = 5, i, j;
    
    for(i = 0; i < satir; i++)
    {
        for(j = 0; j < sutun; j++)
        {
            matris[i][j] = rand()%10;
        }
    }
    matrisToplam(matris,satir,sutun);
    return 0;
}

void matrisToplam(int matris[][5],int satir, int sutun)
{
    int i,j,toplam = 0;
    int satirToplam[5] = {0},sutunToplam[5] = {0};
    
    for(i = 0; i < satir; i++)
    {
        for(j = 0; j < sutun; j++)
        {
            
            satirToplam[i] = matris[i][j];
            sutunToplam[j] = matris[i][j];
        }
    }
    for(i = 0; i < satir; i++)
    {
        printf("%d. satirin toplami = %d\n", i+1, satirToplam[i]);
    }
        for(i = 0; i < satir; i++)
    {
        printf("%d. sutunun toplami = %d\n", i+1, sutunToplam[i]);
    }
}

