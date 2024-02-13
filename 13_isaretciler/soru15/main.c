#include <stdio.h>
#include <stdlib.h>

int isPalindrome(char* dizi);

int main(int argc, char** argv) {
    char kelime[20];
    printf("Palindrom olup olmadigini ogrenmek istediginiz kelimeyi giriniz:");
    scanf("%s", kelime);
    if (isPalindrome(kelime)) {
        printf("Palindromdur.");
    } else {
        printf("Palindrom degildir.");
    }
    return 0;
}

int isPalindrome(char* dizi) {
    int sayac = 0;
    while (*(dizi + sayac) != '\0') {
        sayac++;
    }
    for (int i = 0; i < sayac / 2; i++) {
        if (*(dizi + i) != *(dizi + sayac - i - 1)) {
            return 0;
        }
    }
    return 1;
}
