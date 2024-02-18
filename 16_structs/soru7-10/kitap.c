#include <stdio.h>
#include "kitap.h"


Kitap kitapListesi[UZUNLUK];
char* kitapTuruKarsiligi[] = {"Roman", "Polisiye", "bilimKurgu", "Fantastik", "klasikEdebiyat",
"Gerilim", "Macera", "Drama", "Aksiyon", "Komedi", "Romantik", "Biyografi", 
"Otobiyografi", "Tarih","Felsefe" };
int kitapSayisi = 0; 

static void kullanicidanKitapAl(Kitap* kitapPtr);
static void kitapYazdir(Kitap* kitapPtr);

void kitapEkle(){
    Kitap *kitapPtr;
    
    if(kitapSayisi == UZUNLUK){
        printf("Maximum girilebilecek kitap sayisina ulasildi");
    }
    kitapPtr = &kitapListesi[kitapSayisi];
    kullanicidanKitapAl(kitapPtr);
    kitapSayisi++;   
}

void kitapCikar()
{
    Kitap *kitapPtr;
    
    printf("\nKITAP SILME\n");
    
    if(kitapSayisi == 0){
        printf("Kitap listesi bos\n");
    }
    kitaplariYazdir();  
    int silinecekID;
    
    printf("Silmek istediginiz kitabin ID bilgisini giriniz: ");
    scanf("%d", &silinecekID);
    
    while(silinecekID < 0 || silinecekID > kitapSayisi){
        printf("Gecersiz ID\n");
        printf("Silmek istediginiz kitabin ID bilgisini giriniz: ");
        scanf("%d", &silinecekID);
    }
    kitapPtr = &kitapListesi[silinecekID - 1];
    *kitapPtr = kitapListesi[silinecekID - 1];
    kitapSayisi--;
    printf("\nKitap silindi \n");
}

void kitaplariYazdir()
{ 
    
    if(kitapSayisi == 0)
    {
        printf("Kitap listesi bos\n");
    }   
    printf("\nFILM LISTESI\n");
    
    Kitap *kitapPtr  = kitapListesi;
    int i = 0;   
    while(i < kitapSayisi)
    {
        kitapYazdir(kitapPtr);
        i++;
        kitapPtr++;
    }
    printf("\n");
}

static void kullanicidanKitapAl(Kitap* kitapPtr)
{
     printf("\nKITAP EKLEME\n");
    
    fflush(stdin);
    printf("Kitabin adini giriniz:");
    gets(kitapPtr->kitabinAdi);
    
    fflush(stdin);
    printf("Kitabin yazarini giriniz:");
    gets(kitapPtr->yazarinAdi);
    
    printf("Kitabin basim yilini giriniz:");
    scanf("%d",&kitapPtr->basimYili);
    
    int tur = -1;
    
    while(1)
    {
       printf("\n 0.Roman     1.Polisiye     2.bilimKurgu     3.Fantastik     4.klasikEdebiyat\n"
    " 5.Gerilim   6.Macera       7.Drama          8.Aksiyon       9.Komedi\n"
    "10.Romantik 11.Biyografi   12.Otobiyografi  13.Tarih        14.Felsefe\n"
               "Kitabin turunu seciniz: ");
        scanf("%d", &tur); 
        
        if(tur > 15 || tur < 0)
        {
            printf("Girdiginiz numaraya ait tur bulunmamaktadır.\n");
        }
        else
        {
            break;
        }
    }
    kitapPtr->tur = tur;
    printf("Kitabin bilgileri eklendi!\n");
}

static void kitapYazdir(Kitap* kitapPtr)
{
    int kitapSirasi = (kitapPtr - kitapListesi) + 1;
    printf("\n");
    printf("Kitabin ID           :%d\n", kitapSirasi);
    printf("Kitabin Adi          :%s\n", kitapPtr->kitabinAdi);
    printf("Kitabin Yazari       :%s\n", kitapPtr->yazarinAdi);
    printf("Kitabin Basim Yili   :%d\n", kitapPtr->basimYili);
    printf("Kitabin Turi         :%s\n",kitapTuruKarsiligi[(int) kitapPtr->tur ]);
}