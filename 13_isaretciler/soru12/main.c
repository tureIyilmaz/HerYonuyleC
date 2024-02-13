#include <stdio.h>

int my_strcmp(char* dizi1, const char* dizi2);

int main() {
    
    char yanit[30]; 
    char cevap[] = "Mustafa Kemal Ataturk"; 
    
    printf("Turkiye'nin ilk cumhurbaskani kimdir:");
    scanf("%s", yanit);


    if(my_strcmp(yanit, cevap)) {
        printf("Cevap dogru\n");
    } 
    else {
        printf("Cevap yanlis\n");
    }

    return 0;
}

int my_strcmp(char* dizi1, const char* dizi2) {
    
    while (*dizi1 != '\0' && *dizi2 != '\0') {
        if(*dizi1 == *dizi2) {
            dizi1++; 
            dizi2++;
        }
        else{
           return 0;        
        }
    }   
    return 1;
}
