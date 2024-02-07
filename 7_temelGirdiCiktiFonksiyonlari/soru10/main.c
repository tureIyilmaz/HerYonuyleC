#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    unsigned short int numbers[16];
    int i;

    for (i = 0; i < 16; i++) {
        numbers[i] = i;
        printf("The %2hu%s number is %2hu, its octal representation is %2o, and its hexadecimal representation is %2X.\n", 
               i + 1, (i + 1 == 1) ? "st" : (i + 1 == 2) ? "nd" : (i + 1 == 3) ? "rd" : "th", 
               i, numbers[i], numbers[i]);
    }

    return 0;
}
