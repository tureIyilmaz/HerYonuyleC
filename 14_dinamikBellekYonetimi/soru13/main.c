

#include <stdio.h>
#include <stdlib.h>



int** birimMatrisOlustur(int);

int main(int argc, char** argv) {
    
    int boyut = 5;
    
    int** matris = birimMatrisOlustur(boyut);
    
        for(int i = 0; i < boyut; i++)
    {
        for(int j = 0; j < boyut; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < boyut; i++)
    {
        free(matris[i]);
    }
    
    free(matris);
    
    return (EXIT_SUCCESS);
}

int** birimMatrisOlustur(int uzunluk)
{
    int **matris;
    
    matris = (int **)calloc(uzunluk, sizeof(int *));
    
    for(int i = 0; i < uzunluk; i++)
    {
        matris[i] = (int * )calloc(uzunluk, sizeof(int));
        
        matris[i][i] = 1;
    }
    

    return matris;
}
