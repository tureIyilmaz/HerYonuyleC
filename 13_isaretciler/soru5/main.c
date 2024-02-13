#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int *ptr;
    int sayi = 15;
    ptr = &sayi;
    
    ptr = &ptr;
    
    printf("Isaretci :%p\n", ptr);
    printf("Deger    :%p\n", *ptr);
       
    return (EXIT_SUCCESS);
}

