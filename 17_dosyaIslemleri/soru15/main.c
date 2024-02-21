#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kelimeSay(const char* dosyaAdi, const char* arananKelime);

int main(int argc, char** argv) {
    char* dosyaAdi = "dosya.txt";
    char* arananKelime = "kadar";
    
    int sayac = kelimeSay(dosyaAdi, arananKelime);
    
    if (sayac >= 0) {
        printf("%s metinde %d tane geciyor.\n", arananKelime, sayac);
    }
    
    return EXIT_SUCCESS;
}

int kelimeSay(const char* dosyaAdi, const char* arananKelime) {
    FILE* dosya = fopen(dosyaAdi, "r");
    int sayac = 0;
    
    if (dosya != NULL) {
        char satir[100];
        while (fscanf(dosya, "%s", satir) != EOF) {
            if (strstr(satir, arananKelime) != NULL) {
                sayac++;
            }
        }   
        fclose(dosya); 
    } else {
        printf("Dosya okunamadi.\n");
        return -1; 
    }
    
    return sayac;
}