#include <stdio.h>
#include <stdlib.h>


int** transposeBul(int**, int, int);

int main(int argc, char** argv) {

    int satir, sutun, ** matris;
    
    printf("Matrisin satir sayisini giriniz: ");
    scanf("%d", &satir);
    
    printf("Matrisin sutun sayisini giriniz: ");
    scanf("%d", &sutun);
    
    matris = (int **)malloc(sizeof(int *) * satir);
    
    for(int i = 0; i < satir; i++)
    {
        matris[i] = (int *)malloc(sizeof(int) * sutun);
    }
    
    for(int i = 0; i < satir; i++)
    {
        for(int j = 0; j < sutun; j++)
        {
            printf("Matrisin %d. satir %d. sutunu = ",i + 1, j + 1);
            scanf("%d", &matris[i][j]); 
        }
    }
    
    matris = transposeBul(matris, satir, sutun);
    
    for(int i = 0; i < sutun; i++)
    {
        for(int j = 0; j < satir; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    
    
    for (int i = 0; i < satir; i++) 
    {s
        free(matris[i]);
    }
    free(matris);
   
    return (EXIT_SUCCESS);
}

int** transposeBul(int** matris, int satir, int sutun)
{
    int **transposeMatris;
    
    transposeMatris = (int **)calloc(sutun, sizeof(int *));
    
    for(int i = 0; i < sutun; i++)
    {
        transposeMatris[i] = (int *)calloc(satir, sizeof(int));
    }
    
    for(int i = 0; i < sutun; i++)
    {
        for(int j = 0; j < satir; j++)
        {
            transposeMatris[i][j] = matris[j][i];
        }
    }
    
    return transposeMatris;
}