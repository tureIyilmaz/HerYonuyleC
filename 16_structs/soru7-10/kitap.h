#ifndef KITAP_H
#define KITAP_H

#define UZUNLUK 20
#define ISIM_UZUNLUK 30

typedef enum{
    Roman = 0, Polisiye = 1, bilimKurgu = 2, Fantastik = 3,klasikEdebiyat = 4, 
            Gerilim = 5, Macera = 6, Drama = 7, Aksiyon = 8, Komedi = 9, 
            Romantik = 10, Biyografi = 11, Otobiyografi = 12, Tarih = 13,
            Felsefe = 14}kitapTuru;
            
extern char* kitapTuruKarsiligi[];         


typedef struct kitapBilgileri{   
    char kitabinAdi[ISIM_UZUNLUK];
    char yazarinAdi[ISIM_UZUNLUK];
    int basimYili;
    kitapTuru tur;
}Kitap;

extern Kitap kitapListesi[];
extern int kitapSayisi;

void kitapEkle();
void kitapCikar();
void kitaplariYazdir();

#endif /* KITAP_H */

