#include <stdlib.h>
#include "karakter_islemleri.h"

int my_strlen(char* dizi){
    
    int length = 0;
    
    while(*(dizi + length) != '\0') {
        length++;
    }
    return length;
}

int my_strcmp(char* dizi1, char* dizi2) {
    
    if(my_strlen(dizi1) != my_strlen(dizi2)) {
        return 0;
    }
    
    for(int i = 0; i < my_strlen(dizi1); i++) {
        if(*dizi1 != *dizi2) {
            return 0;
            dizi1++;
            dizi2++;
        }
    }
    return 1;
}

char* my_strcat(char* dest, const char* src) {
    char* original_dest = dest; 
    
    while (*dest != '\0') {
        dest++; 
    }
    

    while (*src != '\0') {
        *dest = *src; 
        src++; 
        dest++;
    }
    
    *dest = '\0';
    
    return original_dest; 
}

