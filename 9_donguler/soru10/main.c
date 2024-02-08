#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int number = 0;
    
    printf("Enter the number to print the pattern: ");
    scanf("%d", &number);
    
    int i = 1;
    while( i <= number * 2 ) {
        int j = number;
        while( j > abs(number - i)) {
           printf("*"); 
            j--;
        }
        printf("\n"); 
        i++;
    }
    
    return 0;
}

