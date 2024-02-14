#include <stdio.h>
#include <stdlib.h>

// Fonksiyon prototipi
double **matrisTersiniBul(double **matris, int boyut);
void swapRows(double **matris, int boyut, int row1, int row2);
void multiplyRow(double **matris, int boyut, int row, double scalar);
void addRow(double **matris, int boyut, int destRow, int srcRow, double scalar);

int main() {
    int boyut;
    printf("Kare matris boyutunu giriniz: ");
    scanf("%d", &boyut);
    
    double **matris = (double **)malloc(boyut * sizeof(double *));
    for (int i = 0; i < boyut; i++) {
        matris[i] = (double *)malloc(boyut * sizeof(double));
    }
    
    printf("Matris elemanlarini giriniz:\n");
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {
            printf("Matrisin %d. satir %d. sutunu: ", i + 1, j + 1);
            scanf("%lf", &matris[i][j]);
        }
    }


    double **tersMatris = matrisTersiniBul(matris, boyut);


    printf("\nTers matris:\n");
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {
            printf("%lf ", tersMatris[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < boyut; i++) {
        free(matris[i]);
        free(tersMatris[i]);
    }
    free(matris);
    free(tersMatris);

    return 0;
}

double **matrisTersiniBul(double **matris, int boyut) {

    double **tersMatris = (double **)malloc(boyut * sizeof(double *));
    for (int i = 0; i < boyut; i++) {
        tersMatris[i] = (double *)malloc(boyut * sizeof(double));
        for (int j = 0; j < boyut; j++) {
            tersMatris[i][j] = (i == j) ? 1.0 : 0.0;
        }
    }

    for (int i = 0; i < boyut; i++) {

        int pivotRow = i;
        for (int j = i + 1; j < boyut; j++) {
            if (matris[j][i] > matris[pivotRow][i]) {
                pivotRow = j;
            }
        }

        if (pivotRow != i) {
            swapRows(matris, boyut, i, pivotRow);
            swapRows(tersMatris, boyut, i, pivotRow);
        }
  
        double pivot = matris[i][i];
        multiplyRow(matris, boyut, i, 1.0 / pivot);
        multiplyRow(tersMatris, boyut, i, 1.0 / pivot);
     
        for (int j = 0; j < boyut; j++) {
            if (j != i) {
                double factor = matris[j][i];
                addRow(matris, boyut, j, i, -factor);
                addRow(tersMatris, boyut, j, i, -factor);
            }
        }
    }

    return tersMatris;
}

void swapRows(double **matris, int boyut, int row1, int row2) {
    double *temp = matris[row1];
    matris[row1] = matris[row2];
    matris[row2] = temp;
}

void multiplyRow(double **matris, int boyut, int row, double scalar) {
    for (int i = 0; i < boyut; i++) {
        matris[row][i] *= scalar;
    }
}

void addRow(double **matris, int boyut, int destRow, int srcRow, double scalar) {
    for (int i = 0; i < boyut; i++) {
        matris[destRow][i] += scalar * matris[srcRow][i];
    }
}
