#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "karmasik_sayi_islemleri.h"


KarmasikSayi karmasikSayiOlustur()
{
    KarmasikSayi sonuc;
    
    printf("Karmasik sayinin gercel kismini giriniz :");
    scanf("%d",&sonuc.gercek);
    
    printf("Karmasik sayinin gercel kismini giriniz :");
    scanf("%d",&sonuc.sanal);
    karmasikDegerYaz(sonuc);
    return sonuc;
}

void karmasikTopla(KarmasikSayi sayi1, KarmasikSayi sayi2)
{
    KarmasikSayi sonuc;
    sonuc.gercek = sayi1.gercek + sayi2.gercek;
    sonuc.sanal = sayi1.sanal + sayi2.sanal;
    
    karmasikDegerYaz(sonuc);
}

void karmasikCikar(KarmasikSayi sayi1, KarmasikSayi sayi2)
{
    KarmasikSayi sonuc;
    sonuc.gercek = sayi1.gercek - sayi2.gercek;
    sonuc.sanal = sayi1.sanal - sayi2.sanal;
    
    karmasikDegerYaz(sonuc);
}

void karmasikCarp(KarmasikSayi sayi1, KarmasikSayi sayi2)
{
    KarmasikSayi sonuc;
    sonuc.gercek = (sayi1.gercek * sayi2.gercek) - (sayi1.sanal * sayi2.sanal);
    sonuc.sanal = (sayi1.gercek  * sayi2.sanal) + (sayi1.sanal * sayi2.gercek);
    

    karmasikDegerYaz(sonuc);
}

void karmasikBolen(KarmasikSayi sayi1, KarmasikSayi sayi2)
{
    KarmasikSayi sonuc, eslenik;
     eslenik = karmasikEsleniginiBul(sayi2);
     
     sonuc.gercek = ((sayi1.gercek * eslenik.gercek) - (sayi1.sanal * eslenik.sanal)) /(float)(((sayi2.gercek * eslenik.gercek) - (sayi2.sanal * eslenik.sanal)));
     sonuc.sanal = ((sayi1.gercek  * eslenik.sanal) + (sayi1.sanal * eslenik.gercek)) /(float)(((sayi2.gercek  * eslenik.sanal) + (sayi2.sanal * eslenik.gercek)));
     
     printf("\n%f + %fi\n",sonuc.gercek, sonuc.sanal);
}

KarmasikSayi karmasikEsleniginiBul(KarmasikSayi sayi)
{
    KarmasikSayi sonuc;
    
    sonuc.gercek = sayi.gercek;
    sonuc.sanal = -sayi.sanal;
    
    return sonuc;
}

void karmasikDegerYaz(KarmasikSayi sayi)
{
    KarmasikSayi sonuc;
    sonuc.gercek = sayi.gercek;
    sonuc.sanal = sayi.sanal;
    printf("\n%d",sonuc.gercek);
    if(sonuc.sanal > 0)
    {
        printf(" + ");
    }
    else
    {
        printf(" - ");
    }
    printf("%di\n",abs(sonuc.sanal));
}

void karmasikKutupsalKordinatYaz(KarmasikSayi sayi)
{
    KarmasikSayi sonuc;
    // r
    sonuc.gercek  = sqrtf(sayi.gercek ^ 2 + sayi.sanal ^ 2) ;
    //açı
    sonuc.sanal = atan(sayi.sanal / (float)sayi.gercek);
    
    printf("\n%f + /_%f\n",sonuc.gercek, sonuc.sanal);
}