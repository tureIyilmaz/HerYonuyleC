#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strIsEqualIgnoreCase(char dizi1[],char dizi2[]);

int main(int argc, char** argv) {
    
    char dogru[10] = "Istanbul", cevap[10];
    
    puts("Fatih Sultan Mehmet nereyi fethetmistir:");
    scanf("%s", cevap);
    
    if(strIsEqualIgnoreCase(dogru,cevap)){
        puts("Cevabiniz dogru");
    }
    else{
        puts("Cevabiniz yanlis");
    }
    return 0;
}

int strIsEqualIgnoreCase(char dizi1[],char dizi2[]) {
    
    if(strcmp(strlwr(dizi1),strlwr(dizi2)) == 0) {
        return 1;
    }
    else {
        return 0;
    }   
}

