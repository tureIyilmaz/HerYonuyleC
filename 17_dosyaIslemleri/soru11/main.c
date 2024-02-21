#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SATIR_UZUNLUGU 100

int main(int argc, char** argv) {
    char* kaynakDosyaAdi = "metin.txt";
    char* hedefDosyaAdi = "metinin_tersi.txt";
    char metin[SATIR_UZUNLUGU];
    FILE* kaynakDosya = fopen(kaynakDosyaAdi,"r");
    FILE* hedefDosya = fopen(hedefDosyaAdi,"w");

    if (kaynakDosya == NULL || hedefDosya == NULL) {
        perror("Dosya açma hatası");
        return EXIT_FAILURE;
    }
    
    while(fgets(metin, SATIR_UZUNLUGU, kaynakDosya) != NULL) {
        int uzunluk = strlen(metin);
        for (int i = uzunluk - 1; i >= 0; i--) {
            fputc(metin[i], hedefDosya);
        }
    }
    
    printf("Metin tersine cevirilerek '%s' dosyasina yazildi.\n", hedefDosyaAdi);
    
    fclose(kaynakDosya);
    fclose(hedefDosya);
    
    return EXIT_SUCCESS;
}
