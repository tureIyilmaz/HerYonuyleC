#include <stdio.h>
#include <stdlib.h>

//Fonksiyon protetipi
int topla(int dizi[], int elemanSayisi);

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n",topla(dizi, 9));
    return 0;
}

int topla(int dizi[], int elemanSayisi) {
    
    int toplam = 0;
    
    for( int i = 0; i < elemanSayisi; i++) {
        toplam += dizi[i];
    }
    return toplam;
}

