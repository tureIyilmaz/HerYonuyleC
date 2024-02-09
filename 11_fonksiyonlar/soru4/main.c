#include <stdio.h>
#include <stdlib.h>

int kuvvetHesapla(int,int);

int main(int argc, char** argv) {
    printf("%d",kuvvetHesapla(7,3));
    return 0;
}

int kuvvetHesapla(int sayi, int kuvvet){
    if(kuvvet ==1) {
        return sayi;
    }   
    return sayi*kuvvetHesapla(sayi,kuvvet-1);
}

