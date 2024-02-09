#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int minimum(int value1, int value2);
int isDivisible(int dividend, int divisor);
int gcd(int value1, int value2);

// Global variables
int number1 = 0, number2 = 0;
int smallestNumber = 0;

int main() {
    printf("Enter two integer numbers: ");
    scanf("%d %d", &number1, &number2);
    
    printf("Greatest Common Divisor (GCD) of these numbers: %d \n", gcd(number1, number2));
    
    return 0;   
}

int minimum(int value1, int value2) {   
    return (value1 <= value2 ? value1 : value2);
}

int isDivisible(int dividend, int divisor) {
    return (dividend % divisor == 0) ? 1 : 0;
}

int gcd(int value1, int value2){
    smallestNumber = minimum(value1, value2);
    
    for(int i = smallestNumber; i > 0; i--) {
        if(isDivisible(value1, i) && isDivisible(value2, i))  {
            return i;
        }
    }
    return 0;
}
