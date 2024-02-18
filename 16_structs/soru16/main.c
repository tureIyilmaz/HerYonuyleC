#include <stdio.h>
#include <string.h>



typedef union {
   int intSayi;
   float floatSayi;          
}Sayi;

typedef enum {
    TAM_SAYI, ONDALIK_SAYI
}SayiTipi;

typedef struct {
    SayiTipi tip;
    Sayi deger;
}DiziElemani;

int main() {
    
    int uzunluk,i;
    printf("Kac sayi gireceksiniz");
    scanf("%d",&uzunluk);
    DiziElemani *diziPtr = (DiziElemani*)malloc(sizeof(DiziElemani) * uzunluk);
    DiziElemani *ptr = diziPtr;
    
    for(int i = 0; i < uzunluk; i++) {
        printf("\n%d. sayinin tipini giriniz(tamsayi:0, float:1) :",i+1);
        scanf("%d", &(ptr->tip));
        printf("\n%d. sayinin degerini giriniz :",i+1);
        
        int k; 
        float f;
        if(ptr->tip == TAM_SAYI) {
            scanf("%d", &k);
            ptr->deger.intSayi = k;
        }
        else {
            scanf("%f", &f);
            ptr->deger.floatSayi = f;
        }
        ptr++;
    }
    printf("\nGirdiginiz degerler:\n");
    for(int i = 0; i < uzunluk; i++) {
        yazdir(diziPtr + i);
        printf("\n");
    }
    free(ptr);
    return 0;
}

void yazdir(DiziElemani *diziElemani) {
    if(diziElemani->tip == TAM_SAYI) {
        printf("%d", diziElemani->deger.intSayi);
    }
    else {
        printf("%.2f", diziElemani->deger.floatSayi);
    }
}

