

#include <stdio.h>
#define UZUNLUK 8


int main(int argc, char** argv) {

    int i, *ptr;
    int dizi[UZUNLUK] = {7, 6, 5, 4, 3, 2, 1, 0};
    
    ptr = dizi;
    
    for(i = 0; i < 7; i++)
        ptr[i] = dizi[*(ptr + i)];
    for(i = 0; i < 7; i++)
        printf("%d",dizi[i]);
    return 0;
}

