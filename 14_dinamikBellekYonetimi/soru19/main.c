#include <stdio.h>
#include <stdlib.h>

int kareMatrisEsitMi(int**, int**, int);

int main(int argc, char** argv) {

    int **matris1, **matris2, boyut = 0;
    
    printf("Esit olup olmadigini sorguladiginiz matris kac boyutlu:");
    scanf("%d", &boyut);
    
    matris1 = (int **)calloc(boyut, sizeof(int*));
    matris2 = (int **)calloc(boyut, sizeof(int*));
    
    for(int i = 0; i < boyut; i++)
    {
        matris1[i] = (int *)calloc(boyut, sizeof(int));
        matris2[i] = (int *)calloc(boyut, sizeof(int));
        for(int j = 0; j < boyut; j++)
        {
            printf("1. matrisin %d. satirini %d. sutunini giriniz: ", i + 1, j + 1);
            scanf("%d", &matris1[i][j]);
        }
    }
    
    for(int i = 0; i < boyut; i++)
    {
        for(int j = 0; j < boyut; j++)
        {
            printf("2. matrisin %d. satirini %d. sutunini giriniz: ", i + 1, j + 1);
            scanf("%d", &matris2[i][j]);
        }
    }
    
    if(kareMatrisEsitMi(matris1, matris2, boyut) == 1)
    {
        printf("\nMATRISLER ESIT");
    }
    else
    {
        printf("\nMATRISLER ESIT DEGIL");
    }
    
    for(int i = 0; i < boyut; i++)
    {
            free(matris1[i]);
            free(matris2[i]);
    }
    
    free(matris1);
    free(matris2);
    
    return (EXIT_SUCCESS);
}

int kareMatrisEsitMi(int** matris1, int** matris2, int boyut)
{
    for(int i = 0; i < boyut; i ++)
    {
        for(int j = 0; j < boyut; j++)
        {
            if(matris1[i][j] != matris2[i][j])
            {
                return 0; 
            }
        }
    }  
    return 1; 
}