
#include <stdio.h>
#include <string.h>
#include "film.h"

Film  filmListesi[UZUNLUK];
char* turlerinKarsiligi[] = {"Dram", "Gerilim", "Konedi", "Aksiyon"};
int filmSayisi = 0;

static void kullanicidanFilmOku(Film* filmPtr);
static void filmBilgisiniYazdir(Film* filmPtr);

void filmEkle()
{
    Film *filmPtr;
       
    if(filmSayisi == UZUNLUK) {
        printf("Film listesi dolu");
        return;
    }
    
    filmPtr = &filmListesi[filmSayisi];
    kullanicidanFilmOku(filmPtr);

    // Aynı isimde film var mı kontrol et
    for (int i = 0; i < filmSayisi; i++) {
        if (strcmp(filmPtr->ad, filmListesi[i].ad) == 0) {
            printf("Bu isimde bir film zaten var. Lütfen farklı bir isim giriniz.\n");
            return;
        }
    }
 
    filmSayisi++;
}

void filmSil() {
    
    Film *filmPtr;
    
    printf("\n[FILM SILME]\n");
    
    if(filmSayisi == 0) {
        printf("Film listesi bos");
    }
    
    filmleriYazdir();
    printf("\n Yukaridaki listedeb silmek istediginiz filmin ID bilgisini giriniz");
    int silinecekId;
    scanf("%d", &silinecekId);
    
    while(silinecekId < 1 && silinecekId > filmSayisi) {
        printf("\nLutfen gecerli ID giriniz");
        printf("\n Yukaridaki listedeb silmek istediginiz filmin ID bilgisini giriniz");
        scanf("%d", &silinecekId);
    }
    filmPtr = &filmListesi[silinecekId - 1];
    *filmPtr = filmListesi[filmSayisi - 1];
    filmSayisi--;
    printf("Sectiginiz film silindi");
}

void filmleriYazdir() {
    
    if(filmSayisi == 0) {
        printf("Film listesi bos");
    }
    printf("\n[FILMLERIN LISTESI]\n");
    Film *filmPtr = filmListesi;
    int i = 0;
    while( i < filmSayisi)
    {
        filmBilgisiniYazdir(filmPtr);
        filmPtr++;
        i++;
    }
    printf("\n");
}

void filmleriGrupla(Film* filmListesi, int filmSayisi, GruplamaTuru grupDegeri) {
    if (filmSayisi == 0) {
        printf("Film listesi bos\n");
        return;
    }

    switch (grupDegeri) {
        case ADINA_GORE_GRUPLA: {
            printf("[ADINA GORE FILM GRUPLAMA]\n");
            char oncekiAd[50] = "";
            for (int i = 0; i < filmSayisi; i++) {
                if (strcmp(oncekiAd, filmListesi[i].ad) != 0) {
                    printf("\n%s:\n", filmListesi[i].ad);
                    for (int j = i; j < filmSayisi; j++) {
                        if (strcmp(filmListesi[j].ad, filmListesi[i].ad) == 0) {
                            filmBilgisiniYazdir(&filmListesi[j]);
                        }
                    }
                }
                strcpy(oncekiAd, filmListesi[i].ad);
            }
            break;
        }
        case YONETMENINE_GORE_GRUPLA: {
            printf("[YONETMENINE GORE FILM GRUPLAMA]\n");
            char oncekiYonetmen[50] = "";
            for (int i = 0; i < filmSayisi; i++) {
                if (strcmp(oncekiYonetmen, filmListesi[i].yonetmen) != 0) {
                    printf("\nYonetmen: %s\n", filmListesi[i].yonetmen);
                    for (int j = i; j < filmSayisi; j++) {
                        if (strcmp(filmListesi[j].yonetmen, filmListesi[i].yonetmen) == 0) {
                            filmBilgisiniYazdir(&filmListesi[j]);
                        }
                    }
                }
                strcpy(oncekiYonetmen, filmListesi[i].yonetmen);
            }
            break;
        }
        case TURUNE_GORE_GRUPLA: {
            printf("[TURE GORE FILM GRUPLAMA]\n");
            for (int tur = 0; tur < 4; tur++) {
                printf("\n%s:\n", turlerinKarsiligi[tur]);
                for (int i = 0; i < filmSayisi; i++) {
                    if (filmListesi[i].tur == tur) {
                        filmBilgisiniYazdir(&filmListesi[i]);
                    }
                }
            }
            break;
        }
        case YAPIM_YILINA_GORE_GRUPLA: {
            printf("[YAPIM YILINA GORE FILM GRUPLAMA]\n");
            int oncekiYil = -1;
            for (int i = 0; i < filmSayisi; i++) {
                if (oncekiYil != filmListesi[i].yapimYili) {
                    printf("\nYapim Yili: %d\n", filmListesi[i].yapimYili);
                    for (int j = i; j < filmSayisi; j++) {
                        if (filmListesi[j].yapimYili == filmListesi[i].yapimYili) {
                            filmBilgisiniYazdir(&filmListesi[j]);
                        }
                    }
                }
                oncekiYil = filmListesi[i].yapimYili;
            }
            break;
        }
        default:
            printf("Gecersiz gruplama degeri\n");
            break;
    }
}

