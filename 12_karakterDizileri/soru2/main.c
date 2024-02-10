#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strToUpper(char[]);

int main(int argc, char** argv) {
   
    char kelime[20];    
    printf("Buyuk yazmak istedigin kelimeyi gir:");
    scanf("%s", kelime);
    strToUpper(kelime);

    return 0;
}

void strToUpper(char dizi[]){
    int len = strlen(dizi);
    
    for( int i = 0; i < len; i++){
        dizi[i] = toupper(dizi[i]);
    }
    printf("%s\n",dizi);
}


