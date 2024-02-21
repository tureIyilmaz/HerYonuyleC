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

void matrisBosalt(Matris* matris) {
    for (int i = 0; i < matris->satirSayisi; i++) {
            free(matris->elemanlar[i]);
        }
        free(matris->elemanlar);
}


void matrisiDosyayaYaz(Matris* matris, FILE* dosya) {
    for (int i = 0; i < matris->satirSayisi; i++) {
        for (int j = 0; j < matris->sutunSayisi; j++) {
            fprintf(dosya, "%2d ", matris->elemanlar[i][j]);
        }
        fprintf(dosya, "\n");
    }
}

Matris matrisTopla(Matris matris1, Matris matris2){
    Matris matrisToplam;
    if(matris1.satirSayisi != matris2.satirSayisi || matris1.sutunSayisi != matris2.sutunSayisi){
        return;
    }
    else{
        matrisToplam.satirSayisi = matris1.satirSayisi;
        matrisToplam.sutunSayisi = matris1.sutunSayisi;
        matrisToplam.elemanlar = (int**)malloc(matrisToplam.satirSayisi * sizeof(int*));
        for(int i = 0; i < matrisToplam.satirSayisi; i++){
            matrisToplam.elemanlar[i] = (int*)malloc(matrisToplam.sutunSayisi * sizeof(int));
            for(int j = 0; j < matrisToplam.sutunSayisi; j++){
                matrisToplam.elemanlar[i][j] = matris1.elemanlar[i][j] + matris2.elemanlar[i][j];
            }
        }
    }
    return matrisToplam;
}