void filmleriSirala(Film* filmListesi, int filmSayisi, SiralamaTuru siralamaTuru) {
    if (filmSayisi == 0) {
        printf("Film listesi bos\n");
        return;
    }
    switch (siralamaTuru) {
        case ADINA_GORE_SIRALA: {
            for (int i = 0; i < filmSayisi - 1; i++) {
                for (int j = 0; j < filmSayisi - i - 1; j++) {
                    if (strcmp(filmListesi[j].ad, filmListesi[j + 1].ad) > 0) {
                        // İki filmi yer değiştir
                        Film temp = filmListesi[j];
                        filmListesi[j] = filmListesi[j + 1];
                        filmListesi[j + 1] = temp;
                    }
                }
            }
            break;
        }
        case YONETMENINE_GORE_SIRALA: {
            for (int i = 0; i < filmSayisi - 1; i++) {
                for (int j = 0; j < filmSayisi - i - 1; j++) {
                    if (strcmp(filmListesi[j].yonetmen, filmListesi[j + 1].yonetmen) > 0) {
                        // İki filmi yer değiştir
                        Film temp = filmListesi[j];
                        filmListesi[j] = filmListesi[j + 1];
                        filmListesi[j + 1] = temp;
                    }
                }
            }
            break;
        }
        case TURUNE_GORE_SIRALA: {
            for (int i = 0; i < filmSayisi - 1; i++) {
                for (int j = 0; j < filmSayisi - i - 1; j++) {
                    if (filmListesi[j].tur > filmListesi[j + 1].tur) {
                        // İki filmi yer değiştir
                        Film temp = filmListesi[j];
                        filmListesi[j] = filmListesi[j + 1];
                        filmListesi[j + 1] = temp;
                    }
                }
            }
            break;
        }
        case YAPIM_YILINA_GORE_SIRALA: {
            for (int i = 0; i < filmSayisi - 1; i++) {
                for (int j = 0; j < filmSayisi - i - 1; j++) {
                    if (filmListesi[j].yapimYili > filmListesi[j + 1].yapimYili) {
                        // İki filmi yer değiştir
                        Film temp = filmListesi[j];
                        filmListesi[j] = filmListesi[j + 1];
                        filmListesi[j + 1] = temp;
                    }
                }
            }
            break;
        }
        default:
            printf("Gecersiz siralama turu\n");
            break;
    }
}



static void kullanicidanFilmOku(Film* filmPtr) {
    
    printf("\n[FILM EKLEME]\n");
    fflush(stdin);
    printf("\nFilmin Adi    :");
    gets(filmPtr->ad);
    
    fflush(stdin);
    printf("\nFilmin Yonetmeni    :");
    gets(filmPtr->yonetmen);
    
    printf("Filmin vizyona girdigi yil   ");
    scanf("%d", &(filmPtr->yapimYili));
    
    int tur = -1;
    
    while(1)
    {
        printf("Filmin turu(0-DRAM 1-GERILIM 2-KOMEDI, 3-AKSIYON)");
        scanf("%d", &tur);
        
        if(tur < 0 || tur > 3)
        {
            printf("Gecersiz film turu!\n");
        }
        else
        {
            break;
        }
    }
    filmPtr->tur = tur;
    printf("Filmin bilgileri eklendi!\n");
}

static void filmBilgisiniYazdir(Film* filmPtr) {
    
    int filmSira = (filmPtr - filmListesi) + 1;
    printf("\n");
    printf("Filmin ID   :%d\n",filmSira);
    printf("Filmin Adi  :%s\n",filmPtr->ad);
    printf("Filmin Yonetmeni  :%s\n",filmPtr->yonetmen);
    printf("Filmin Vizyon Tarihi  :%d\n",filmPtr->yapimYili);
    printf("Filmin Turu  :%s\n",turlerinKarsiligi[(int)filmPtr->tur]);
}


