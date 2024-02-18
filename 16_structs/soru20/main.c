#include <stdio.h>
#include <stdlib.h>

typedef enum {
    KADIN,
    ERKEK,
} Cinsiyet;

typedef struct {
    char adSoyad[50];
    unsigned long long int tcKimlikNo;
    char dogumYeri[20];
    Cinsiyet cinsiyet;
} Kisi;

int main() {
    Kisi kisi;

    printf("Ad ve soyad: ");
    fgets(kisi.adSoyad, sizeof(kisi.adSoyad), stdin);

    printf("TC Kimlik No: ");
    scanf("%llu", &kisi.tcKimlikNo);

    while (getchar() != '\n');

    printf("Doğum Yeri: ");
    fgets(kisi.dogumYeri, sizeof(kisi.dogumYeri), stdin);

    printf("Cinsiyet (KADIN için 0, ERKEK için 1): ");
    scanf("%d", &kisi.cinsiyet);

    printf("\nGirilen bilgiler:\n");
    printf("Ad ve Soyad: %s\n", kisi.adSoyad);
    printf("TC Kimlik No: %llu\n", kisi.tcKimlikNo);
    printf("Doğum Yeri: %s\n", kisi.dogumYeri);
    printf("Cinsiyet: %s\n", kisi.cinsiyet == KADIN ? "KADIN" : "ERKEK");

    return 0;
}
