
#include <stdio.h>
#include <stdlib.h>


void matrisBellegeIadeEt(int **, int);

int main(int argc, char** argv) {

    int **matris, satir = 0, sutun = 0;
    
    printf("Matrisin satir sayisini giriniz: ");
    scanf("%d", &satir);
     printf("Matrisin sutun sayisini giriniz: ");
    scanf("%d", &sutun);
    
    matris = (int **)malloc(sizeof(int*) * satir);
    
    for(int i = 0; i < satir; i++)
    {
        matris[i] = (int *)malloc(sizeof(int) * sutun);
        for(int j = 0; j < sutun; j++)
        {
            printf("%d. satirin %d. sutununu giriniz:", i + 1, j + 1);
            scanf("%d", &matris[i][j]); 
        }
    }
    matrisBellegeIadeEt(matris, satir);
            
    return (EXIT_SUCCESS);
}

void matrisBellegeIadeEt(int ** matris, int satir)
{
    for(int i = 0; i < satir; i++)
    {
        free(matris[i]);
    }
    free(matris);
}

