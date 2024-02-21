#ifndef MATRIS_H
#define MATRIS_H

typedef struct {
    int** elemanlar;
    int satirSayisi;
    int sutunSayisi;
} Matris;

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 100


void matrisOlustur(FILE* dosya, Matris* matris);
void matrisiYazdir(Matris* matris);
Matris transposeBul(Matris matris);
void matrisiDosyayaYaz(Matris* matris, FILE* dosya);
#endif /* MATRIS_H */

