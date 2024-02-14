#include <stdio.h>
#include <stdlib.h>

int** transposeBulKareMatris(int** matris, int uzunluk) {
    int **transposeMatris = (int **)malloc(sizeof(int *) * uzunluk);
    if (transposeMatris == NULL) {
        printf("Bellek tahsis edilemedi!");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < uzunluk; i++) {
        transposeMatris[i] = (int *)malloc(sizeof(int) * uzunluk);
        if (transposeMatris[i] == NULL) {
            printf("Bellek tahsis edilemedi!");
            exit(EXIT_FAILURE);
        }
        for (int j = 0; j < uzunluk; j++) {
            transposeMatris[i][j] = matris[j][i];
        }
    }
    return transposeMatris;
}

void printMatrix(int** matris, int boyut) {
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char** argv) {
    int boyut, **matris;
    
    printf("Kare matris boyutunu giriniz: ");
    scanf("%d", &boyut);
    
    matris = (int **)malloc(sizeof(int *) * boyut);
   
    for (int i = 0; i < boyut; i++) {
        matris[i] = (int *)malloc(sizeof(int) * boyut);
    }
    
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {
            printf("Matrisin %d. satir %d. sutunu =", i + 1, j + 1);
            scanf("%d", &matris[i][j]); 
        }
    }
    
    matris = transposeBulKareMatris(matris, boyut);
    printf("Transpoz matris:\n");
    printMatrix(matris, boyut);
    
    for (int i = 0; i < boyut; i++) {
        free(matris[i]);
    }
    free(matris);
   
    return EXIT_SUCCESS;
}
