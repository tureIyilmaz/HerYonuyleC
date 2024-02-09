

#include <stdio.h>
#include <stdlib.h>

int asalSayiMi(int);

int main(int argc, char** argv) {
    
    int sayi;
    
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    
    for(int i=2; i <= sayi; i++){
        if(asalSayiMi(i) == 1){
            printf("%d ",i);
        }
    }
    printf("sayilari asal sayidir");
}

int asalSayiMi(int sayi){

    for(int i=2; i < sayi; i++){
        if(sayi % i == 0){
            return 0;
        }       
    }
    return 1;
}

