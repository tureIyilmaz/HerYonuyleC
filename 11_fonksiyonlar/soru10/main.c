#include <stdio.h>
#include <stdlib.h>

void diziSirala(int dizi[], int elemanSayisi);
int enKucukElemaniBul(int dizi[]);
int enBuyukElemaniBul(int dizi[], int elemanSayisi);

int main() {
    int dizi[10] = {5, 8, 3, 1, 4, 0, 2, 6, 9, 7};
    diziSirala(dizi, 10);
    printf("En kucuk eleman: %d\n", enKucukElemaniBul(dizi));
    printf("En buyuk eleman: %d\n", enBuyukElemaniBul(dizi, 10));
    return 0;
}

void diziSirala(int dizi[], int elemanSayisi) {
    for (int i = 0; i < elemanSayisi - 1; i++) {
        for (int j = 0; j < elemanSayisi - 1 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                int gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
            }
        }
    }
}

int enKucukElemaniBul(int dizi[]) {
    return dizi[0];
}

int enBuyukElemaniBul(int dizi[], int elemanSayisi) {
    return dizi[elemanSayisi - 1];
}
