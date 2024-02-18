#ifndef MATRIS_ISLEMLERI_H
#define MATRIS_ISLEMLERI_H

typedef struct{
    float **elemanlar;
    int satirSayisi;
    int sutunSayisi;
}Matris;

void matrisOlustur(Matris *ptrMatris);
Matris matrisTopla(Matris matris1, Matris matris2);
Matris matrisCikar(Matris matris1, Matris matris2);
Matris transpozBul(Matris matris);
void matrisYazdir(Matris matris);

#endif /* MATRIS_ISLEMLERI_H */

