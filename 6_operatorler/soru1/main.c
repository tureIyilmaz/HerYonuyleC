#include <stdio.h>

int main(int argc, char** argv) {
    int number;
    
    printf("Enter the number you want to check if it's odd or even: ");
    scanf("%d", &number);
    
    if (number % 2 == 1) {
        printf("%d is an odd number.\n", number);
    } else {
        printf("%d is an even number.\n", number);
    }
    
    return 0;
}
