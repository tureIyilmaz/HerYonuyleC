#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    char isim[16]; 
    char soyisim[16];
    unsigned short  int yas;
    
    printf("Adiniz: ");
    scanf_s("%15s", isim, sizeof(isim));
    
    printf("\nSoyadiniz: ");
    scanf_s("%15s", soyisim, sizeof(soyisim));
    
    printf("\nYasiniz: ");
    scanf("%hu", &yas, sizeof(yas));
    
    printf("\n----------------------\n");
    printf("MERHABA %s %s", isim, soyisim);
    printf("\n----------------------\n");
    
    printf("\n   Adiniz: %-15s", isim);
    printf("\nSoyadiniz: %-15s", soyisim);
    
    printf("\n  Yasiniz: %-15hu\n", yas);
    
    return 0;
}



7
