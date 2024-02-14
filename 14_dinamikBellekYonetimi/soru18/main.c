#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** matrisTopla(int**, int**, int);

int main(int argc, char** argv) {

    srand(time(NULL));
    
    int boyut = 0, **matris1, **matris2, **toplamMatrisi;
    
    printf("Matrisin boyutunu giriniz: ");
    scanf("%d", &boyut);
     
    matris1 = (int **)malloc(sizeof(int*) * boyut);
    matris2 = (int **)malloc(sizeof(int*) * boyut);
    
    for(int i = 0; i < boyut; i++)
    {
        matris1[i] = (int *)malloc(sizeof(int) * boyut);
        matris2[i] = (int *)malloc(sizeof(int) * boyut);
                
        
        for(int j = 0; j < boyut; j++)
        {
            matris1[i][j] = rand() % 10;
            matris2[i][j] = rand() % 10;
        }
        
    }
    
    toplamMatrisi = matrisTopla(matris1, matris2, boyut);
    
    for(int i = 0; i < boyut; i++)
    {                        
        for(int j = 0; j < boyut; j++)
        {
            printf("%d ", matris1[i][j]);
        }
        
        if(i == boyut / 2)
        {
            
            printf("  +");
        }

            printf("\t");

        

        for(int j = 0; j < boyut; j++)
        {
            printf("%d ", matris2[i][j]);
        }
        if(i == boyut / 2)
        {
            printf("  =");
        }

            printf(" \t");

        
        for(int j = 0; j < boyut; j++)
        {
            printf("%2d ", toplamMatrisi[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < boyut; i++)
    {
        free(matris1[i]); 
        free(matris2[i]); 
        free(toplamMatrisi[i]); 
    }
    
        free(matris1); 
        free(matris2); 
        free(toplamMatrisi);
    
    return (EXIT_SUCCESS);
}

int** matrisTopla(int** matris1, int** matris2, int boyut)
{
    int **matrisToplami;
    
    matrisToplami = (int **)malloc(sizeof(int*) * boyut);
    
    for(int i = 0; i < boyut; i++)
    {
        matrisToplami[i] = (int *)malloc(sizeof(int) * boyut);
        for(int j = 0; j < boyut; j++)
        {
            matrisToplami[i][j] = matris1[i][j] + matris2[i][j];
        }
    }
    return matrisToplami;
}

