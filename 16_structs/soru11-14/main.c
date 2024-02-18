#include <stdio.h>
#include "matris_islemleri.h"

int main() {
    Matris matris1, matris2, toplam, fark, transpose;
    
    // İlk matrisin boyutlarını ve elemanlarını kullanıcıdan al
    printf("1. Matrisin satir ve sutun sayisini giriniz: ");
    scanf("%d %d", &matris1.satirSayisi, &matris1.sutunSayisi);
    printf("1. Matrisin elemanlarini giriniz:\n");
    matrisOlustur(&matris1);

    // İkinci matrisin boyutlarını ve elemanlarını kullanıcıdan al
    printf("2. Matrisin satir ve sutun sayisini giriniz: ");
    scanf("%d %d", &matris2.satirSayisi, &matris2.sutunSayisi);
    printf("2. Matrisin elemanlarini giriniz:\n");
    matrisOlustur(&matris2);

    // Toplama işlemi
    printf("Toplam Matris:\n");
    toplam = matrisTopla(matris1, matris2);
    matrisYazdir(toplam);

    // Çıkarma işlemi
    printf("Fark Matris:\n");
    fark = matrisCikar(matris1, matris2);
    matrisYazdir(fark);

    // Transpoz bulma işlemi
    printf("Transpose Matris:\n");
    transpose = transpozBul(matris1);
    matrisYazdir(transpose);

    // Bellekten ayrılma
    free(toplam.elemanlar);
    free(fark.elemanlar);
    free(transpose.elemanlar);

    return 0;
}
