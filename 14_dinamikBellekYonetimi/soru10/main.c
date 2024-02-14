#include <stdio.h>
#include <stdlib.h>

#define SATIR 6
#define SUTUN 4

int **sifirMatrisiOlustur(int satir, int sutun);

int main(int argc, char** argv) {

    int **a;
    
    a = sifirMatrisiOlustur(SATIR, SUTUN);
    
    for(int i = 0; i < SATIR; i++){
        for(int j = 0; j < SUTUN; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < SATIR; i++) 
    {
        free(a[i]);
    }
    
    free(a);
    return (EXIT_SUCCESS);
}

int **sifirMatrisiOlustur(int satir, int sutun) {
    
    int **matris = (int **)calloc(satir, sizeof(int *));  
    for(int i = 0; i < satir; i++) {
        matris[i] = (int **)calloc(sutun, sizeof(int));
    }   
    return matris;
}

