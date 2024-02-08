#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int number = 0;
    
    printf("Enter the number to print the pattern: ");
    scanf("%d", &number);
    
    for(int i = 1; i <= number * 2; i++) {
        for(int j = number; j > abs(number - i); j--) {
           printf("*"); 
        }
        printf("\n");    
    }
    
    return 0;
}

