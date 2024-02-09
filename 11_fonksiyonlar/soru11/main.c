#include <stdio.h>
#include <stdlib.h>

void diziSirala(int dizi[], int elemanSayisi);
int enKucuNincikElemaniBul(int dizi[], int n);

int main() {
    int dizi[10] = {5, 8, 3, 1, 4, 0, 2, 6, 9, 7};
    int n = 0;
    printf("Dizinin kacinci elemanini ogrenmek istersin:");
    scanf("%d", &n);
    
    diziSirala(dizi, 10);
    printf("En kucuk %d. eleman: %d\n", n, enKucuNincikElemaniBul(dizi, n));

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

int enKucuNincikElemaniBul(int dizi[], int n) {
    return dizi[n - 1];
}

