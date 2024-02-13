#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

void myPrintf(char* bicimlendirilecekMetin, ...);

int main(int argc, char** argv) {
    
    int sayi = 42;
    
    myPrintf("Test int: %d\n", sayi);
    myPrintf("Test string: %s\n", "Hello");
    myPrintf("Test char: %c\n", 'X');
    myPrintf("Test float: %f\n", 3.14);
    myPrintf("Test pointer: %p\n", &sayi);
    myPrintf("Test double: %g\n", 6.789);
    myPrintf("Test int 5: %5d\n", sayi);
    myPrintf("Test int 10: %10d\n", sayi);
    myPrintf("Test float 10.2: %10.2f\n", 3.14); // Düzeltildi
    
    return (EXIT_SUCCESS);
}

void myPrintf(char* bicimlendirilecekMetin, ...) {
    
    int tamSayiParametre;
    double ondalikSayiParametre;
    char* metinParametre;
    char karakterParametre;
    void* pointerParametre;
    int alanGenisligi; 
    int hassasiyet;
    va_list(parametreler);
    va_start(parametreler, bicimlendirilecekMetin);
    
    char* ptr = bicimlendirilecekMetin;
    
    while(*ptr != '\0') {
        if(*ptr == '%') {
            if (*(ptr + 1) >= '1' && *(ptr + 1) <= '9') {
                alanGenisligi = *(ptr + 1) - '0'; 
                ptr++;
            } 
            else {
                alanGenisligi = 0;
            }
            if(*ptr == '.') {
                if (*(ptr + 1) >= '1' && *(ptr + 1) <= '9') {
                    hassasiyet = *(ptr + 1) - '0'; 
                    ptr++;
                } 
                else {
                    hassasiyet = 0;
                }
            }
            switch(*++ptr) {
                case 'd':
                    tamSayiParametre = va_arg(parametreler, int);
                    if (alanGenisligi > 0) {
                        printf("%*d", alanGenisligi, tamSayiParametre);
                    } else {
                        printf("%d", tamSayiParametre);
                    }
                    break;
                case 's':
                    metinParametre = va_arg(parametreler, char*);
                    if (alanGenisligi > 0) {
                        printf("%*s", alanGenisligi, metinParametre);
                    } else {
                        printf("%s", metinParametre);
                    }
                    break;
                case 'c':
                    karakterParametre = va_arg(parametreler, int);
                    printf("%c", (char)karakterParametre);
                    break;
                case 'f':
                    ondalikSayiParametre = va_arg(parametreler, double);
                    if (alanGenisligi > 0 && hassasiyet > 0) {
                        printf("%*.*f", alanGenisligi, hassasiyet, ondalikSayiParametre); 
                    } 
                    else if (alanGenisligi > 0){
                        printf("%*f", hassasiyet, ondalikSayiParametre); 
                    }
                    else if (hassasiyet > 0){
                        printf("%.*f", hassasiyet, ondalikSayiParametre); 
                    }
                    else {
                        printf("%f", ondalikSayiParametre); 
                    }
                    break;
                case 'g':
                    ondalikSayiParametre = va_arg(parametreler, double);
                    if (alanGenisligi > 0) {
                        printf("%*.*g", alanGenisligi, hassasiyet, ondalikSayiParametre); 
                    } else {
                        printf("%.*g", hassasiyet, ondalikSayiParametre); // 
                    }
                    break;
                case 'p':
                    pointerParametre = va_arg(parametreler, void*);
                    if (alanGenisligi > 0) {
                        printf("%*p", alanGenisligi, pointerParametre);
                    } else {
                        printf("%p", pointerParametre);
                    }
                    break;
                default:
                    putchar(*ptr);
                    break;
            }
        }
        else {
            putchar(*ptr);
        }
        ptr++;
    }
    va_end(parametreler);
}
