#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int kareBul(int);
int kuvvetHesapla(int, int);

int main(int argc, char** argv) {
    
    int base, exponent;
    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    printf("%d raised to the power of %d = %d\n", base, exponent, kuvvetHesapla(base, exponent));

    return 0;
}

int kareBul(int number) {
    return number * number;
}

int kuvvetHesapla(int base, int exponent) {
    int result = 1;
    
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base = kareBul(base);
        exponent /= 2;
    }   
    return result;
}
