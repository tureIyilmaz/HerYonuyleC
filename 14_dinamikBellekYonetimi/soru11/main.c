#include <stdio.h>
#include <stdlib.h>

#define boyut 6

int** sifirMatrisiOlustur(int);

int main(int argc, char** argv) {

    int** matris = sifirMatrisiOlustur(boyut);
    
    
    for(int i = 0; i < boyut; i++)
    {
        for(int j = 0; j < boyut; j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < boyut; i++) 
    {
        free(matris[i]);
    }
    
    free(matris);
    return (EXIT_SUCCESS);
}

int** sifirMatrisiOlustur(int uzunluk)
{
    int **matris;
    
    matris = (int **)calloc(uzunluk, sizeof(int *));
    
    for(int i = 0; i < uzunluk; i++)
    {
        matris[i] = (int *)calloc(uzunluk, sizeof(int));
    }
    return matris;
}