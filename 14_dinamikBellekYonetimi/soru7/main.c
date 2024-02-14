#include <stdio.h>
#include <stdlib.h>

int asalMi(int);

int main(int argc, char** argv) {

    int *sayilar, *asalSayilar, sayiAdeti, asal = 0;
    
    printf("Asal olup olmadigini ogrenmek istedigin sayi adetini giriniz:");
    scanf("%d", &sayiAdeti);
    
    sayilar = (int *) calloc(sayiAdeti,sizeof(int));
    
    for(int i = 0; i < sayiAdeti; i++) {
        printf("%d. sayiyi giriniz:", i + 1);
        scanf("%d", sayilar + i);
        
        if(asalMi(*(sayilar + i))) {
            asal++;
        }
        
    }
    
    asalSayilar  = (int *) calloc(asal,sizeof(int));
    
    int asalIndex = 0;
    
    printf("Asal sayilar:");
    
    for(int i = 0; i < sayiAdeti; i++) {
        if(asalMi(*(sayilar + i))) {
            *(asalSayilar + asalIndex) = *(sayilar + i);
            printf("%d ", *(asalSayilar + asalIndex));
            asalIndex++;          
        }    
    }
    
    free(asalSayilar);
    free(sayilar);
    
    return (EXIT_SUCCESS);
}

int asalMi(int sayi) {
    
    for(int i = 2; i < sayi; i++) {
        if(sayi % i == 0) {
            return 0;
        }
    }
    return 1;
}