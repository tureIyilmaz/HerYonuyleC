#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int *sayilar, *tekSayilar, *ciftSayilar, sayiAdeti, tek = 0, cift = 0;
    
    printf("Tek mi cift mi oldugunu ogrenmek istedigin sayi adetini giriniz:");
    scanf("%d", &sayiAdeti);
    
    sayilar = (int *) calloc(sayiAdeti,sizeof(int));
    
    for(int i = 0; i < sayiAdeti; i++) {
        printf("%d. sayiyi giriniz:", i + 1);
        scanf("%d", sayilar + i);
        
        if(*(sayilar + i) % 2 == 0) {
            cift++;
        }
        else {
            tek++;
        }
    }
    
    tekSayilar  = (int *) calloc(tek,sizeof(int));
    ciftSayilar = (int *) calloc(cift,sizeof(int));
    
    int tekIndex = 0;
    int ciftIndex = 0;
    
    for(int i = 0; i < sayiAdeti; i++) {
        
        if(*(sayilar + i) % 2 != 0) {
            *(tekSayilar + tekIndex) = *(sayilar + i);
            tekIndex++;
        }
        else {
            *(ciftSayilar + ciftIndex) = *(sayilar + i);
            ciftIndex++;
        }
    }
    
    printf("Tek sayilar:");
    
    for(int i = 0; i < tek; i++) {
        printf("%d ", *(tekSayilar + i));
    }
    
    printf("\nCift sayilar:");
    
    for(int i = 0; i < cift; i++) {
        printf("%d ", *(ciftSayilar + i));
    }
    
    
    
    
    free(tekSayilar);
    free(ciftSayilar);
    free(sayilar);
    
    return (EXIT_SUCCESS);
}
