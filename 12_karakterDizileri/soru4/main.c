#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strToLower(char[]);

int main(int argc, char** argv) {
    
    int kelime[20];   
    printf("Kucuj yazmak istedigin kelimeyi gir:");
    scanf("%s", kelime);
    strToLower(kelime);
    
    return 0;
}

void strToLower(char dizi[]){
    
    for(int i = 0;i < strlen(dizi); i++){
        dizi[i] = tolower(dizi[i]);
    }
    printf("%s   ",dizi);
}

