#include <stdio.h>
#include <stdlib.h>

int main() {
    int number1, number2, number3;
    
    printf("Enter three numbers to find out which one is the largest: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    
    int largest = (number1 > number2) ? number1 : number2;
    largest = (largest > number3) ? largest : number3;
    
    printf("%d is the largest number.\n", largest);
    
    return 0;
}
