

#ifndef FILM_H
#define FILM_H

#define UZUNLUK 10
#define ISIM_UZZUNLUK 30

typedef enum{
    DRAM, GERILIM, KOMEDI, AKSIYON
}FilmTuru;


typedef enum{
    ADINA_GORE_GRUPLA, YONETMENINE_GORE_GRUPLA, TURUNE_GORE_GRUPLA, YAPIM_YILINA_GORE_GRUPLA,
}GruplamaTuru;

typedef enum{
    ADINA_GORE_SIRALA, YONETMENINE_GORE_SIRALA, TURUNE_GORE_SIRALA, YAPIM_YILINA_GORE_SIRALA,
}SiralamaTuru;

extern char* turlerinKarsiligi[];

typedef struct sinemaFilmi{
    char ad[ISIM_UZZUNLUK];
    char yonetmen[ISIM_UZZUNLUK];
    int yapimYili;
    FilmTuru tur;
}Film;

extern Film filmlistesi;
extern int filmSayisi;
extern int grupDegeri;

void filmEkle(void);
void filmSil(void);
void filmleriYazdir(void);
void filmleriGrupla(Film* filmListesi, int filmSayisi, GruplamaTuru grupDegeri);
void filmleriSirala(Film* filmListesi, int filmSayisi, SiralamaTuru siralamaTuru);
#endif /* FILM_H */

