#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isAnagram(char* dizi1, char* dizi2);

int main(int argc, char** argv) {
    char kelime1[20],kelime2[20];
    printf("Anagram olup olmadigini ogrenmek istediginiz kelimeyi giriniz:");
    scanf("%s", kelime1);
    printf("Anagram olup olmadigini ogrenmek istediginiz diger kelimeyi giriniz:");
    scanf("%s", kelime2); 
    
    if (isAnagram(kelime1, kelime2)) {
        printf("Anagramdir.");
    } else {
        printf("Anagram degildir.");
    }
    return 0;
}

int isAnagram(char* dizi1, char* dizi2) {

    int sayac = 0;
    
    if( strlen(dizi1) != strlen(dizi2)) {
        return 0;
    }
    
    for (int i = 0; i < strlen(dizi1); i++) {
        for (int j = 0; j < strlen(dizi2); j++) {
            if(*(dizi1 + i) == *(dizi2 + j)) {
                sayac++;
            }
            if(*(dizi2 + i) == *(dizi1 + j)) {
                sayac++;
            }
        }
        if(sayac < 2){
            return 0;
        }
        sayac = 0;
    }   

    return 1;

}
