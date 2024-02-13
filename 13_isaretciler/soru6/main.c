

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int *p1, *p2;
    int sayi = 15;
    int sayi2 = 20;
    
    p1 = &sayi;
    p2 = &sayi2;
    
    printf("sayi1 + sayi2 = %d", *p1 + *p2);
    return 0;
}

