

#include <stdio.h>
#include <stdlib.h>

int matrisToplam(int[][5],int,int);

int main(int argc, char** argv) {
    
    int matris[5][5] = {0}, satir = 5, sutun = 5, i, j;
    
    for(i = 0; i < satir; i++)
    {
        for(j = 0; j < sutun; j++)
        {
            matris[i][j] = 2;
        }
    }
    printf("%d",matrisToplam(matris,satir,sutun));
    return 0;
}

int matrisToplam(int matris[][5],int satir, int sutun)
{
    int i,j,toplam = 0;
    
    for(i = 0; i < satir; i++)
    {
        for(j = 0; j < sutun; j++)
        {
            toplam += matris[i][j];
        }
    }
    return toplam;
}

