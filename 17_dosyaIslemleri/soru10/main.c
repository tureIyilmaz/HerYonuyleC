#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char* dosyaAdi = "metin.txt";
    //printf("Dosyanın adini giriniz"); scanf("%s", dosyaAdi);
    FILE* dosya = fopen(dosyaAdi, "r");
    int ch = fgetc(dosya), i = 0;
    while(ch != EOF){
        ch = fgetc(dosya);
        // if(ch != 32 && ch != 10){ bosluk istenmez ise 
        if(ch != 10){
            i++;
        }      
    }
    printf("%d",i);
    fclose(dosya);
    return (EXIT_SUCCESS);
}

