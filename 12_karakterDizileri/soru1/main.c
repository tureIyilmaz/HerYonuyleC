#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char dizi[]);

int main() {

    char karakterDizisi[20];    
    printf("Tersini istedigin kelimeyi gir:");
    scanf("%s", karakterDizisi);
    reverse(karakterDizisi);
    return 0;
}

void reverse(char dizi[]) {
    
    char tersi[20];
    int uzunluk = strlen(dizi);
    
    for(int i = 0; i < uzunluk; i ++) {
        tersi[i] = dizi[uzunluk - 1 - i];
    }
    tersi[uzunluk] = '\0';
    printf("%s\n",tersi);
}

