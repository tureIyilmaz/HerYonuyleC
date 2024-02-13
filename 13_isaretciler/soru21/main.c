#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int asalMi(int parametreSayisi, ...);
int main(int argc, char** argv) {
    int sayilar[] = {7, 10, 13, 20};
    int toplam_sayi = sizeof(sayilar) / sizeof(sayilar[0]);

    for (int i = 0; i < toplam_sayi; ++i) {
        if(asalMi(1, sayilar[i])) {
            printf("%d ASAL\n", sayilar[i]);
        }
        else {
            printf("%d ASAL DEGIL\n", sayilar[i]);
        }
    }
    
    return 0;
}

int asalMi(int parametreSayisi, ...) {
    va_list parametrePtr;
    va_start(parametrePtr, parametreSayisi);
    
    for(int i = 0; i < parametreSayisi; i++) {
        int sayi = va_arg(parametrePtr, int);
        int asalMi = 1;
        for(int j = 2; j < sayi; j++) {
            if(sayi % j == 0) {
                asalMi = 0;
                break;
            }
        }
        if(asalMi) {
            return 0;
        }
    }
    va_end(parametrePtr);
    return 1;
}
