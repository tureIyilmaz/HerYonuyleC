

/*
 * If you need to read a single character without displaying it on the screen and 
 * without requiring the user to press Enter, you can use getch().
 * 
 * If you need to read a single character and immediately display it on the screen 
 * without requiring the user to press Enter, you can use getche().
 * 
 * If you need to read a single character and echo it on the screen, 
 * waiting for the user to press Enter, you can use getchar().
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char ch;
    printf("Enter a hexadecimal digit: ");
    ch = getche();
    
    putchar(10);
    
    ( (48 <= ch && ch <= 57) || (65 <= ch && ch <= 70) || (97 <= ch && ch <= 102) ) 
        ? putchar(ch)
        : printf("This character is not a hexadecimal digit.\n");
        
    return 0;
}
