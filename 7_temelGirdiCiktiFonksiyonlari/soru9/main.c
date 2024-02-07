// İlk harfi alıyor


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    char ch;
    
    printf("Karakter gir ve enter bas: ");
    ch = getchar();
    
    printf("Girdiginiz karakter:");
    putchar(ch);
    putchar(10);
    return 0;
}

