#include "matris.h"

void matrisOlustur(FILE* dosya, Matris* matris) {
    char satir[MAX_LINE_LENGTH];

    // Dosyadan ilk satırı oku ve satır ve sütun sayılarını al
    fgets(satir, MAX_LINE_LENGTH, dosya);
    sscanf(satir, "%d %d", &matris->satirSayisi, &matris->sutunSayisi);

    // Matris elemanları için hafızayı ayır
    matris->elemanlar = (int**)malloc(matris->satirSayisi * sizeof(int*));
    for (int i = 0; i < matris->satirSayisi; i++) {
        matris->elemanlar[i] = (int*)malloc(matris->sutunSayisi * sizeof(int));
    }

    // Dosyadan matris elemanlarını oku ve ata
    for (int i = 0; i < matris->satirSayisi; i++) {
        fgets(satir, MAX_LINE_LENGTH, dosya);
        char* token = strtok(satir, " ");
        for (int j = 0; j < matris->sutunSayisi && token != NULL; j++) {
            matris->elemanlar[i][j] = atoi(token);
            token = strtok(NULL, " ");
        }
    }
}

void matrisiYazdir(Matris* matris) {
    for (int i = 0; i < matris->satirSayisi; i++) {
        for (int j = 0; j < matris->sutunSayisi; j++) {
            printf("%2d ", matris->elemanlar[i][j]);
        }
        printf("\n");
    }
}

Matris transposeBul(Matris matris) {
    Matris transposeMatris;
    transposeMatris.satirSayisi = matris.sutunSayisi;
    transposeMatris.sutunSayisi = matris.satirSayisi;
    
    transposeMatris.elemanlar = (int**)malloc(transposeMatris.satirSayisi * sizeof(int*)); 
    for(int i = 0; i < transposeMatris.satirSayisi; i++){
        transposeMatris.elemanlar[i] = (int*)malloc(transposeMatris.sutunSayisi * sizeof(int)); 
        for(int j = 0; j < transposeMatris.sutunSayisi; j++){
            transposeMatris.elemanlar[i][j] = matris.elemanlar[j][i];
        }
    }
    return transposeMatris;
}

void matrisiDosyayaYaz(Matris* matris, FILE* dosya) {
    for (int i = 0; i < matris->satirSayisi; i++) {
        for (int j = 0; j < matris->sutunSayisi; j++) {
            fprintf(dosya, "%2d ", matris->elemanlar[i][j]);
        }
        fprintf(dosya, "\n");
    }
}
