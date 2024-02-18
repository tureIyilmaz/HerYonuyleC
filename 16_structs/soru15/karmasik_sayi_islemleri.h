
#ifndef KARMASIK_SAYI_ISLEMLERI_H
#define KARMASIK_SAYI_ISLEMLERI_H

typedef struct{
    int gercek;
    int sanal;
}KarmasikSayi;

KarmasikSayi karmasikSayiOlustur();
void karmasikTopla(KarmasikSayi sayi1, KarmasikSayi sayi2);
void karmasikCikar(KarmasikSayi sayi1, KarmasikSayi sayi2);
void karmasikCarp(KarmasikSayi sayi1, KarmasikSayi sayi2);
void karmasikBolen(KarmasikSayi sayi1, KarmasikSayi sayi2);
KarmasikSayi karmasikEsleniginiBul(KarmasikSayi sayi);
void karmasikDegerYaz(KarmasikSayi sayi);
void karmasikKutupsalKordinatYaz(KarmasikSayi sayi);
#endif /* KARMASIK_SAYI_ISLEMLERI_H */

