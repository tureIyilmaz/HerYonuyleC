#include <stdlib.h>
#include <stdio.h>
#include "matris_islemleri.h"

void matrisOlustur(Matris *matris) {
    matris->elemanlar = (float **)malloc(matris->satirSayisi * sizeof(float *));
    for(int i = 0; i < matris->satirSayisi; i++) {
        matris->elemanlar[i] = (float *)malloc(matris->sutunSayisi * sizeof(float));
        for(int j = 0; j < matris->sutunSayisi; j++) {
            printf("Matrisin %d. satiri %d. sutununu giriniz:", i + 1, j + 1);
            scanf("%f", &matris->elemanlar[i][j]);
        }
    }
    printf("\n");
    matrisYazdir(*matris); 
    printf("\n");
}

Matris matrisTopla(Matris matris1, Matris matris2) {
    Matris toplamMatris;
    toplamMatris.satirSayisi = matris1.satirSayisi;
    toplamMatris.sutunSayisi = matris1.sutunSayisi;
    
    toplamMatris.elemanlar = (float **)malloc(toplamMatris.satirSayisi * sizeof(float *));
    for(int i = 0; i < toplamMatris.satirSayisi; i++) {
        toplamMatris.elemanlar[i] = (float *)malloc(toplamMatris.sutunSayisi * sizeof(float));
        for(int j = 0; j < toplamMatris.sutunSayisi; j++) {
            toplamMatris.elemanlar[i][j] = matris1.elemanlar[i][j] + matris2.elemanlar[i][j];
        }
    }
    return toplamMatris;
}

Matris matrisCikar(Matris matris1, Matris matris2) {
    Matris farkMatris;
    farkMatris.satirSayisi = matris1.satirSayisi;
    farkMatris.sutunSayisi = matris1.sutunSayisi;
    
    farkMatris.elemanlar = (float **)malloc(farkMatris.satirSayisi * sizeof(float *));
    for(int i = 0; i < farkMatris.satirSayisi; i++) {
        farkMatris.elemanlar[i] = (float *)malloc(farkMatris.sutunSayisi * sizeof(float));
        for(int j = 0; j < farkMatris.sutunSayisi; j++) {
            farkMatris.elemanlar[i][j] = matris1.elemanlar[i][j] - matris2.elemanlar[i][j];
        }
    }
    return farkMatris;
}

Matris transpozBul(Matris matris) {
    Matris transposeMatris;
    transposeMatris.satirSayisi = matris.sutunSayisi;
    transposeMatris.sutunSayisi = matris.satirSayisi;
    
    transposeMatris.elemanlar = (float **)malloc(transposeMatris.satirSayisi * sizeof(float *));
    for(int i = 0; i < transposeMatris.satirSayisi; i++) {
        transposeMatris.elemanlar[i] = (float *)malloc(transposeMatris.sutunSayisi * sizeof(float));
        for(int j = 0; j < transposeMatris.sutunSayisi; j++) {
            transposeMatris.elemanlar[i][j] = matris.elemanlar[j][i];
        }
    }
    return transposeMatris;
}

void matrisYazdir(Matris matris) {
    for(int i = 0; i < matris.satirSayisi; i++) {
        for(int j = 0; j < matris.sutunSayisi; j++) {
            printf("%6.2f ", matris.elemanlar[i][j]);
        }
        printf("\n");
    }
}
