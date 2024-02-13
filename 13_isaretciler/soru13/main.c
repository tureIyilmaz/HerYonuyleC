#include <stdio.h>
#include <ctype.h>

char* my_strToUpper(char* dizi);

int main() {
    char metin[30];    
    printf("Yazdiginiz metinin harfleri buyuk harfe donusur.\n");
    scanf("%s", metin);
    printf("%s\n", my_strToUpper(metin)); 
    return 0;
}

char* my_strToUpper(char* dizi) { 
    char* ptr = dizi; // 
    while (*dizi != '\0') {
        *dizi = toupper(*dizi);
        dizi++;
    }
    
    return ptr; 
}
