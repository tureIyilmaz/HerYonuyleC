
#include <stdio.h>
#include <stdlib.h>

int** matrisCarp(int**, int, int, int**, int, int);

int main(int argc, char** argv) {
    
    int **sonucMatrisi, **matris1, **matris2, satir1 = 0, satir2 = 0, sutun1 = 0, sutun2 = 0;
    
    printf("Carpmak istediginiz 1. matrisin satir sayisini giriniz: ");
    scanf("%d", &satir1);
    printf("Carpmak istediginiz 1. matrisin sutun sayisini giriniz: ");
    scanf("%d", &sutun1);
    printf("Carpmak istediginiz 2. matrisin satir sayisini giriniz: ");
    scanf("%d", &satir2);
    printf("Carpmak istediginiz 2. matrisin sutun sayisini giriniz: ");
    scanf("%d", &sutun2);
    
    matris1 = (int **)malloc(sizeof(int *) * satir1);
    matris2 = (int **)malloc(sizeof(int *) * satir2);
    
    if(sutun1 != satir2)
    {
        printf("Bu matrisler carpilmaya uygun degil");
    }
    else
    {
        for(int i = 0; i < satir1; i++)
        {
            matris1[i] = (int *)malloc(sizeof(int) * sutun1);
            for(int j = 0; j < sutun1; j++)
            {
                printf("1. matrisin %d. satiri %d. sutununun degerini giriniz: ",i + 1, j + 1);
                scanf("%d", &matris1[i][j]);
            }
        }
    
        for(int i = 0; i < satir2; i++)
        {
            matris2[i] = (int *)malloc(sizeof(int) * sutun2);
            for(int j = 0; j < sutun2; j++)
            {
                printf("2. matrisin %d. satiri %d. sutununun degerini giriniz: ",i + 1, j + 1);
             scanf("%d", &matris2[i][j]);
            }
        }
    }
    
    sonucMatrisi = matrisCarp(matris1, satir1, sutun1, matris2, satir2, sutun2);
    
    
    for(int i = 0; i < satir1; i++)
    {
        for(int j = 0; j < sutun2; j++)
        {
            printf("%3d ",sonucMatrisi[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < satir1; i++)
    {
        free(matris1[i]);
        free(sonucMatrisi[i]);
    }
    for(int i = 0; i < satir2; i++)
    {
        free(matris2[i]);
    }
    free(matris1);
    free(matris1);
    free(sonucMatrisi);
    return (EXIT_SUCCESS);
}

int** matrisCarp(int **matris1, int satir1, int sutun1, int **matris2, int satir2, int sutun2)
{
    int **carpimSonucu;
    int toplam = 0;
    
    if( sutun1 != satir2)
    {
        return 0;  // Matrisler çarpılamaz
    }
    
    carpimSonucu = (int **)malloc(sizeof(int*) * satir1);
    
    for(int i = 0; i < satir1; i++)
    {
        carpimSonucu[i] = (int **)malloc(sizeof(int*) * sutun2);
    }
    
    for(int k = 0; k < satir1; k++)
    {           
        for(int i = 0; i < sutun2; i++)
        {
            toplam = 0;
            for(int j = 0; j < sutun1; j++)
            {
                toplam += matris1[k][j] * matris2[j][i];               
            }    
            carpimSonucu[k][i] = toplam;
        }        
    }
    
    return carpimSonucu;    
}
