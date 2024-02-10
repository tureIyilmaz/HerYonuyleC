#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindromIgnoreIgnoreCase(char dizi[]);

int main() {
    char kelime[20];

    printf("Palindrom olup olmadigini kontrol etmek için bir kelime giriniz: ");
    scanf("%s", kelime);

    if (isPalindromIgnoreIgnoreCase(kelime)) {
        printf("%s bir palindromdur.\n", kelime);
    } else {
        printf("%s bir palindrom degildir.\n", kelime);
    }

    return 0;
}
   

int isPalindromIgnoreIgnoreCase(char dizi[]) {
    
    int uzunluk = strlen(dizi);
    int i, j;
    dizi = strlwr(dizi);
    for (i = 0, j = uzunluk - 1; i < j; i++, j--) {
        if (dizi[i] != dizi[j]) {
            return 0; // Palindrom değil
        }
    }

    return 1; // Palindrom
}
