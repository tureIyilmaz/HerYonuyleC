
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "kitap.h"

void menuYazdir();

int main(int argc, char** argv) {
    
    printf("\n-----------------------------------------\n");
    printf("Kitap veritabani uygulamasina hos geldiniz");
    printf("\n-----------------------------------------\n");
    
    int secim;
    while(1) {
        
        menuYazdir();
        scanf("%d", &secim);
        
        switch(secim) {
            case 0:
            {
                printf("Programdan cikiliyor.....\n");
                exit(0);
                break;
            }
            case 1:
            {
                kitapEkle();
                break;
            }
            case 2: 
            {
                kitapCikar();
                break;
            }
            case 3:
            {
                kitaplariYazdir();
                break;
            }
            default:
            {
                printf("Girdiginiz deger gecersizdir.");
                break;
            }
        }
    }
    return (EXIT_SUCCESS);
}

void menuYazdir() {
    
    printf("\nAna Menu:\n");
    printf("(1) Kitap Ekle\n");
    printf("(2) Kitap Cikar\n");
    printf("(3) Tum kitaplari listele\n");
    printf("(0) Cikis\n\n");
    printf("Seciminizi giriniz:");
}