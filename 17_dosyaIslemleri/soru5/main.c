#include <stdio.h>
#include <stdlib.h>
#include "matris.h"


int main() {
    char* dosyaAdi = "matris.txt";
    FILE* dosya = fopen(dosyaAdi, "r");
    Matris matris;

    if (dosya != NULL) {
        matrisOlustur(dosya, &matris);
        matrisiYazdir(&matris);

        // Belleği serbest bırak
        for (int i = 0; i < matris.satirSayisi; i++) {
            free(matris.elemanlar[i]);
        }
        free(matris.elemanlar);

        fclose(dosya);
    }
    else {
        printf("Dosya bulunamadi\n");
    }

    return 0;
}



