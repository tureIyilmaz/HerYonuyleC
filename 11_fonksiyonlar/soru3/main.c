#include <stdio.h>
#include <stdlib.h>

int kareBul(int);

int main(int argc, char** argv) {
    
    int sayi;
    printf("Bir sayi gir:");
    scanf("%d", &sayi);
    
    printf("Sayinin karesi = %d",kareBul(sayi));

    return 0;
}

int kareBul(int sayi)
{
    return sayi*sayi;
}

