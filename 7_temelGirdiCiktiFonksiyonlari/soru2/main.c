#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char ch;
    printf("Enter a hexadecimal digit: ");
    ch = getchar();
    
    ( (48 <= ch && ch <= 57) || (65 <= ch && ch <= 70) || (97 <= ch && ch <= 102) ) 
        ? putchar(ch) 
        : printf("This character is not a hexadecimal digit.\n");
        
    return 0;
}
