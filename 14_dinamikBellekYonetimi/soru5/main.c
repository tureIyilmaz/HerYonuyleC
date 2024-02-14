#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sayilarinOrtalamasi(double *, int);

int main(int argc, char** argv) {

    double *sayilar;
    int sayiAdeti;
    
    printf("Ortalamasini almak istediginiz sayi adetini giriniz:");
    scanf("%d", &sayiAdeti);
    
    sayilar = (double *)malloc(sayiAdeti * sizeof(double));
    
    for(int i = 0; i < sayiAdeti; i++) {
        printf("%d. sayiyi gir:", i + 1);
        scanf("%lf", sayilar + i);
    }
    
    double ortalama = sayilarinOrtalamasi(sayilar, sayiAdeti);
    
    printf("%.2f\n", ortalama);
    
    printf("Ortalamaya en yakin 3 tam sayi %d, %d, %d\n",
            (int)(ortalama - 1),
            (int)ortalama,
            (int)(ortalama + 1)); 
            
    free(sayilar);
    return (EXIT_SUCCESS);
}

double sayilarinOrtalamasi(double *dizi, int elemanSayisi) {
    double toplam = 0;
    
    for(int i = 0; i < elemanSayisi; i++) {
        toplam += *(dizi + i);
    }
    
    return toplam / (double)elemanSayisi;
}
