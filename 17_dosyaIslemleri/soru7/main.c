#include <stdio.h>
#include <stdlib.h>
#include "matris.h"

int main() {
    char* kaynakDosyaAdi1 = "matris1.txt";
    char* kaynakDosyaAdi2 = "matris2.txt";
    char* hedefDosyaAdi = "sonuc.txt";
    FILE* kaynakDosya1 = fopen(kaynakDosyaAdi1, "r");
    FILE* kaynakDosya2 = fopen(kaynakDosyaAdi2, "r");
    FILE* hedefDosya = fopen(hedefDosyaAdi, "w");
    Matris matris1, matris2,matrislerinToplami;

    if (kaynakDosya1 != NULL && kaynakDosya2 != NULL) {
        matrisOlustur(kaynakDosya1, &matris1);
        matrisOlustur(kaynakDosya2, &matris2);
        matrislerinToplami = matrisTopla(matris1, matris2);
        matrisiDosyayaYaz(&matrislerinToplami,hedefDosya);

        matrisBosalt(&matris1);
        matrisBosalt(&matris2);
        matrisBosalt(&matrislerinToplami);
        
        fclose(kaynakDosya1);
        fclose(kaynakDosya2);
        fclose(hedefDosya);
    }
    else {
        printf("Dosya bulunamadi\n");
    }

    return 0;
}



