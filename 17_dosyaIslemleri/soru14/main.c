#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int harfSay(const char* dosyaAdi, char arananHarf);

int main(int argc, char** argv) {
    char* dosyaAdi = "dosya.txt";
    char arananHarf = 'a';
    
    int sayac = harfSay(dosyaAdi, arananHarf);
    
    if (sayac >= 0) {
        printf("%c harfi metinde %d tane geciyor.\n", arananHarf, sayac);
    }
    
    return EXIT_SUCCESS;
}

int harfSay(const char* dosyaAdi, char arananHarf) {
    FILE* dosya = fopen(dosyaAdi, "r");
    int sayac = 0;
    
    if (dosya != NULL) {
        int ch;
        while ((ch = fgetc(dosya)) != EOF) {
            if (ch == arananHarf) {
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

