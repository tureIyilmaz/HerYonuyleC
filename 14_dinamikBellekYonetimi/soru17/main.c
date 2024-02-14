#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** rastgeleMatrisOlustur(int, int);

int main(int argc, char** argv) {

    int **matris, satir = 0, sutun = 0;
    
    printf("Rastgele matrisin satir sayisini giriniz:");
    scanf("%d", &satir);
    
    printf("Rastgele matrisin sutun sayisini giriniz:");
    scanf("%d", &sutun);
    
    matris = rastgeleMatrisOlustur(satir,sutun);
    
    for(int i = 0; i < satir; i++)
    {
        for(int j = 0; j < sutun; j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
    
   
    for(int i = 0; i < satir; i++)
    {
        free(matris[i]);
    }
    free(matris);
    
    return (EXIT_SUCCESS);
}

int** rastgeleMatrisOlustur(int satir, int sutun)
{
    srand(time(NULL));
    
    int **matris;  
    
       
    matris = (int **)malloc(sizeof(int *) * satir);
    
    for(int i = 0; i < satir; i++)
    {
        matris[i] = (int *)malloc(sizeof(int) * sutun);
        
        for(int j = 0; j < sutun; j++)
        {
            matris[i][j] = rand() % 10;
        }
    }
       
    return matris;
}
