
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int sayilar[10] = {25, 22, 17, 19, 47, 3, 98, 5 , 124, 10}; 
    int i = 0, j = 0, sayi = 0, buyuk = 0, bulundu = 0, girilenDeger, gecici = 0;

    printf("Bir sayi gir:");
    scanf("%d", &girilenDeger);
    
    for(i=0; i<9; i++){
        for(j=0; j <9-i; j++){
            if(sayilar[j] > sayilar[j+1]){
                gecici = sayilar[j];
                sayilar[j] = sayilar[j+1];
                sayilar[j+1] = gecici;
            }
        }
    }
    
    printf("en kucuk %d.sayi = %d ",girilenDeger,sayilar[girilenDeger - 1]);
    return 0;
}

