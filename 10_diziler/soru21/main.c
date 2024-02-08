#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int dizi[10] = {4, 2, 1, 5, 0, 8, 6, 9, 7, 3};
    int i, j, gecici = 0, girilenDeger = 0; 
    int solIndex = 0, sagIndex = 10, bulundu = 0;
    int ortIndex = (solIndex + sagIndex)/2; 
    

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                
                gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
            }
        }
    }

    
    printf("Aranacak rakami gir:");
    scanf("%d", &girilenDeger);
    
    i = 0;
    
    while(bulundu == 0 && solIndex <= sagIndex) {
        if(girilenDeger == dizi[ortIndex]) {
            bulundu = 1;
            break;
        }
        else if(girilenDeger > dizi[ortIndex]){
            solIndex = ortIndex + 1;         
        }    
        else if(girilenDeger < dizi[ortIndex]){
            sagIndex = ortIndex - 1;
        }     
        ortIndex = (solIndex + sagIndex) / 2;
    }
    
    if( bulundu == 1 ){
        printf("%d. indis girilen degere esittir.", ortIndex);
    }
 
    return 0;
}

