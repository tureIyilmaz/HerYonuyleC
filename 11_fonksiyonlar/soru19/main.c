#include <stdio.h>

int obebBul(int a, int b);

int main() {
    int sayi1, sayi2;

    printf("Iki sayi gir: ");
    scanf("%d %d", &sayi1, &sayi2);

    printf("%d ve %d sayilarinin ebobu %d\n", sayi1, sayi2, obebBul(sayi1, sayi2));

    return 0;
}

int obebBul(int a, int b) {

    if (b == 0) {
        return a;
    }
    return obebBul(b, a % b);
}
