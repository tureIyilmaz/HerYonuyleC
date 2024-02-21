#include <stdio.h>
#include <stdlib.h>
#include "matris.h"

void matrisiDosyayaYaz(Matris* matris, FILE* dosya);

int main() {
    char* kaynakDosyaAdi = "matris.txt";
    char* hedefDosyaAdi = "transpose.txt";
    FILE* kaynakDosya = fopen(kaynakDosyaAdi, "r");
    FILE* hedefDosya = fopen(hedefDosyaAdi, "w");
    Matris matris;
    Matris transposeMatris;

    if (kaynakDosya != NULL) {
        matrisOlustur(kaynakDosya, &matris);
        matrisiYazdir(&matris);

        transposeMatris = transposeBul(matris);
        printf("\n\n");
        matrisiYazdir(&transposeMatris);

        if(hedefDosya != NULL) {
            matrisiDosyayaYaz(&transposeMatris, hedefDosya); // Transpoze matrisi dosyaya yaz
            printf("Kopyalama islemi tamamlandi.");
            fclose(hedefDosya); // Dosyayı kapat
        } else {
            printf("Hedef dosya acilamadi.\n");
        }

        // Belleği serbest bırak
        for (int i = 0; i < matris.satirSayisi; i++) {
            free(matris.elemanlar[i]);
        }
        free(matris.elemanlar);

        // Transpoze matris belleği serbest bırak
        for (int i = 0; i < transposeMatris.satirSayisi; i++) {
            free(transposeMatris.elemanlar[i]);
        }
        free(transposeMatris.elemanlar);

        fclose(kaynakDosya);
    } else {
        printf("Dosya bulunamadi\n");
    }

    return 0;
}
