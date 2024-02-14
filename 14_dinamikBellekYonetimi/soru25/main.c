#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int dizi[10];
    memset(dizi, 250, sizeof(dizi));

    printf("Dizi elemanlari: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}
