#include <stdio.h>
#include <stdlib.h>

int asalMi(int* deger);

int main(int argc, char** argv) {

    int sayi = 0;
    printf("Asal olup olmadigini ogrenmek isrdiginiz sayiyi giriniz:");
    scanf("%d", &sayi);
    
     if(asalMi(&sayi)) {
        printf("ASAL\n");
    }
    else {
        printf("ASAL DEGIL\n");
    }
    
    return (EXIT_SUCCESS);
}

int asalMi(int *deger) {
       
    for(int i = 2; i < *deger; i++) {
        if(*deger % i == 0) {
            return 0;
        }
    }
    return 1;
}
