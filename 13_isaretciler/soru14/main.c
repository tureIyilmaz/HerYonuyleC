#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

char* reverse(char* dizi);

int main(int argc, char** argv) {
    char metin[] = "Hello";
    printf("Orijinal: %s\n", metin);
    printf("Reverse : %s\n", reverse(metin));
    return 0;
}

char* reverse(char* dizi) {
    int uzunluk = strlen(dizi); 
    char dizi2[100]; 
    char* ptr = dizi2;
    
    for (int i = 0; i < uzunluk; i++) {
        *(dizi2 + i) = *(dizi + uzunluk - i - 1); 
    }
    *(dizi2 + uzunluk) = '\0';  
    
    return ptr;
}
