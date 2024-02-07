#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    unsigned short int number;
    
    printf("Enter the number you want to check if it's odd or even: \n");
    
    while (1) {
        scanf("%hu", &number);
        if (number % 2 == 0) {
            printf("%hu is an even number.\n", number);
        } else {
            printf("%hu is an odd number.\n", number);
        }
    }
    
    return 0;
}
