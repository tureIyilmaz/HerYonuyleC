#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv) {
    
    char kelime[20], deger[20] = "Istanbul";
    
    puts("Fatih Sultan Mehmet nereyi fethetmistir:");
    scanf("%s", kelime);
    
    if(strcmpi(kelime,deger) == 0){
        printf("DOGRU");
    }
    else{
        printf("YANLIS");
    }
   

    return 0;
}